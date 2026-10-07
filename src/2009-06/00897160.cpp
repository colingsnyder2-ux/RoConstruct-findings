// roc 2009-06 00897160  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00897160
//
// 00897160  a1ac3aa400           mov eax, dword ptr [0xa43aac]
// 00897165  50                   push eax
// 00897166  e8c718e8ff           call 0x718a32
// 0089716b  83c404               add esp, 4
// 0089716e  c705943aa40030d28a00 mov dword ptr [0xa43a94], 0x8ad230
// 00897178  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00897160(int);
void func_00897160()
{
    G4_func_00897160(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
