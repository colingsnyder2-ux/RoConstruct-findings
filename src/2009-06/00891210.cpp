// roc 2009-06 00891210  unit: seg_00890000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00891210
//
// 00891210  68d8eba400           push 0xa4ebd8
// 00891215  e86616dbff           call 0x642880
// 0089121a  59                   pop ecx
// 0089121b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00891210;
extern void G1_func_00891210(void*);
void func_00891210()
{
    G1_func_00891210(&G2_func_00891210);
}
