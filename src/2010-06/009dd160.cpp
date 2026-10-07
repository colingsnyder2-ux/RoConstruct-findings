// roc 2010-06 009dd160  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dd160
//
// 009dd160  a16c5fc000           mov eax, dword ptr [0xc05f6c]
// 009dd165  50                   push eax
// 009dd166  e82fa8dcff           call 0x7a799a
// 009dd16b  83c404               add esp, 4
// 009dd16e  c705505fc0001809a000 mov dword ptr [0xc05f50], 0xa00918
// 009dd178  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009dd160(int);
void func_009dd160()
{
    G4_func_009dd160(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
