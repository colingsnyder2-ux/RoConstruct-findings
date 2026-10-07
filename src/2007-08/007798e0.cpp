// roc 2007-08 007798e0  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 007798e0
//
// 007798e0  a1e4178c00           mov eax, dword ptr [0x8c17e4]
// 007798e5  50                   push eax
// 007798e6  e87763ebff           call 0x62fc62
// 007798eb  83c404               add esp, 4
// 007798ee  c705c8178c00b4707800 mov dword ptr [0x8c17c8], 0x7870b4
// 007798f8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_007798e0(int);
void func_007798e0()
{
    G4_func_007798e0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
