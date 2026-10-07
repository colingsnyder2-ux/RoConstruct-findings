// roc 2009-06 00896f00  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00896f00
//
// 00896f00  a10438a400           mov eax, dword ptr [0xa43804]
// 00896f05  50                   push eax
// 00896f06  e8271be8ff           call 0x718a32
// 00896f0b  83c404               add esp, 4
// 00896f0e  c705ec37a40030d28a00 mov dword ptr [0xa437ec], 0x8ad230
// 00896f18  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00896f00(int);
void func_00896f00()
{
    G4_func_00896f00(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
