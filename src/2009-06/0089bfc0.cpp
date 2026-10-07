// roc 2009-06 0089bfc0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089bfc0
//
// 0089bfc0  a144e7a400           mov eax, dword ptr [0xa4e744]
// 0089bfc5  50                   push eax
// 0089bfc6  e867cae7ff           call 0x718a32
// 0089bfcb  83c404               add esp, 4
// 0089bfce  c7052ce7a40030d28a00 mov dword ptr [0xa4e72c], 0x8ad230
// 0089bfd8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089bfc0(int);
void func_0089bfc0()
{
    G4_func_0089bfc0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
