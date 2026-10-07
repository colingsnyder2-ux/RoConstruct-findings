// roc 2009-06 00896d80  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00896d80
//
// 00896d80  a11437a400           mov eax, dword ptr [0xa43714]
// 00896d85  50                   push eax
// 00896d86  e8a71ce8ff           call 0x718a32
// 00896d8b  83c404               add esp, 4
// 00896d8e  c705fc36a40030d28a00 mov dword ptr [0xa436fc], 0x8ad230
// 00896d98  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00896d80(int);
void func_00896d80()
{
    G4_func_00896d80(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
