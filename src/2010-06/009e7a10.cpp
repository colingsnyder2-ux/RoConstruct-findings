// roc 2010-06 009e7a10  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e7a10
//
// 009e7a10  a1e80fc200           mov eax, dword ptr [0xc20fe8]
// 009e7a15  50                   push eax
// 009e7a16  e87fffdbff           call 0x7a799a
// 009e7a1b  83c404               add esp, 4
// 009e7a1e  c705cc0fc2001809a000 mov dword ptr [0xc20fcc], 0xa00918
// 009e7a28  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e7a10(int);
void func_009e7a10()
{
    G4_func_009e7a10(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
