// roc 2011-06 008a3d50  unit: CXTPDockBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a3d50
//
// 008a3d50  b8ec29ad00           mov eax, 0xad29ec
// 008a3d55  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008a3d50()
{
    return &G;
}
