// roc 2010-06 009e3f70  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e3f70
//
// 009e3f70  a1bcc1c100           mov eax, dword ptr [0xc1c1bc]
// 009e3f75  50                   push eax
// 009e3f76  e81f3adcff           call 0x7a799a
// 009e3f7b  83c404               add esp, 4
// 009e3f7e  c705a0c1c1001809a000 mov dword ptr [0xc1c1a0], 0xa00918
// 009e3f88  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e3f70(int);
void func_009e3f70()
{
    G4_func_009e3f70(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
