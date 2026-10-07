// roc 2011-06 00a2f490  unit: seg_00a20000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2f490
//
// 00a2f490  6870fca300           push 0xa3fc70
// 00a2f495  e8c3bcddff           call 0x80b15d
// 00a2f49a  59                   pop ecx
// 00a2f49b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00a2f490;
extern void G1_func_00a2f490(void*);
void func_00a2f490()
{
    G1_func_00a2f490(&G2_func_00a2f490);
}
