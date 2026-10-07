// roc 2009-06 00896f80  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00896f80
//
// 00896f80  a1543aa400           mov eax, dword ptr [0xa43a54]
// 00896f85  50                   push eax
// 00896f86  e8a71ae8ff           call 0x718a32
// 00896f8b  83c404               add esp, 4
// 00896f8e  c705383aa40030d28a00 mov dword ptr [0xa43a38], 0x8ad230
// 00896f98  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00896f80(int);
void func_00896f80()
{
    G4_func_00896f80(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
