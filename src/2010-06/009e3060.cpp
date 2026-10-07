// roc 2010-06 009e3060  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e3060
//
// 009e3060  a10ca3c100           mov eax, dword ptr [0xc1a30c]
// 009e3065  50                   push eax
// 009e3066  e82f49dcff           call 0x7a799a
// 009e306b  83c404               add esp, 4
// 009e306e  c705f0a2c1001809a000 mov dword ptr [0xc1a2f0], 0xa00918
// 009e3078  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e3060(int);
void func_009e3060()
{
    G4_func_009e3060(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
