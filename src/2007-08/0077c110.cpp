// roc 2007-08 0077c110  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077c110
//
// 0077c110  a1d8748c00           mov eax, dword ptr [0x8c74d8]
// 0077c115  50                   push eax
// 0077c116  e8473bebff           call 0x62fc62
// 0077c11b  83c404               add esp, 4
// 0077c11e  c705c0748c00b4707800 mov dword ptr [0x8c74c0], 0x7870b4
// 0077c128  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077c110(int);
void func_0077c110()
{
    G4_func_0077c110(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
