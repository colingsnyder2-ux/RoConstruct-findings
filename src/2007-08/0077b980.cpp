// roc 2007-08 0077b980  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077b980
//
// 0077b980  a130638c00           mov eax, dword ptr [0x8c6330]
// 0077b985  50                   push eax
// 0077b986  e8d742ebff           call 0x62fc62
// 0077b98b  83c404               add esp, 4
// 0077b98e  c70518638c00b4707800 mov dword ptr [0x8c6318], 0x7870b4
// 0077b998  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077b980(int);
void func_0077b980()
{
    G4_func_0077b980(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
