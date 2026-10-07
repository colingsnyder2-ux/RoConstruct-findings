// roc 2008-06 007d6080  unit: seg_007d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007d6080
//
// 007d6080  b9f4a29700           mov ecx, 0x97a2f4
// 007d6085  e9c638c3ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007d6080 { void m(); };
extern T_func_007d6080 G1_func_007d6080;
void func_007d6080()
{
    G1_func_007d6080.m();
}
