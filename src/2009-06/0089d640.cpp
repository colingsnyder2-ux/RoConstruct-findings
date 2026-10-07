// roc 2009-06 0089d640  unit: seg_00890000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089d640
//
// 0089d640  b95088a500           mov ecx, 0xa58850
// 0089d645  ff25c4e48900         jmp dword ptr [0x89e4c4]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_0089d640 { void m(); };
extern T_func_0089d640 G1_func_0089d640;
void func_0089d640()
{
    G1_func_0089d640.m();
}
