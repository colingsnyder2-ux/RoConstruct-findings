// roc 2007-08 00777bc0  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00777bc0
//
// 00777bc0  a114bd8b00           mov eax, dword ptr [0x8bbd14]
// 00777bc5  50                   push eax
// 00777bc6  e89780ebff           call 0x62fc62
// 00777bcb  83c404               add esp, 4
// 00777bce  c705f8bc8b00b4707800 mov dword ptr [0x8bbcf8], 0x7870b4
// 00777bd8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00777bc0(int);
void func_00777bc0()
{
    G4_func_00777bc0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
