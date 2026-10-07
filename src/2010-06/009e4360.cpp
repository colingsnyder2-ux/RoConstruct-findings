// roc 2010-06 009e4360  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e4360
//
// 009e4360  a18ccbc100           mov eax, dword ptr [0xc1cb8c]
// 009e4365  50                   push eax
// 009e4366  e82f36dcff           call 0x7a799a
// 009e436b  83c404               add esp, 4
// 009e436e  c70570cbc1001809a000 mov dword ptr [0xc1cb70], 0xa00918
// 009e4378  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e4360(int);
void func_009e4360()
{
    G4_func_009e4360(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
