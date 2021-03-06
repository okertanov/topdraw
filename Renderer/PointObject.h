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

// Wrapper around NSPoint

#import "RuntimeObject.h"

@interface PointObject : RuntimeObject {
  NSPoint pt_;
}

- (id)initWithPoint:(NSPoint)pt;

- (NSPoint)point;
- (void)setPoint:(NSPoint)point;

- (void)setX:(CGFloat)x;
- (CGFloat)x;
- (void)setY:(CGFloat)y;
- (CGFloat)y;

- (PointObject *)add:(NSArray *)arguments;
- (CGFloat)distance:(NSArray *)arguments;
  
@end