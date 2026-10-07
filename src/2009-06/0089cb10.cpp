// roc 2009-06 0089cb10  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089cb10
//
// 0089cb10  a190f6a400           mov eax, dword ptr [0xa4f690]
// 0089cb15  50                   push eax
// 0089cb16  e817bfe7ff           call 0x718a32
// 0089cb1b  83c404               add esp, 4
// 0089cb1e  c70578f6a40030d28a00 mov dword ptr [0xa4f678], 0x8ad230
// 0089cb28  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089cb10(int);
void func_0089cb10()
{
    G4_func_0089cb10(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
