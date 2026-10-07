// roc 2009-06 00896610  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00896610
//
// 00896610  b90016a400           mov ecx, 0xa41600
// 00896615  e91689c8ff           jmp 0x51ef30
// auto-matched from its assembly shape

struct T_func_00896610 { void m(); };
extern T_func_00896610 G1_func_00896610;
void func_00896610()
{
    G1_func_00896610.m();
}
