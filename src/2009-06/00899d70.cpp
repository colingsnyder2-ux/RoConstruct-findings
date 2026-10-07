// roc 2009-06 00899d70  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00899d70
//
// 00899d70  a12cb7a400           mov eax, dword ptr [0xa4b72c]
// 00899d75  50                   push eax
// 00899d76  e8b7ece7ff           call 0x718a32
// 00899d7b  83c404               add esp, 4
// 00899d7e  c70514b7a40030d28a00 mov dword ptr [0xa4b714], 0x8ad230
// 00899d88  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00899d70(int);
void func_00899d70()
{
    G4_func_00899d70(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
