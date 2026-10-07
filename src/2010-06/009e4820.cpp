// roc 2010-06 009e4820  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e4820
//
// 009e4820  a118cdc100           mov eax, dword ptr [0xc1cd18]
// 009e4825  50                   push eax
// 009e4826  e86f31dcff           call 0x7a799a
// 009e482b  83c404               add esp, 4
// 009e482e  c705fcccc1001809a000 mov dword ptr [0xc1ccfc], 0xa00918
// 009e4838  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e4820(int);
void func_009e4820()
{
    G4_func_009e4820(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
