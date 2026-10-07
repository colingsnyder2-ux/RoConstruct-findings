// roc 2011-06 00a34c70  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34c70
//
// 00a34c70  b960aacb00           mov ecx, 0xcbaa60
// 00a34c75  e9c68e9dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a34c70 { void m(); };
extern T_func_00a34c70 G1_func_00a34c70;
void func_00a34c70()
{
    G1_func_00a34c70.m();
}
