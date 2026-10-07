// roc 2010-06 009db000  unit: seg_009d0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009db000
//
// 009db000  b91c08c000           mov ecx, 0xc0081c
// 009db005  ff25f0ce9e00         jmp dword ptr [0x9ecef0]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_009db000 { void m(); };
extern T_func_009db000 G1_func_009db000;
void func_009db000()
{
    G1_func_009db000.m();
}
