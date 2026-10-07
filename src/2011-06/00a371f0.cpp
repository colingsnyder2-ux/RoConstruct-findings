// roc 2011-06 00a371f0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a371f0
//
// 00a371f0  b9f07bcc00           mov ecx, 0xcc7bf0
// 00a371f5  e946699dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a371f0 { void m(); };
extern T_func_00a371f0 G1_func_00a371f0;
void func_00a371f0()
{
    G1_func_00a371f0.m();
}
