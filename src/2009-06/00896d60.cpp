// roc 2009-06 00896d60  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00896d60
//
// 00896d60  a19437a400           mov eax, dword ptr [0xa43794]
// 00896d65  50                   push eax
// 00896d66  e8c71ce8ff           call 0x718a32
// 00896d6b  83c404               add esp, 4
// 00896d6e  c7057c37a40030d28a00 mov dword ptr [0xa4377c], 0x8ad230
// 00896d78  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00896d60(int);
void func_00896d60()
{
    G4_func_00896d60(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
