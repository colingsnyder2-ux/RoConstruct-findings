// roc 2009-06 006319f0  unit: RBX::Workspace  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006319f0
//
// 006319f0  b8e8b9a400           mov eax, 0xa4b9e8
// 006319f5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006319f0()
{
    return &G;
}
