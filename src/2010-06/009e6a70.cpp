// roc 2010-06 009e6a70  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e6a70
//
// 009e6a70  a1b0fbc100           mov eax, dword ptr [0xc1fbb0]
// 009e6a75  50                   push eax
// 009e6a76  e81f0fdcff           call 0x7a799a
// 009e6a7b  83c404               add esp, 4
// 009e6a7e  c70594fbc1001809a000 mov dword ptr [0xc1fb94], 0xa00918
// 009e6a88  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e6a70(int);
void func_009e6a70()
{
    G4_func_009e6a70(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
