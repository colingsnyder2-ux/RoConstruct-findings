// roc 2010-06 009e0ee0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0ee0
//
// 009e0ee0  b9e07ac100           mov ecx, 0xc17ae0
// 009e0ee5  e9c608bdff           jmp 0x5b17b0
// auto-matched from its assembly shape

struct T_func_009e0ee0 { void m(); };
extern T_func_009e0ee0 G1_func_009e0ee0;
void func_009e0ee0()
{
    G1_func_009e0ee0.m();
}
