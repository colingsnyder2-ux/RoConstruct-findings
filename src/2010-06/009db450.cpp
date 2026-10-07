// roc 2010-06 009db450  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009db450
//
// 009db450  a10817c000           mov eax, dword ptr [0xc01708]
// 009db455  50                   push eax
// 009db456  e83fc5dcff           call 0x7a799a
// 009db45b  83c404               add esp, 4
// 009db45e  c705e816c0001809a000 mov dword ptr [0xc016e8], 0xa00918
// 009db468  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009db450(int);
void func_009db450()
{
    G4_func_009db450(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
