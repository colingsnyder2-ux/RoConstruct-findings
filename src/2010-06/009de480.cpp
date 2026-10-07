// roc 2010-06 009de480  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009de480
//
// 009de480  a180adc000           mov eax, dword ptr [0xc0ad80]
// 009de485  50                   push eax
// 009de486  e80f95dcff           call 0x7a799a
// 009de48b  83c404               add esp, 4
// 009de48e  c70564adc0001809a000 mov dword ptr [0xc0ad64], 0xa00918
// 009de498  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009de480(int);
void func_009de480()
{
    G4_func_009de480(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
