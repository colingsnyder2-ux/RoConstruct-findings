// roc 2007-08 0076e960  unit: seg_00760000  size: 12 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0076e960
//
// 0076e960  68d07f7700           push 0x777fd0
// 0076e965  e8b923ecff           call 0x630d23
// 0076e96a  59                   pop ecx
// 0076e96b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_0076e960;
extern void G1_func_0076e960(void*);
void func_0076e960()
{
    G1_func_0076e960(&G2_func_0076e960);
}
