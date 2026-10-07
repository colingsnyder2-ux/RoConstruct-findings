// roc 2009-06 00896c00  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00896c00
//
// 00896c00  a1b037a400           mov eax, dword ptr [0xa437b0]
// 00896c05  50                   push eax
// 00896c06  e8271ee8ff           call 0x718a32
// 00896c0b  83c404               add esp, 4
// 00896c0e  c7059837a40030d28a00 mov dword ptr [0xa43798], 0x8ad230
// 00896c18  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00896c00(int);
void func_00896c00()
{
    G4_func_00896c00(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
