// roc 2007-08 0077a5f0  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a5f0
//
// 0077a5f0  a12c318c00           mov eax, dword ptr [0x8c312c]
// 0077a5f5  50                   push eax
// 0077a5f6  e86756ebff           call 0x62fc62
// 0077a5fb  83c404               add esp, 4
// 0077a5fe  c70514318c00b4707800 mov dword ptr [0x8c3114], 0x7870b4
// 0077a608  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077a5f0(int);
void func_0077a5f0()
{
    G4_func_0077a5f0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
