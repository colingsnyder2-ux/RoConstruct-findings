// roc 2010-06 009e7670  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e7670
//
// 009e7670  a1740cc200           mov eax, dword ptr [0xc20c74]
// 009e7675  50                   push eax
// 009e7676  e81f03dcff           call 0x7a799a
// 009e767b  83c404               add esp, 4
// 009e767e  c705580cc2001809a000 mov dword ptr [0xc20c58], 0xa00918
// 009e7688  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e7670(int);
void func_009e7670()
{
    G4_func_009e7670(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
