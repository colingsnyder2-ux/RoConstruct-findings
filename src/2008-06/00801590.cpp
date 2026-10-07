// roc 2008-06 00801590  unit: seg_00800000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00801590
//
// 00801590  b9f0db9700           mov ecx, 0x97dbf0
// 00801595  ff25ec438000         jmp dword ptr [0x8043ec]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_00801590 { void m(); };
extern T_func_00801590 G1_func_00801590;
void func_00801590()
{
    G1_func_00801590.m();
}
