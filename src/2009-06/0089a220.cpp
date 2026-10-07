// roc 2009-06 0089a220  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089a220
//
// 0089a220  a1b8bea400           mov eax, dword ptr [0xa4beb8]
// 0089a225  50                   push eax
// 0089a226  e807e8e7ff           call 0x718a32
// 0089a22b  83c404               add esp, 4
// 0089a22e  c705a0bea40030d28a00 mov dword ptr [0xa4bea0], 0x8ad230
// 0089a238  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089a220(int);
void func_0089a220()
{
    G4_func_0089a220(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
