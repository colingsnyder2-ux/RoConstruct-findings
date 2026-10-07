// roc 2008-06 00801580  unit: seg_00800000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00801580
//
// 00801580  b9ccdb9700           mov ecx, 0x97dbcc
// 00801585  ff25ec438000         jmp dword ptr [0x8043ec]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_00801580 { void m(); };
extern T_func_00801580 G1_func_00801580;
void func_00801580()
{
    G1_func_00801580.m();
}
