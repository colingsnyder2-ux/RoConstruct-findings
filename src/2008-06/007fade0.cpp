// roc 2008-06 007fade0  unit: seg_007f0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fade0
//
// 007fade0  b9f0dc9600           mov ecx, 0x96dcf0
// 007fade5  ff25143f8000         jmp dword ptr [0x803f14]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_007fade0 { void m(); };
extern T_func_007fade0 G1_func_007fade0;
void func_007fade0()
{
    G1_func_007fade0.m();
}
