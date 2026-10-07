// roc 2010-06 009e4760  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e4760
//
// 009e4760  a158ccc100           mov eax, dword ptr [0xc1cc58]
// 009e4765  50                   push eax
// 009e4766  e82f32dcff           call 0x7a799a
// 009e476b  83c404               add esp, 4
// 009e476e  c70538ccc1001809a000 mov dword ptr [0xc1cc38], 0xa00918
// 009e4778  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e4760(int);
void func_009e4760()
{
    G4_func_009e4760(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
