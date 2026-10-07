// roc 2010-06 009e3f30  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e3f30
//
// 009e3f30  a1d8c0c100           mov eax, dword ptr [0xc1c0d8]
// 009e3f35  50                   push eax
// 009e3f36  e85f3adcff           call 0x7a799a
// 009e3f3b  83c404               add esp, 4
// 009e3f3e  c705b8c0c1001809a000 mov dword ptr [0xc1c0b8], 0xa00918
// 009e3f48  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e3f30(int);
void func_009e3f30()
{
    G4_func_009e3f30(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
