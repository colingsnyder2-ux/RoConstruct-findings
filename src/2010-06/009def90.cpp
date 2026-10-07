// roc 2010-06 009def90  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009def90
//
// 009def90  a1f4bcc000           mov eax, dword ptr [0xc0bcf4]
// 009def95  50                   push eax
// 009def96  e8ff89dcff           call 0x7a799a
// 009def9b  83c404               add esp, 4
// 009def9e  c705d8bcc0001809a000 mov dword ptr [0xc0bcd8], 0xa00918
// 009defa8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009def90(int);
void func_009def90()
{
    G4_func_009def90(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
