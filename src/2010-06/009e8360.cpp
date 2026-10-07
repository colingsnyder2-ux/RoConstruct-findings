// roc 2010-06 009e8360  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e8360
//
// 009e8360  a1ec1ec200           mov eax, dword ptr [0xc21eec]
// 009e8365  50                   push eax
// 009e8366  e82ff6dbff           call 0x7a799a
// 009e836b  83c404               add esp, 4
// 009e836e  c705d01ec2001809a000 mov dword ptr [0xc21ed0], 0xa00918
// 009e8378  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e8360(int);
void func_009e8360()
{
    G4_func_009e8360(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
