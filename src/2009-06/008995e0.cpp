// roc 2009-06 008995e0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008995e0
//
// 008995e0  a1e4aca400           mov eax, dword ptr [0xa4ace4]
// 008995e5  50                   push eax
// 008995e6  e847f4e7ff           call 0x718a32
// 008995eb  83c404               add esp, 4
// 008995ee  c705ccaca40030d28a00 mov dword ptr [0xa4accc], 0x8ad230
// 008995f8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_008995e0(int);
void func_008995e0()
{
    G4_func_008995e0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
