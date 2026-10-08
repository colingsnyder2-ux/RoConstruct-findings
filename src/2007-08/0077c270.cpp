// roc 2007-08 0077c270  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077c270
//
// 0077c270  a1bc758c00           mov eax, dword ptr [0x8c75bc]
// 0077c275  50                   push eax
// 0077c276  e8e739ebff           call 0x62fc62
// 0077c27b  83c404               add esp, 4
// 0077c27e  c705a4758c00b4707800 mov dword ptr [0x8c75a4], 0x7870b4
// 0077c288  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077c270(int);
void func_0077c270()
{
    G4_func_0077c270(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
