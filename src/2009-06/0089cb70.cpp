// roc 2009-06 0089cb70  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089cb70
//
// 0089cb70  a124f7a400           mov eax, dword ptr [0xa4f724]
// 0089cb75  50                   push eax
// 0089cb76  e8b7bee7ff           call 0x718a32
// 0089cb7b  83c404               add esp, 4
// 0089cb7e  c7050cf7a40030d28a00 mov dword ptr [0xa4f70c], 0x8ad230
// 0089cb88  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089cb70(int);
void func_0089cb70()
{
    G4_func_0089cb70(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
