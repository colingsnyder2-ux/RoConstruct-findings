// roc 2010-06 009db570  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009db570
//
// 009db570  a1a015c000           mov eax, dword ptr [0xc015a0]
// 009db575  50                   push eax
// 009db576  e81fc4dcff           call 0x7a799a
// 009db57b  83c404               add esp, 4
// 009db57e  c7058015c0001809a000 mov dword ptr [0xc01580], 0xa00918
// 009db588  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009db570(int);
void func_009db570()
{
    G4_func_009db570(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
