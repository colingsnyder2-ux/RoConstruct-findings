// roc 2009-06 0089b830  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089b830
//
// 0089b830  a1f8dda400           mov eax, dword ptr [0xa4ddf8]
// 0089b835  50                   push eax
// 0089b836  e8f7d1e7ff           call 0x718a32
// 0089b83b  83c404               add esp, 4
// 0089b83e  c705e0dda40030d28a00 mov dword ptr [0xa4dde0], 0x8ad230
// 0089b848  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089b830(int);
void func_0089b830()
{
    G4_func_0089b830(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
