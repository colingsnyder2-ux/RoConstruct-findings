// roc 2007-08 0077ba20  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077ba20
//
// 0077ba20  a118648c00           mov eax, dword ptr [0x8c6418]
// 0077ba25  50                   push eax
// 0077ba26  e83742ebff           call 0x62fc62
// 0077ba2b  83c404               add esp, 4
// 0077ba2e  c705fc638c00b4707800 mov dword ptr [0x8c63fc], 0x7870b4
// 0077ba38  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077ba20(int);
void func_0077ba20()
{
    G4_func_0077ba20(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
