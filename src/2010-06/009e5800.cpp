// roc 2010-06 009e5800  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e5800
//
// 009e5800  a1f4e7c100           mov eax, dword ptr [0xc1e7f4]
// 009e5805  50                   push eax
// 009e5806  e88f21dcff           call 0x7a799a
// 009e580b  83c404               add esp, 4
// 009e580e  c705d8e7c1001809a000 mov dword ptr [0xc1e7d8], 0xa00918
// 009e5818  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e5800(int);
void func_009e5800()
{
    G4_func_009e5800(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
