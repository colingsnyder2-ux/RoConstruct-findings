// roc 2010-06 009e3650  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e3650
//
// 009e3650  a160aec100           mov eax, dword ptr [0xc1ae60]
// 009e3655  50                   push eax
// 009e3656  e83f43dcff           call 0x7a799a
// 009e365b  83c404               add esp, 4
// 009e365e  c70544aec1001809a000 mov dword ptr [0xc1ae44], 0xa00918
// 009e3668  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e3650(int);
void func_009e3650()
{
    G4_func_009e3650(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
