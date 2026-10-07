// roc 2011-06 009f4dae  unit: seg_009f0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 009f4dae
//
// 009f4dae  b9601dcd00           mov ecx, 0xcd1d60
// 009f4db3  ff25d004a400         jmp dword ptr [0xa404d0]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_009f4dae { void m(); };
extern T_func_009f4dae G1_func_009f4dae;
void func_009f4dae()
{
    G1_func_009f4dae.m();
}
