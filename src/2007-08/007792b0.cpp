// roc 2007-08 007792b0  unit: seg_00770000  size: 11 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 007792b0
//
// 007792b0  b914098c00           mov ecx, 0x8c0914
// 007792b5  ff25ace67700         jmp dword ptr [0x77e6ac]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_007792b0 { void m(); };
extern T_func_007792b0 G1_func_007792b0;
void func_007792b0()
{
    G1_func_007792b0.m();
}
