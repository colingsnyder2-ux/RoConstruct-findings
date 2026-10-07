// roc 2007-08 00778000  unit: seg_00770000  size: 11 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00778000
//
// 00778000  c70574dc8b00b4707800 mov dword ptr [0x8bdc74], 0x7870b4
// 0077800a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_00778000;
extern char G2_func_00778000;
void func_00778000()
{
    G1_func_00778000 = &G2_func_00778000;
}
