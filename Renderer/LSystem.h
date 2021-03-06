// Copyright 2008 Google Inc.
// 
// Licensed under the Apache License, Version 2.0 (the "License"); you may not
// use this file except in compliance with the License.  You may obtain a copy
// of the License at
// 
// http://www.apache.org/licenses/LICENSE-2.0
// 
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
// WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
// License for the specific language governing permissions and limitations under
// the License.

// Implement L-System module

#import "RuntimeObject.h"

@class Function;

@interface LSystem : RuntimeObject {
  Function *drawFunction_;
  CGFloat length_;
  CGFloat lengthScale_;
  CGFloat angle_;
  int depth_;
  int maxDepth_;
  unichar lastRule_;
  unichar lastTurn_;
  NSString *root_;
  NSMutableDictionary *rules_;
  
  Runtime *runtime_;
  CGContextRef layerRef_;
}

@end
