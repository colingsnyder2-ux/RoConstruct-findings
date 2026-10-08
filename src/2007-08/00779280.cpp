// roc 2007-08 00779280  unit: seg_00770000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00779280
//
// 00779280  b9b4088c00           mov ecx, 0x8c08b4
// 00779285  ff25ace67700         jmp dword ptr [0x77e6ac]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_00779280 { void m(); };
extern T_func_00779280 G1_func_00779280;
void func_00779280()
{
    G1_func_00779280.m();
}
