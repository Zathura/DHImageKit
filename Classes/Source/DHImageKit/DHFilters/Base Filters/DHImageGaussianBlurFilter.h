//
//  DHImageGaussianBlurFilter.h
//  DHImageKit
//
//  Created by 黄鸿森 on 2017/9/9.
//  Copyright © 2017年 Huang Hongsen. All rights reserved.
//

#import <GPUImage/GPUImage.h>
#import "DHImageUpdatable.h"
@interface DHImageGaussianBlurFilter : GPUImageGaussianBlurFilter<DHImageUpdatable> {
    GLuint strengthUniform;
}

@end
