// roc 2010-06 009db530  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009db530
//
// 009db530  a1f015c000           mov eax, dword ptr [0xc015f0]
// 009db535  50                   push eax
// 009db536  e85fc4dcff           call 0x7a799a
// 009db53b  83c404               add esp, 4
// 009db53e  c705d015c0001809a000 mov dword ptr [0xc015d0], 0xa00918
// 009db548  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009db530(int);
void func_009db530()
{
    G4_func_009db530(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
