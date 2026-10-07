// roc 2009-06 008928b0  unit: seg_00890000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008928b0
//
// 008928b0  6840d28900           push 0x89d240
// 008928b5  e84172e8ff           call 0x719afb
// 008928ba  59                   pop ecx
// 008928bb  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_008928b0;
extern void G1_func_008928b0(void*);
void func_008928b0()
{
    G1_func_008928b0(&G2_func_008928b0);
}
