// roc 2007-08 0077b540  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077b540
//
// 0077b540  a1585c8c00           mov eax, dword ptr [0x8c5c58]
// 0077b545  50                   push eax
// 0077b546  e81747ebff           call 0x62fc62
// 0077b54b  83c404               add esp, 4
// 0077b54e  c705405c8c00b4707800 mov dword ptr [0x8c5c40], 0x7870b4
// 0077b558  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077b540(int);
void func_0077b540()
{
    G4_func_0077b540(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
