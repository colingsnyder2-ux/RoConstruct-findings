// roc 2010-06 009de110  unit: seg_009d0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009de110
//
// 009de110  b9b0aac000           mov ecx, 0xc0aab0
// 009de115  ff2500a49e00         jmp dword ptr [0x9ea400]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_009de110 { void m(); };
extern T_func_009de110 G1_func_009de110;
void func_009de110()
{
    G1_func_009de110.m();
}
