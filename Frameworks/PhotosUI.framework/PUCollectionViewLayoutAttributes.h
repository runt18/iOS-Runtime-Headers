/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUCollectionViewLayoutAttributes : UICollectionViewLayoutAttributes {
    struct CGPoint { 
        float x; 
        float y; 
    }  _edgeParallaxOffset;
    struct CGPoint { 
        float x; 
        float y; 
    }  _parallaxOffset;
}

@property (nonatomic) struct CGPoint { float x1; float x2; } edgeParallaxOffset;
@property (nonatomic) struct CGPoint { float x1; float x2; } parallaxOffset;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CGPoint { float x1; float x2; })edgeParallaxOffset;
- (BOOL)isEqual:(id)arg1;
- (struct CGPoint { float x1; float x2; })parallaxOffset;
- (void)setEdgeParallaxOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setParallaxOffset:(struct CGPoint { float x1; float x2; })arg1;

@end
