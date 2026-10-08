// roc 2007-08 0056d610  unit: RBX::VContentId::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056d610
//
// 0056d610  b844288800           mov eax, 0x882844
// 0056d615  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0056d610()
{
    return &G;
}
