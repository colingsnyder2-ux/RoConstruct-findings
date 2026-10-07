// roc 2010-06 009dc220  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dc220
//
// 009dc220  a1fc44c000           mov eax, dword ptr [0xc044fc]
// 009dc225  50                   push eax
// 009dc226  e86fb7dcff           call 0x7a799a
// 009dc22b  83c404               add esp, 4
// 009dc22e  c705e044c0001809a000 mov dword ptr [0xc044e0], 0xa00918
// 009dc238  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009dc220(int);
void func_009dc220()
{
    G4_func_009dc220(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
