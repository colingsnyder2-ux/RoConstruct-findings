// roc 2009-06 0089a160  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089a160
//
// 0089a160  a124bea400           mov eax, dword ptr [0xa4be24]
// 0089a165  50                   push eax
// 0089a166  e8c7e8e7ff           call 0x718a32
// 0089a16b  83c404               add esp, 4
// 0089a16e  c7050cbea40030d28a00 mov dword ptr [0xa4be0c], 0x8ad230
// 0089a178  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089a160(int);
void func_0089a160()
{
    G4_func_0089a160(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
