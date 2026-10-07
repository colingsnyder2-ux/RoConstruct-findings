// roc 2008-06 00801430  unit: seg_00800000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00801430
//
// 00801430  c7050cda9700bc828200 mov dword ptr [0x97da0c], 0x8282bc
// 0080143a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_00801430;
extern char G2_func_00801430;
void func_00801430()
{
    G1_func_00801430 = &G2_func_00801430;
}
