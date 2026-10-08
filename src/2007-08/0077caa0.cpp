// roc 2007-08 0077caa0  unit: seg_00770000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077caa0
//
// 0077caa0  b960878c00           mov ecx, 0x8c8760
// 0077caa5  ff25bcdd7700         jmp dword ptr [0x77ddbc]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_0077caa0 { void m(); };
extern T_func_0077caa0 G1_func_0077caa0;
void func_0077caa0()
{
    G1_func_0077caa0.m();
}
