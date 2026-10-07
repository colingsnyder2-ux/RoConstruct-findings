// roc 2009-06 0089d160  unit: seg_00890000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089d160
//
// 0089d160  c7052403a5001cb78c00 mov dword ptr [0xa50324], 0x8cb71c
// 0089d16a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_0089d160;
extern char G2_func_0089d160;
void func_0089d160()
{
    G1_func_0089d160 = &G2_func_0089d160;
}
