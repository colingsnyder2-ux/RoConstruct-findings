// roc 2010-06 009de220  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009de220
//
// 009de220  a1e8adc000           mov eax, dword ptr [0xc0ade8]
// 009de225  50                   push eax
// 009de226  e86f97dcff           call 0x7a799a
// 009de22b  83c404               add esp, 4
// 009de22e  c705ccadc0001809a000 mov dword ptr [0xc0adcc], 0xa00918
// 009de238  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009de220(int);
void func_009de220()
{
    G4_func_009de220(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
