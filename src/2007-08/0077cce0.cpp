// roc 2007-08 0077cce0  unit: seg_00770000  size: 11 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077cce0
//
// 0077cce0  b944938c00           mov ecx, 0x8c9344
// 0077cce5  ff25bcdd7700         jmp dword ptr [0x77ddbc]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_0077cce0 { void m(); };
extern T_func_0077cce0 G1_func_0077cce0;
void func_0077cce0()
{
    G1_func_0077cce0.m();
}
