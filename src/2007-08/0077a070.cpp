// roc 2007-08 0077a070  unit: seg_00770000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a070
//
// 0077a070  c705002b8c00b4707800 mov dword ptr [0x8c2b00], 0x7870b4
// 0077a07a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_0077a070;
extern char G2_func_0077a070;
void func_0077a070()
{
    G1_func_0077a070 = &G2_func_0077a070;
}
