// roc 2009-06 0089ba40  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089ba40
//
// 0089ba40  a100e2a400           mov eax, dword ptr [0xa4e200]
// 0089ba45  50                   push eax
// 0089ba46  e8e7cfe7ff           call 0x718a32
// 0089ba4b  83c404               add esp, 4
// 0089ba4e  c705e8e1a40030d28a00 mov dword ptr [0xa4e1e8], 0x8ad230
// 0089ba58  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089ba40(int);
void func_0089ba40()
{
    G4_func_0089ba40(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
