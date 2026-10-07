// roc 2011-06 00639740  unit: RBX::VProtectedString::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00639740
//
// 00639740  b890a7c200           mov eax, 0xc2a790
// 00639745  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00639740()
{
    return &G;
}
