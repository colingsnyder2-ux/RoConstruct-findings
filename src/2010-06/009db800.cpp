// roc 2010-06 009db800  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009db800
//
// 009db800  b9200fc000           mov ecx, 0xc00f20
// 009db805  e9d6c0a6ff           jmp 0x4478e0
// auto-matched from its assembly shape

struct T_func_009db800 { void m(); };
extern T_func_009db800 G1_func_009db800;
void func_009db800()
{
    G1_func_009db800.m();
}
