// roc 2011-06 00a2ea40  unit: seg_00a20000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2ea40
//
// 00a2ea40  b9435dcd00           mov ecx, 0xcd5d43
// 00a2ea45  e9d6d69fff           jmp 0x42c120
// auto-matched from its assembly shape

struct T_func_00a2ea40 { void m(); };
extern T_func_00a2ea40 G1_func_00a2ea40;
void func_00a2ea40()
{
    G1_func_00a2ea40.m();
}
