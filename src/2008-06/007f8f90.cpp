// roc 2008-06 007f8f90  unit: seg_007f0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f8f90
//
// 007f8f90  6800148000           push 0x801400
// 007f8f95  e81588eaff           call 0x6a17af
// 007f8f9a  59                   pop ecx
// 007f8f9b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_007f8f90;
extern void G1_func_007f8f90(void*);
void func_007f8f90()
{
    G1_func_007f8f90(&G2_func_007f8f90);
}
