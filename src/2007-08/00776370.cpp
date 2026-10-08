// roc 2007-08 00776370  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00776370
//
// 00776370  6850cb7700           push 0x77cb50
// 00776375  e8a9a9ebff           call 0x630d23
// 0077637a  59                   pop ecx
// 0077637b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00776370;
extern void G1_func_00776370(void*);
void func_00776370()
{
    G1_func_00776370(&G2_func_00776370);
}
