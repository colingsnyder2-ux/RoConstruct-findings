// roc 2009-06 0089a980  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089a980
//
// 0089a980  a134cfa400           mov eax, dword ptr [0xa4cf34]
// 0089a985  50                   push eax
// 0089a986  e8a7e0e7ff           call 0x718a32
// 0089a98b  83c404               add esp, 4
// 0089a98e  c7051ccfa40030d28a00 mov dword ptr [0xa4cf1c], 0x8ad230
// 0089a998  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089a980(int);
void func_0089a980()
{
    G4_func_0089a980(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
