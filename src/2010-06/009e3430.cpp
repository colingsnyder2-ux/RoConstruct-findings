// roc 2010-06 009e3430  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e3430
//
// 009e3430  a1a0adc100           mov eax, dword ptr [0xc1ada0]
// 009e3435  50                   push eax
// 009e3436  e85f45dcff           call 0x7a799a
// 009e343b  83c404               add esp, 4
// 009e343e  c70584adc1001809a000 mov dword ptr [0xc1ad84], 0xa00918
// 009e3448  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e3430(int);
void func_009e3430()
{
    G4_func_009e3430(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
