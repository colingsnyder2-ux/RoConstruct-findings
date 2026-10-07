// roc 2009-06 00896d00  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00896d00
//
// 00896d00  a15036a400           mov eax, dword ptr [0xa43650]
// 00896d05  50                   push eax
// 00896d06  e8271de8ff           call 0x718a32
// 00896d0b  83c404               add esp, 4
// 00896d0e  c7053836a40030d28a00 mov dword ptr [0xa43638], 0x8ad230
// 00896d18  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00896d00(int);
void func_00896d00()
{
    G4_func_00896d00(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
