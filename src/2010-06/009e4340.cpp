// roc 2010-06 009e4340  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e4340
//
// 009e4340  a16ccbc100           mov eax, dword ptr [0xc1cb6c]
// 009e4345  50                   push eax
// 009e4346  e84f36dcff           call 0x7a799a
// 009e434b  83c404               add esp, 4
// 009e434e  c70550cbc1001809a000 mov dword ptr [0xc1cb50], 0xa00918
// 009e4358  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e4340(int);
void func_009e4340()
{
    G4_func_009e4340(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
