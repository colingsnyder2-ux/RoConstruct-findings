// roc 2010-06 009db770  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009db770
//
// 009db770  a1ec14c000           mov eax, dword ptr [0xc014ec]
// 009db775  50                   push eax
// 009db776  e81fc2dcff           call 0x7a799a
// 009db77b  83c404               add esp, 4
// 009db77e  c705d014c0001809a000 mov dword ptr [0xc014d0], 0xa00918
// 009db788  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009db770(int);
void func_009db770()
{
    G4_func_009db770(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
