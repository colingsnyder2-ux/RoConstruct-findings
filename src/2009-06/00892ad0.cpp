// roc 2009-06 00892ad0  unit: seg_00890000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00892ad0
//
// 00892ad0  68e0d38900           push 0x89d3e0
// 00892ad5  e82170e8ff           call 0x719afb
// 00892ada  59                   pop ecx
// 00892adb  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00892ad0;
extern void G1_func_00892ad0(void*);
void func_00892ad0()
{
    G1_func_00892ad0(&G2_func_00892ad0);
}
