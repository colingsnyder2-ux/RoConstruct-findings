// roc 2007-08 0076d370  unit: seg_00760000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076d370
//
// 0076d370  68407d7700           push 0x777d40
// 0076d375  e8a939ecff           call 0x630d23
// 0076d37a  59                   pop ecx
// 0076d37b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_0076d370;
extern void G1_func_0076d370(void*);
void func_0076d370()
{
    G1_func_0076d370(&G2_func_0076d370);
}
