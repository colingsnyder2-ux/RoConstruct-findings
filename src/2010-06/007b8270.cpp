// roc 2010-06 007b8270  unit: CXTPCommandBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007b8270
//
// 007b8270  b8dc62be00           mov eax, 0xbe62dc
// 007b8275  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007b8270()
{
    return &G;
}
