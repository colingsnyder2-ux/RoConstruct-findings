// roc 2007-08 00777d00  unit: seg_00770000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00777d00
//
// 00777d00  b990be8b00           mov ecx, 0x8bbe90
// 00777d05  ff25bcdd7700         jmp dword ptr [0x77ddbc]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_00777d00 { void m(); };
extern T_func_00777d00 G1_func_00777d00;
void func_00777d00()
{
    G1_func_00777d00.m();
}
