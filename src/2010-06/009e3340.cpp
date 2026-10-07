// roc 2010-06 009e3340  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e3340
//
// 009e3340  a184abc100           mov eax, dword ptr [0xc1ab84]
// 009e3345  50                   push eax
// 009e3346  e84f46dcff           call 0x7a799a
// 009e334b  83c404               add esp, 4
// 009e334e  c70568abc1001809a000 mov dword ptr [0xc1ab68], 0xa00918
// 009e3358  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e3340(int);
void func_009e3340()
{
    G4_func_009e3340(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
