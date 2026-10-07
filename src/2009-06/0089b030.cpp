// roc 2009-06 0089b030  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089b030
//
// 0089b030  a1b0d1a400           mov eax, dword ptr [0xa4d1b0]
// 0089b035  50                   push eax
// 0089b036  e8f7d9e7ff           call 0x718a32
// 0089b03b  83c404               add esp, 4
// 0089b03e  c70594d1a40030d28a00 mov dword ptr [0xa4d194], 0x8ad230
// 0089b048  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089b030(int);
void func_0089b030()
{
    G4_func_0089b030(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
