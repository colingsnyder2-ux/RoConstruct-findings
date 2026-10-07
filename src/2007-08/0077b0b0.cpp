// roc 2007-08 0077b0b0  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077b0b0
//
// 0077b0b0  a1cc528c00           mov eax, dword ptr [0x8c52cc]
// 0077b0b5  50                   push eax
// 0077b0b6  e8a74bebff           call 0x62fc62
// 0077b0bb  83c404               add esp, 4
// 0077b0be  c705b4528c00b4707800 mov dword ptr [0x8c52b4], 0x7870b4
// 0077b0c8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077b0b0(int);
void func_0077b0b0()
{
    G4_func_0077b0b0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
