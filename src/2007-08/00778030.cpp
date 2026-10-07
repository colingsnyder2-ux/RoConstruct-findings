// roc 2007-08 00778030  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00778030
//
// 00778030  a154df8b00           mov eax, dword ptr [0x8bdf54]
// 00778035  50                   push eax
// 00778036  e8277cebff           call 0x62fc62
// 0077803b  83c404               add esp, 4
// 0077803e  c7053cdf8b00b4707800 mov dword ptr [0x8bdf3c], 0x7870b4
// 00778048  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00778030(int);
void func_00778030()
{
    G4_func_00778030(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
