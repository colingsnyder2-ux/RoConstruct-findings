// roc 2007-08 007799a0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007799a0
//
// 007799a0  a1c4178c00           mov eax, dword ptr [0x8c17c4]
// 007799a5  50                   push eax
// 007799a6  e8b762ebff           call 0x62fc62
// 007799ab  83c404               add esp, 4
// 007799ae  c705ac178c00b4707800 mov dword ptr [0x8c17ac], 0x7870b4
// 007799b8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_007799a0(int);
void func_007799a0()
{
    G4_func_007799a0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
