// roc 2007-08 00776950  unit: seg_00770000  size: 12 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00776950
//
// 00776950  e86b0ff0ff           call 0x6778c0
// 00776955  50                   push eax
// 00776956  e8959bebff           call 0x6304f0
// 0077695b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00776950();
extern int __stdcall G2_func_00776950(int);
int func_00776950()
{
    return G2_func_00776950(G1_func_00776950());
}
