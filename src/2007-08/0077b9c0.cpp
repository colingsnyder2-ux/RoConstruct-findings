// roc 2007-08 0077b9c0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077b9c0
//
// 0077b9c0  a1f4628c00           mov eax, dword ptr [0x8c62f4]
// 0077b9c5  50                   push eax
// 0077b9c6  e89742ebff           call 0x62fc62
// 0077b9cb  83c404               add esp, 4
// 0077b9ce  c705d8628c00b4707800 mov dword ptr [0x8c62d8], 0x7870b4
// 0077b9d8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077b9c0(int);
void func_0077b9c0()
{
    G4_func_0077b9c0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
