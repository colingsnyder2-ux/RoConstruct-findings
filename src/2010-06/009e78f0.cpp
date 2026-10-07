// roc 2010-06 009e78f0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e78f0
//
// 009e78f0  a1080fc200           mov eax, dword ptr [0xc20f08]
// 009e78f5  50                   push eax
// 009e78f6  e89f00dcff           call 0x7a799a
// 009e78fb  83c404               add esp, 4
// 009e78fe  c705ec0ec2001809a000 mov dword ptr [0xc20eec], 0xa00918
// 009e7908  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e78f0(int);
void func_009e78f0()
{
    G4_func_009e78f0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
