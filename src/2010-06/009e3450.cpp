// roc 2010-06 009e3450  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e3450
//
// 009e3450  a134adc100           mov eax, dword ptr [0xc1ad34]
// 009e3455  50                   push eax
// 009e3456  e83f45dcff           call 0x7a799a
// 009e345b  83c404               add esp, 4
// 009e345e  c70518adc1001809a000 mov dword ptr [0xc1ad18], 0xa00918
// 009e3468  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e3450(int);
void func_009e3450()
{
    G4_func_009e3450(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
