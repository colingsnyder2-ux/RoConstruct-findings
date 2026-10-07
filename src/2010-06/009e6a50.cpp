// roc 2010-06 009e6a50  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e6a50
//
// 009e6a50  a1f4fbc100           mov eax, dword ptr [0xc1fbf4]
// 009e6a55  50                   push eax
// 009e6a56  e83f0fdcff           call 0x7a799a
// 009e6a5b  83c404               add esp, 4
// 009e6a5e  c705d4fbc1001809a000 mov dword ptr [0xc1fbd4], 0xa00918
// 009e6a68  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e6a50(int);
void func_009e6a50()
{
    G4_func_009e6a50(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
