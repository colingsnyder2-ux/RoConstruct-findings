// roc 2008-06 007ffb80  unit: seg_007f0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ffb80
//
// 007ffb80  c70528af970030b78000 mov dword ptr [0x97af28], 0x80b730
// 007ffb8a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_007ffb80;
extern char G2_func_007ffb80;
void func_007ffb80()
{
    G1_func_007ffb80 = &G2_func_007ffb80;
}
