// roc 2010-06 009e41a0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e41a0
//
// 009e41a0  a144c5c100           mov eax, dword ptr [0xc1c544]
// 009e41a5  50                   push eax
// 009e41a6  e8ef37dcff           call 0x7a799a
// 009e41ab  83c404               add esp, 4
// 009e41ae  c70528c5c1001809a000 mov dword ptr [0xc1c528], 0xa00918
// 009e41b8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e41a0(int);
void func_009e41a0()
{
    G4_func_009e41a0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
