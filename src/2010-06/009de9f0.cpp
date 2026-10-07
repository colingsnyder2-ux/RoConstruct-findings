// roc 2010-06 009de9f0  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009de9f0
//
// 009de9f0  a12cb3c000           mov eax, dword ptr [0xc0b32c]
// 009de9f5  50                   push eax
// 009de9f6  e89f8fdcff           call 0x7a799a
// 009de9fb  83c404               add esp, 4
// 009de9fe  c70510b3c0001809a000 mov dword ptr [0xc0b310], 0xa00918
// 009dea08  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009de9f0(int);
void func_009de9f0()
{
    G4_func_009de9f0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
