// roc 2009-06 00884120  unit: seg_00880000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00884120
//
// 00884120  68d0398900           push 0x8939d0
// 00884125  e8d159e9ff           call 0x719afb
// 0088412a  59                   pop ecx
// 0088412b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00884120;
extern void G1_func_00884120(void*);
void func_00884120()
{
    G1_func_00884120(&G2_func_00884120);
}
