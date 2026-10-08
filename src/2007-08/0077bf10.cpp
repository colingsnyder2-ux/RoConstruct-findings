// roc 2007-08 0077bf10  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077bf10
//
// 0077bf10  a14c6f8c00           mov eax, dword ptr [0x8c6f4c]
// 0077bf15  50                   push eax
// 0077bf16  e8473debff           call 0x62fc62
// 0077bf1b  83c404               add esp, 4
// 0077bf1e  c705346f8c00b4707800 mov dword ptr [0x8c6f34], 0x7870b4
// 0077bf28  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077bf10(int);
void func_0077bf10()
{
    G4_func_0077bf10(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
