// roc 2010-06 009e6750  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e6750
//
// 009e6750  a17cf6c100           mov eax, dword ptr [0xc1f67c]
// 009e6755  50                   push eax
// 009e6756  e83f12dcff           call 0x7a799a
// 009e675b  83c404               add esp, 4
// 009e675e  c70560f6c1001809a000 mov dword ptr [0xc1f660], 0xa00918
// 009e6768  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e6750(int);
void func_009e6750()
{
    G4_func_009e6750(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
