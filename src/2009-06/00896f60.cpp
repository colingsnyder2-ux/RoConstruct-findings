// roc 2009-06 00896f60  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00896f60
//
// 00896f60  a1cc37a400           mov eax, dword ptr [0xa437cc]
// 00896f65  50                   push eax
// 00896f66  e8c71ae8ff           call 0x718a32
// 00896f6b  83c404               add esp, 4
// 00896f6e  c705b437a40030d28a00 mov dword ptr [0xa437b4], 0x8ad230
// 00896f78  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00896f60(int);
void func_00896f60()
{
    G4_func_00896f60(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
