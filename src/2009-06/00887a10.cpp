// roc 2009-06 00887a10  unit: seg_00880000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00887a10
//
// 00887a10  b917e0a300           mov ecx, 0xa3e017
// 00887a15  e9263ce9ff           jmp 0x71b640
// auto-matched from its assembly shape

struct T_func_00887a10 { void m(); };
extern T_func_00887a10 G1_func_00887a10;
void func_00887a10()
{
    G1_func_00887a10.m();
}
