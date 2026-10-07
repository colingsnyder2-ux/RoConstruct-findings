// roc 2008-06 007fcb80  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fcb80
//
// 007fcb80  b9803f9700           mov ecx, 0x973f80
// 007fcb85  e9b671caff           jmp 0x4a3d40
// auto-matched from its assembly shape

struct T_func_007fcb80 { void m(); };
extern T_func_007fcb80 G1_func_007fcb80;
void func_007fcb80()
{
    G1_func_007fcb80.m();
}
