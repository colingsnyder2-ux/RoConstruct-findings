// roc 2009-06 0089b330  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089b330
//
// 0089b330  a1d8d6a400           mov eax, dword ptr [0xa4d6d8]
// 0089b335  50                   push eax
// 0089b336  e8f7d6e7ff           call 0x718a32
// 0089b33b  83c404               add esp, 4
// 0089b33e  c705c0d6a40030d28a00 mov dword ptr [0xa4d6c0], 0x8ad230
// 0089b348  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089b330(int);
void func_0089b330()
{
    G4_func_0089b330(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
