// roc 2007-08 0077aff0  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077aff0
//
// 0077aff0  a16c528c00           mov eax, dword ptr [0x8c526c]
// 0077aff5  50                   push eax
// 0077aff6  e8674cebff           call 0x62fc62
// 0077affb  83c404               add esp, 4
// 0077affe  c70554528c00b4707800 mov dword ptr [0x8c5254], 0x7870b4
// 0077b008  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077aff0(int);
void func_0077aff0()
{
    G4_func_0077aff0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
