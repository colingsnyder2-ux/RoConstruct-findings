// roc 2008-06 00801440  unit: seg_00800000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00801440
//
// 00801440  c70520da9700c4828200 mov dword ptr [0x97da20], 0x8282c4
// 0080144a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_00801440;
extern char G2_func_00801440;
void func_00801440()
{
    G1_func_00801440 = &G2_func_00801440;
}
