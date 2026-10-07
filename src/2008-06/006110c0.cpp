// roc 2008-06 006110c0  unit: RBX::BlockBlockContact  size: 170 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006110c0
//
// 006110c0  53                   push ebx
// 006110c1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 006110c5  8d830f270000         lea eax, [ebx + 0x270f]
// 006110cb  56                   push esi
// 006110cc  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006110d0  3d0f270000           cmp eax, 0x270f
// 006110d5  770d                 ja 0x6110e4
// 006110d7  56                   push esi
// 006110d8  e8330b0000           call 0x611c10
// 006110dd  83c404               add esp, 4
// 006110e0  8d5c0301             lea ebx, [ebx + eax + 1]
// 006110e4  6aff                 push -1
// 006110e6  56                   push esi
// 006110e7  e8140d0000           call 0x611e00
// 006110ec  83c408               add esp, 8
// 006110ef  85c0                 test eax, eax
// 006110f1  7511                 jne 0x611104
// 006110f3  6afe                 push -2
// 006110f5  56                   push esi
// 006110f6  e8250b0000           call 0x611c20
// 006110fb  83c408               add esp, 8
// 006110fe  5e                   pop esi
// 006110ff  83c8ff               or eax, 0xffffffff
// 00611102  5b                   pop ebx
// 00611103  c3                   ret 
// 00611104  57                   push edi
// 00611105  6a00                 push 0
// 00611107  53                   push ebx
// 00611108  56                   push esi
// 00611109  e822140000           call 0x612530
// 0061110e  6aff                 push -1
// 00611110  56                   push esi
// 00611111  e88a0e0000           call 0x611fa0
// 00611116  6afe                 push -2
// 00611118  56                   push esi
// 00611119  8bf8                 mov edi, eax
// 0061111b  e8000b0000           call 0x611c20
// 00611120  83c41c               add esp, 0x1c
// 00611123  85ff                 test edi, edi
// 00611125  7425                 je 0x61114c
// 00611127  57                   push edi
// 00611128  53                   push ebx
// 00611129  56                   push esi
// 0061112a  e801140000           call 0x612530
// 0061112f  6a00                 push 0
// 00611131  53                   push ebx
// 00611132  56                   push esi
// 00611133  e848160000           call 0x612780
// 00611138  83c418               add esp, 0x18
// 0061113b  57                   push edi
// 0061113c  53                   push ebx
// 0061113d  56                   push esi
// 0061113e  e83d160000           call 0x612780
// 00611143  83c40c               add esp, 0xc
// 00611146  8bc7                 mov eax, edi
// 00611148  5f                   pop edi
// 00611149  5e                   pop esi
// 0061114a  5b                   pop ebx
// 0061114b  c3                   ret 
// 0061114c  53                   push ebx
// 0061114d  56                   push esi
// 0061114e  e82d0f0000           call 0x612080
// 00611153  8bf8                 mov edi, eax
// 00611155  83c408               add esp, 8
// 00611158  47                   inc edi
// 00611159  57                   push edi
// 0061115a  53                   push ebx
// 0061115b  56                   push esi
// 0061115c  e81f160000           call 0x612780
// 00611161  83c40c               add esp, 0xc
// 00611164  8bc7                 mov eax, edi
// 00611166  5f                   pop edi
// 00611167  5e                   pop esi
// 00611168  5b                   pop ebx
// 00611169  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_ref)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
