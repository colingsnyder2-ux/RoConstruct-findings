// roc 2010-06 009db670  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009db670
//
// 009db670  a11c18c000           mov eax, dword ptr [0xc0181c]
// 009db675  50                   push eax
// 009db676  e81fc3dcff           call 0x7a799a
// 009db67b  83c404               add esp, 4
// 009db67e  c7050018c0001809a000 mov dword ptr [0xc01800], 0xa00918
// 009db688  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009db670(int);
void func_009db670()
{
    G4_func_009db670(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
