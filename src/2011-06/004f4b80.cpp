// roc 2011-06 004f4b80  unit: RBX::VAxes::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004f4b80
//
// 004f4b80  b8b0afc200           mov eax, 0xc2afb0
// 004f4b85  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004f4b80()
{
    return &G;
}
