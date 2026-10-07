// roc 2010-06 009e6590  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e6590
//
// 009e6590  a13cf6c100           mov eax, dword ptr [0xc1f63c]
// 009e6595  50                   push eax
// 009e6596  e8ff13dcff           call 0x7a799a
// 009e659b  83c404               add esp, 4
// 009e659e  c70520f6c1001809a000 mov dword ptr [0xc1f620], 0xa00918
// 009e65a8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e6590(int);
void func_009e6590()
{
    G4_func_009e6590(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
