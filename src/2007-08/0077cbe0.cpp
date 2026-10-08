// roc 2007-08 0077cbe0  unit: seg_00770000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077cbe0
//
// 0077cbe0  b9f8878c00           mov ecx, 0x8c87f8
// 0077cbe5  ff25bcdd7700         jmp dword ptr [0x77ddbc]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_0077cbe0 { void m(); };
extern T_func_0077cbe0 G1_func_0077cbe0;
void func_0077cbe0()
{
    G1_func_0077cbe0.m();
}
