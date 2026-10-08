// roc 2007-08 0077b0d0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077b0d0
//
// 0077b0d0  a104538c00           mov eax, dword ptr [0x8c5304]
// 0077b0d5  50                   push eax
// 0077b0d6  e8874bebff           call 0x62fc62
// 0077b0db  83c404               add esp, 4
// 0077b0de  c705ec528c00b4707800 mov dword ptr [0x8c52ec], 0x7870b4
// 0077b0e8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077b0d0(int);
void func_0077b0d0()
{
    G4_func_0077b0d0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
