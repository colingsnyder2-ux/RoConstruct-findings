// roc 2010-06 009db430  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009db430
//
// 009db430  a1e016c000           mov eax, dword ptr [0xc016e0]
// 009db435  50                   push eax
// 009db436  e85fc5dcff           call 0x7a799a
// 009db43b  83c404               add esp, 4
// 009db43e  c705c016c0001809a000 mov dword ptr [0xc016c0], 0xa00918
// 009db448  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009db430(int);
void func_009db430()
{
    G4_func_009db430(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
