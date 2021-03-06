/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIRenditionMetrics : NSObject {
    struct CGSize { 
        float width; 
        float height; 
    }  _auxiliary1BottomLeftMargin;
    struct CGSize { 
        float width; 
        float height; 
    }  _auxiliary1TopRightMargin;
    struct CGSize { 
        float width; 
        float height; 
    }  _auxiliary2BottomLeftMargin;
    struct CGSize { 
        float width; 
        float height; 
    }  _auxiliary2TopRightMargin;
    float  _baseline;
    struct CGSize { 
        float width; 
        float height; 
    }  _contentBottomLeftMargin;
    struct CGSize { 
        float width; 
        float height; 
    }  _contentTopRightMargin;
    struct crmFlags { 
        unsigned int scalesVertically : 1; 
        unsigned int scalesHorizontally : 1; 
        unsigned int reserved : 14; 
    }  _crmFlags;
    struct CGSize { 
        float width; 
        float height; 
    }  _edgeBottomLeftMargin;
    struct CGSize { 
        float width; 
        float height; 
    }  _edgeTopRightMargin;
    struct CGSize { 
        float width; 
        float height; 
    }  _imageSize;
    float  _scale;
}

- (struct CGSize { float x1; float x2; })auxiliary1BottomLeftMargin;
- (struct CGSize { float x1; float x2; })auxiliary1TopRightMargin;
- (struct CGSize { float x1; float x2; })auxiliary2BottomLeftMargin;
- (struct CGSize { float x1; float x2; })auxiliary2TopRightMargin;
- (float)baseline;
- (struct CGSize { float x1; float x2; })contentBottomLeftMargin;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentRect;
- (struct CGSize { float x1; float x2; })contentTopRightMargin;
- (struct CGSize { float x1; float x2; })edgeBottomLeftMargin;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })edgeRect;
- (struct CGSize { float x1; float x2; })edgeTopRightMargin;
- (BOOL)hasAlignmentEdgeMargins;
- (BOOL)hasOpaqueContentBounds;
- (struct CGSize { float x1; float x2; })imageSize;
- (id)initWithImageSize:(struct CGSize { float x1; float x2; })arg1 edgeBottomLeft:(struct CGSize { float x1; float x2; })arg2 edgeTopRight:(struct CGSize { float x1; float x2; })arg3 contentBottomLeft:(struct CGSize { float x1; float x2; })arg4 contentTopRight:(struct CGSize { float x1; float x2; })arg5 baseline:(float)arg6 auxiliary1BottomLeft:(struct CGSize { float x1; float x2; })arg7 auxiliary1TopRight:(struct CGSize { float x1; float x2; })arg8 auxiliary2BottomLeft:(struct CGSize { float x1; float x2; })arg9 auxiliary2TopRight:(struct CGSize { float x1; float x2; })arg10 scalesVertically:(BOOL)arg11 scalesHorizontally:(BOOL)arg12 scale:(float)arg13;
- (id)initwithImageSize:(struct CGSize { float x1; float x2; })arg1 scale:(float)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })insetContentRectWithMetrics:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })insetRectWithMetrics:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)scale;
- (BOOL)scalesHorizontally;
- (BOOL)scalesVertically;

@end
