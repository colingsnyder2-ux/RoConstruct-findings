// roc 2010-06 009de620  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009de620
//
// 009de620  a140adc000           mov eax, dword ptr [0xc0ad40]
// 009de625  50                   push eax
// 009de626  e86f93dcff           call 0x7a799a
// 009de62b  83c404               add esp, 4
// 009de62e  c70524adc0001809a000 mov dword ptr [0xc0ad24], 0xa00918
// 009de638  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009de620(int);
void func_009de620()
{
    G4_func_009de620(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
