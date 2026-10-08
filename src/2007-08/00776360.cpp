// roc 2007-08 00776360  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00776360
//
// 00776360  6820cb7700           push 0x77cb20
// 00776365  e8b9a9ebff           call 0x630d23
// 0077636a  59                   pop ecx
// 0077636b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00776360;
extern void G1_func_00776360(void*);
void func_00776360()
{
    G1_func_00776360(&G2_func_00776360);
}
