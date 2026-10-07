// roc 2009-06 00896b90  unit: seg_00890000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00896b90
//
// 00896b90  b98c36a400           mov ecx, 0xa4368c
// 00896b95  ff25c4e48900         jmp dword ptr [0x89e4c4]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_00896b90 { void m(); };
extern T_func_00896b90 G1_func_00896b90;
void func_00896b90()
{
    G1_func_00896b90.m();
}
