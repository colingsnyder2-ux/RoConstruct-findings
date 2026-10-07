// roc 2007-08 0077b110  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077b110
//
// 0077b110  a1cc538c00           mov eax, dword ptr [0x8c53cc]
// 0077b115  50                   push eax
// 0077b116  e8474bebff           call 0x62fc62
// 0077b11b  83c404               add esp, 4
// 0077b11e  c705b4538c00b4707800 mov dword ptr [0x8c53b4], 0x7870b4
// 0077b128  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077b110(int);
void func_0077b110()
{
    G4_func_0077b110(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
