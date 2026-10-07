// roc 2010-06 009e4800  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e4800
//
// 009e4800  a1f8ccc100           mov eax, dword ptr [0xc1ccf8]
// 009e4805  50                   push eax
// 009e4806  e88f31dcff           call 0x7a799a
// 009e480b  83c404               add esp, 4
// 009e480e  c705dcccc1001809a000 mov dword ptr [0xc1ccdc], 0xa00918
// 009e4818  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e4800(int);
void func_009e4800()
{
    G4_func_009e4800(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
