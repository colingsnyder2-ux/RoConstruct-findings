// roc 2007-08 0077a150  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a150
//
// 0077a150  a170298c00           mov eax, dword ptr [0x8c2970]
// 0077a155  50                   push eax
// 0077a156  e8075bebff           call 0x62fc62
// 0077a15b  83c404               add esp, 4
// 0077a15e  c70558298c00b4707800 mov dword ptr [0x8c2958], 0x7870b4
// 0077a168  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077a150(int);
void func_0077a150()
{
    G4_func_0077a150(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
