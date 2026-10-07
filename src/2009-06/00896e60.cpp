// roc 2009-06 00896e60  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00896e60
//
// 00896e60  a17c38a400           mov eax, dword ptr [0xa4387c]
// 00896e65  50                   push eax
// 00896e66  e8c71be8ff           call 0x718a32
// 00896e6b  83c404               add esp, 4
// 00896e6e  c7056438a40030d28a00 mov dword ptr [0xa43864], 0x8ad230
// 00896e78  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00896e60(int);
void func_00896e60()
{
    G4_func_00896e60(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
