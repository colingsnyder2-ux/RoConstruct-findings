// roc 2009-06 00896e40  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00896e40
//
// 00896e40  a1243ba400           mov eax, dword ptr [0xa43b24]
// 00896e45  50                   push eax
// 00896e46  e8e71be8ff           call 0x718a32
// 00896e4b  83c404               add esp, 4
// 00896e4e  c7050c3ba40030d28a00 mov dword ptr [0xa43b0c], 0x8ad230
// 00896e58  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00896e40(int);
void func_00896e40()
{
    G4_func_00896e40(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
