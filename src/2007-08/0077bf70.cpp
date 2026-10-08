// roc 2007-08 0077bf70  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077bf70
//
// 0077bf70  a16c6f8c00           mov eax, dword ptr [0x8c6f6c]
// 0077bf75  50                   push eax
// 0077bf76  e8e73cebff           call 0x62fc62
// 0077bf7b  83c404               add esp, 4
// 0077bf7e  c705546f8c00b4707800 mov dword ptr [0x8c6f54], 0x7870b4
// 0077bf88  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077bf70(int);
void func_0077bf70()
{
    G4_func_0077bf70(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
