// roc 2010-06 009e6770  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e6770
//
// 009e6770  a104fac100           mov eax, dword ptr [0xc1fa04]
// 009e6775  50                   push eax
// 009e6776  e81f12dcff           call 0x7a799a
// 009e677b  83c404               add esp, 4
// 009e677e  c705e8f9c1001809a000 mov dword ptr [0xc1f9e8], 0xa00918
// 009e6788  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e6770(int);
void func_009e6770()
{
    G4_func_009e6770(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
