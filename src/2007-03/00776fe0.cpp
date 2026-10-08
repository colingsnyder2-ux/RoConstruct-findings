// roc 2007-03 00776fe0  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00776fe0
//
// 00776fe0  e87b74f9ff           call 0x70e460
// 00776fe5  50                   push eax
// 00776fe6  e8237deaff           call 0x61ed0e
// 00776feb  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00776fe0();
extern int __stdcall G2_func_00776fe0(int);
int func_00776fe0()
{
    return G2_func_00776fe0(G1_func_00776fe0());
}
