// roc 2010-06 009dd340  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dd340
//
// 009dd340  a10061c000           mov eax, dword ptr [0xc06100]
// 009dd345  50                   push eax
// 009dd346  e84fa6dcff           call 0x7a799a
// 009dd34b  83c404               add esp, 4
// 009dd34e  c705e460c0001809a000 mov dword ptr [0xc060e4], 0xa00918
// 009dd358  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009dd340(int);
void func_009dd340()
{
    G4_func_009dd340(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
