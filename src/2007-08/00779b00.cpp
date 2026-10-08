// roc 2007-08 00779b00  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00779b00
//
// 00779b00  a12c1d8c00           mov eax, dword ptr [0x8c1d2c]
// 00779b05  50                   push eax
// 00779b06  e85761ebff           call 0x62fc62
// 00779b0b  83c404               add esp, 4
// 00779b0e  c705141d8c00b4707800 mov dword ptr [0x8c1d14], 0x7870b4
// 00779b18  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00779b00(int);
void func_00779b00()
{
    G4_func_00779b00(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
