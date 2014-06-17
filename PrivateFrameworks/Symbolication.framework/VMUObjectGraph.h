/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface VMUObjectGraph : VMUDirectedGraph  {
    struct _VMUObjectGraphEdge { unsigned int x1 : 64; unsigned int x2 : 4; unsigned int x3 : 60; } *_referenceTable;
    unsigned int _referenceTableCount;
    unsigned int _referenceTableCapacity;
    struct { unsigned long long x1; unsigned int x2 : 60; unsigned int x3 : 4; id x4; } *_internalizedNodes;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _nodeProvider;

}


- (struct { unsigned long long x1; int x2; unsigned long long x3; })referenceInfoWithName:(unsigned int)arg1;
- (struct { unsigned long long x1; unsigned int x2 : 60; unsigned int x3 : 4; id x4; })nodeWithName:(unsigned int)arg1;
- (void)enumerateReferencesOfNode:(unsigned int)arg1 withBlock:(id)arg2;
- (void)enumerateReferencesWithBlock:(id)arg1;
- (void)enumerateMarkedObjects:(void*)arg1 withBlock:(id)arg2;
- (void)internalizeNodes;
- (void)invertEdges;
- (unsigned int)addEdgeFromNode:(unsigned int)arg1 toNode:(unsigned int)arg2;
- (unsigned int)addEdgeFromNode:(unsigned int)arg1 sourceOffset:(unsigned long long)arg2 withScanType:(int)arg3 toNode:(unsigned int)arg4 destinationOffset:(unsigned long long)arg5;
- (id)initWithNodes:(unsigned int)arg1 nodeProvider:(id)arg2;
- (void)enumerateObjectsWithBlock:(id)arg1;
- (void)dealloc;

@end