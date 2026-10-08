// roc 2007-08 00779ef0  unit: seg_00770000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00779ef0
//
// 00779ef0  c70564248c00b4707800 mov dword ptr [0x8c2464], 0x7870b4
// 00779efa  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_00779ef0;
extern char G2_func_00779ef0;
void func_00779ef0()
{
    G1_func_00779ef0 = &G2_func_00779ef0;
}
