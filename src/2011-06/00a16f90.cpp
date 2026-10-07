// roc 2011-06 00a16f90  unit: seg_00a10000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a16f90
//
// 00a16f90  682017a300           push 0xa31720
// 00a16f95  e8c341dfff           call 0x80b15d
// 00a16f9a  59                   pop ecx
// 00a16f9b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00a16f90;
extern void G1_func_00a16f90(void*);
void func_00a16f90()
{
    G1_func_00a16f90(&G2_func_00a16f90);
}
