// roc 2010-06 009e3970  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e3970
//
// 009e3970  a1d4b1c100           mov eax, dword ptr [0xc1b1d4]
// 009e3975  50                   push eax
// 009e3976  e81f40dcff           call 0x7a799a
// 009e397b  83c404               add esp, 4
// 009e397e  c705b8b1c1001809a000 mov dword ptr [0xc1b1b8], 0xa00918
// 009e3988  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e3970(int);
void func_009e3970()
{
    G4_func_009e3970(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
