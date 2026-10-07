// roc 2010-06 009e3510  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e3510
//
// 009e3510  a114adc100           mov eax, dword ptr [0xc1ad14]
// 009e3515  50                   push eax
// 009e3516  e87f44dcff           call 0x7a799a
// 009e351b  83c404               add esp, 4
// 009e351e  c705f8acc1001809a000 mov dword ptr [0xc1acf8], 0xa00918
// 009e3528  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e3510(int);
void func_009e3510()
{
    G4_func_009e3510(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
