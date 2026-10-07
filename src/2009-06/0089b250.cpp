// roc 2009-06 0089b250  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089b250
//
// 0089b250  a18cd6a400           mov eax, dword ptr [0xa4d68c]
// 0089b255  50                   push eax
// 0089b256  e8d7d7e7ff           call 0x718a32
// 0089b25b  83c404               add esp, 4
// 0089b25e  c70570d6a40030d28a00 mov dword ptr [0xa4d670], 0x8ad230
// 0089b268  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089b250(int);
void func_0089b250()
{
    G4_func_0089b250(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
