// roc 2010-06 009db410  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009db410
//
// 009db410  a1b816c000           mov eax, dword ptr [0xc016b8]
// 009db415  50                   push eax
// 009db416  e87fc5dcff           call 0x7a799a
// 009db41b  83c404               add esp, 4
// 009db41e  c7059816c0001809a000 mov dword ptr [0xc01698], 0xa00918
// 009db428  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009db410(int);
void func_009db410()
{
    G4_func_009db410(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
