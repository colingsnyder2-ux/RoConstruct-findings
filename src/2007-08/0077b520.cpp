// roc 2007-08 0077b520  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077b520
//
// 0077b520  a1845d8c00           mov eax, dword ptr [0x8c5d84]
// 0077b525  50                   push eax
// 0077b526  e83747ebff           call 0x62fc62
// 0077b52b  83c404               add esp, 4
// 0077b52e  c7056c5d8c00b4707800 mov dword ptr [0x8c5d6c], 0x7870b4
// 0077b538  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077b520(int);
void func_0077b520()
{
    G4_func_0077b520(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
