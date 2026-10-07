// roc 2009-06 00894e00  unit: seg_00890000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00894e00
//
// 00894e00  b944c6a300           mov ecx, 0xa3c644
// 00894e05  ff25c4e48900         jmp dword ptr [0x89e4c4]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_00894e00 { void m(); };
extern T_func_00894e00 G1_func_00894e00;
void func_00894e00()
{
    G1_func_00894e00.m();
}
