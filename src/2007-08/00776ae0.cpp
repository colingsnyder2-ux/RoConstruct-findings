// roc 2007-08 00776ae0  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00776ae0
//
// 00776ae0  68f0cc7700           push 0x77ccf0
// 00776ae5  e839a2ebff           call 0x630d23
// 00776aea  59                   pop ecx
// 00776aeb  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00776ae0;
extern void G1_func_00776ae0(void*);
void func_00776ae0()
{
    G1_func_00776ae0(&G2_func_00776ae0);
}
