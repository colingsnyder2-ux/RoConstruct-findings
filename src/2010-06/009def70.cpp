// roc 2010-06 009def70  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009def70
//
// 009def70  a188bcc000           mov eax, dword ptr [0xc0bc88]
// 009def75  50                   push eax
// 009def76  e81f8adcff           call 0x7a799a
// 009def7b  83c404               add esp, 4
// 009def7e  c7056cbcc0001809a000 mov dword ptr [0xc0bc6c], 0xa00918
// 009def88  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009def70(int);
void func_009def70()
{
    G4_func_009def70(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
