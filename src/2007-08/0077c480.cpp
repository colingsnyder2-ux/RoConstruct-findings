// roc 2007-08 0077c480  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077c480
//
// 0077c480  a19c7c8c00           mov eax, dword ptr [0x8c7c9c]
// 0077c485  50                   push eax
// 0077c486  e8d737ebff           call 0x62fc62
// 0077c48b  83c404               add esp, 4
// 0077c48e  c705847c8c00b4707800 mov dword ptr [0x8c7c84], 0x7870b4
// 0077c498  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077c480(int);
void func_0077c480()
{
    G4_func_0077c480(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
