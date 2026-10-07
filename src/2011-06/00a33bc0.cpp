// roc 2011-06 00a33bc0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a33bc0
//
// 00a33bc0  b98084cb00           mov ecx, 0xcb8480
// 00a33bc5  e94689a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a33bc0 { void m(); };
extern T_func_00a33bc0 G1_func_00a33bc0;
void func_00a33bc0()
{
    G1_func_00a33bc0.m();
}
