// roc 2010-06 009e7910  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e7910
//
// 009e7910  a1300fc200           mov eax, dword ptr [0xc20f30]
// 009e7915  50                   push eax
// 009e7916  e87f00dcff           call 0x7a799a
// 009e791b  83c404               add esp, 4
// 009e791e  c705140fc2001809a000 mov dword ptr [0xc20f14], 0xa00918
// 009e7928  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e7910(int);
void func_009e7910()
{
    G4_func_009e7910(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
