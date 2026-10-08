// roc 2007-08 0077bb60  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077bb60
//
// 0077bb60  a164638c00           mov eax, dword ptr [0x8c6364]
// 0077bb65  50                   push eax
// 0077bb66  e8f740ebff           call 0x62fc62
// 0077bb6b  83c404               add esp, 4
// 0077bb6e  c7054c638c00b4707800 mov dword ptr [0x8c634c], 0x7870b4
// 0077bb78  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077bb60(int);
void func_0077bb60()
{
    G4_func_0077bb60(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
