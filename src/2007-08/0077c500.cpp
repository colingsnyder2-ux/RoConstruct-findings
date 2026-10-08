// roc 2007-08 0077c500  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077c500
//
// 0077c500  a1d47c8c00           mov eax, dword ptr [0x8c7cd4]
// 0077c505  50                   push eax
// 0077c506  e85737ebff           call 0x62fc62
// 0077c50b  83c404               add esp, 4
// 0077c50e  c705bc7c8c00b4707800 mov dword ptr [0x8c7cbc], 0x7870b4
// 0077c518  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077c500(int);
void func_0077c500()
{
    G4_func_0077c500(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
