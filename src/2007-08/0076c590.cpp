// roc 2007-08 0076c590  unit: seg_00760000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076c590
//
// 0076c590  68d0707700           push 0x7770d0
// 0076c595  e88947ecff           call 0x630d23
// 0076c59a  59                   pop ecx
// 0076c59b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_0076c590;
extern void G1_func_0076c590(void*);
void func_0076c590()
{
    G1_func_0076c590(&G2_func_0076c590);
}
