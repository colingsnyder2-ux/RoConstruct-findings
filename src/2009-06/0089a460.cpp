// roc 2009-06 0089a460  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089a460
//
// 0089a460  a1c0c2a400           mov eax, dword ptr [0xa4c2c0]
// 0089a465  50                   push eax
// 0089a466  e8c7e5e7ff           call 0x718a32
// 0089a46b  83c404               add esp, 4
// 0089a46e  c705a8c2a40030d28a00 mov dword ptr [0xa4c2a8], 0x8ad230
// 0089a478  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089a460(int);
void func_0089a460()
{
    G4_func_0089a460(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
