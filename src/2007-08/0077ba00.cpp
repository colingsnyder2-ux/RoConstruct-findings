// roc 2007-08 0077ba00  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077ba00
//
// 0077ba00  a134648c00           mov eax, dword ptr [0x8c6434]
// 0077ba05  50                   push eax
// 0077ba06  e85742ebff           call 0x62fc62
// 0077ba0b  83c404               add esp, 4
// 0077ba0e  c7051c648c00b4707800 mov dword ptr [0x8c641c], 0x7870b4
// 0077ba18  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077ba00(int);
void func_0077ba00()
{
    G4_func_0077ba00(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
