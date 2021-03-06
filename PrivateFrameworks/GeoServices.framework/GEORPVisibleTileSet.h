/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPVisibleTileSet : PBCodable <NSCopying> {
    struct { 
        unsigned int identifier : 1; 
        unsigned int style : 1; 
    }  _has;
    unsigned int  _identifier;
    int  _style;
    struct GEORPVisibleTileKey { unsigned int x1; unsigned int x2; unsigned int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; } * _tileKeys;
    unsigned int  _tileKeysCount;
    unsigned int  _tileKeysSpace;
}

@property (nonatomic) BOOL hasIdentifier;
@property (nonatomic) BOOL hasStyle;
@property (nonatomic) unsigned int identifier;
@property (nonatomic) int style;
@property (nonatomic, readonly) struct GEORPVisibleTileKey { unsigned int x1; unsigned int x2; unsigned int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; }*tileKeys;
@property (nonatomic, readonly) unsigned int tileKeysCount;

- (int)StringAsStyle:(id)arg1;
- (void)addTileKey:(struct GEORPVisibleTileKey { unsigned int x1; unsigned int x2; unsigned int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; })arg1;
- (void)clearTileKeys;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasIdentifier;
- (BOOL)hasStyle;
- (unsigned int)hash;
- (unsigned int)identifier;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasIdentifier:(BOOL)arg1;
- (void)setHasStyle:(BOOL)arg1;
- (void)setIdentifier:(unsigned int)arg1;
- (void)setStyle:(int)arg1;
- (void)setTileKeys:(struct GEORPVisibleTileKey { unsigned int x1; unsigned int x2; unsigned int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; }*)arg1 count:(unsigned int)arg2;
- (int)style;
- (id)styleAsString:(int)arg1;
- (struct GEORPVisibleTileKey { unsigned int x1; unsigned int x2; unsigned int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; })tileKeyAtIndex:(unsigned int)arg1;
- (struct GEORPVisibleTileKey { unsigned int x1; unsigned int x2; unsigned int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; }*)tileKeys;
- (unsigned int)tileKeysCount;
- (void)writeTo:(id)arg1;

@end
