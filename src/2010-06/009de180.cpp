// roc 2010-06 009de180  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009de180
//
// 009de180  a178acc000           mov eax, dword ptr [0xc0ac78]
// 009de185  50                   push eax
// 009de186  e80f98dcff           call 0x7a799a
// 009de18b  83c404               add esp, 4
// 009de18e  c7055cacc0001809a000 mov dword ptr [0xc0ac5c], 0xa00918
// 009de198  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009de180(int);
void func_009de180()
{
    G4_func_009de180(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
