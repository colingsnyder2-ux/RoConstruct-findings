// roc 2010-06 009e4260  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e4260
//
// 009e4260  a17cc7c100           mov eax, dword ptr [0xc1c77c]
// 009e4265  50                   push eax
// 009e4266  e82f37dcff           call 0x7a799a
// 009e426b  83c404               add esp, 4
// 009e426e  c70560c7c1001809a000 mov dword ptr [0xc1c760], 0xa00918
// 009e4278  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e4260(int);
void func_009e4260()
{
    G4_func_009e4260(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
