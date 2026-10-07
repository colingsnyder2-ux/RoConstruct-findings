// roc 2008-06 007f8820  unit: seg_007f0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f8820
//
// 007f8820  68ecd39700           push 0x97d3ec
// 007f8825  e8b6d6dbff           call 0x5b5ee0
// 007f882a  59                   pop ecx
// 007f882b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_007f8820;
extern void G1_func_007f8820(void*);
void func_007f8820()
{
    G1_func_007f8820(&G2_func_007f8820);
}
