// roc 2007-08 0077b880  unit: seg_00770000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077b880
//
// 0077b880  c70554648c00b4707800 mov dword ptr [0x8c6454], 0x7870b4
// 0077b88a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_0077b880;
extern char G2_func_0077b880;
void func_0077b880()
{
    G1_func_0077b880 = &G2_func_0077b880;
}
