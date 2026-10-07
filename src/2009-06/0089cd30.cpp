// roc 2009-06 0089cd30  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089cd30
//
// 0089cd30  a17cf9a400           mov eax, dword ptr [0xa4f97c]
// 0089cd35  50                   push eax
// 0089cd36  e8f7bce7ff           call 0x718a32
// 0089cd3b  83c404               add esp, 4
// 0089cd3e  c70564f9a40030d28a00 mov dword ptr [0xa4f964], 0x8ad230
// 0089cd48  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089cd30(int);
void func_0089cd30()
{
    G4_func_0089cd30(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
