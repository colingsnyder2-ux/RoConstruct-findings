// roc 2009-06 0089a960  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089a960
//
// 0089a960  a190cda400           mov eax, dword ptr [0xa4cd90]
// 0089a965  50                   push eax
// 0089a966  e8c7e0e7ff           call 0x718a32
// 0089a96b  83c404               add esp, 4
// 0089a96e  c70578cda40030d28a00 mov dword ptr [0xa4cd78], 0x8ad230
// 0089a978  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089a960(int);
void func_0089a960()
{
    G4_func_0089a960(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
