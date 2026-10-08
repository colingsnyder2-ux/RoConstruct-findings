// roc 2007-08 0076e970  unit: seg_00760000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076e970
//
// 0076e970  68e07f7700           push 0x777fe0
// 0076e975  e8a923ecff           call 0x630d23
// 0076e97a  59                   pop ecx
// 0076e97b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_0076e970;
extern void G1_func_0076e970(void*);
void func_0076e970()
{
    G1_func_0076e970(&G2_func_0076e970);
}
