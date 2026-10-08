// roc 2007-08 0077b090  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077b090
//
// 0077b090  a1b0528c00           mov eax, dword ptr [0x8c52b0]
// 0077b095  50                   push eax
// 0077b096  e8c74bebff           call 0x62fc62
// 0077b09b  83c404               add esp, 4
// 0077b09e  c70598528c00b4707800 mov dword ptr [0x8c5298], 0x7870b4
// 0077b0a8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077b090(int);
void func_0077b090()
{
    G4_func_0077b090(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
