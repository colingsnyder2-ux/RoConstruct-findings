// roc 2010-06 009e3630  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e3630
//
// 009e3630  a10cafc100           mov eax, dword ptr [0xc1af0c]
// 009e3635  50                   push eax
// 009e3636  e85f43dcff           call 0x7a799a
// 009e363b  83c404               add esp, 4
// 009e363e  c705f0aec1001809a000 mov dword ptr [0xc1aef0], 0xa00918
// 009e3648  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e3630(int);
void func_009e3630()
{
    G4_func_009e3630(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
