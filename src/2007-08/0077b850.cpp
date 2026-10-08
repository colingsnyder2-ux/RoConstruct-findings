// roc 2007-08 0077b850  unit: seg_00770000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077b850
//
// 0077b850  c70514628c00b4707800 mov dword ptr [0x8c6214], 0x7870b4
// 0077b85a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_0077b850;
extern char G2_func_0077b850;
void func_0077b850()
{
    G1_func_0077b850 = &G2_func_0077b850;
}
