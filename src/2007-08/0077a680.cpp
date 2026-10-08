// roc 2007-08 0077a680  unit: seg_00770000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a680
//
// 0077a680  c70514338c00b4707800 mov dword ptr [0x8c3314], 0x7870b4
// 0077a68a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_0077a680;
extern char G2_func_0077a680;
void func_0077a680()
{
    G1_func_0077a680 = &G2_func_0077a680;
}
