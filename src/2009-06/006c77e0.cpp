// roc 2009-06 006c77e0  unit: seg_006c0000  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c77e0
//
// 006c77e0  56                   push esi
// 006c77e1  57                   push edi
// 006c77e2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006c77e6  6a01                 push 1
// 006c77e8  57                   push edi
// 006c77e9  e8a21affff           call 0x6b9290
// 006c77ee  8bf0                 mov esi, eax
// 006c77f0  83c408               add esp, 8
// 006c77f3  85f6                 test esi, esi
// 006c77f5  7510                 jne 0x6c7807
// 006c77f7  68a0c18e00           push 0x8ec1a0
// 006c77fc  6a01                 push 1
// 006c77fe  57                   push edi
// 006c77ff  e8cc32ffff           call 0x6baad0
// 006c7804  83c40c               add esp, 0xc
// 006c7807  57                   push edi
// 006c7808  e863ffffff           call 0x6c7770
// 006c780d  8b048538bf8e00       mov eax, dword ptr [eax*4 + 0x8ebf38]
// 006c7814  50                   push eax
// 006c7815  57                   push edi
// 006c7816  e8a51bffff           call 0x6b93c0
// 006c781b  83c40c               add esp, 0xc
// 006c781e  5f                   pop edi
// 006c781f  b801000000           mov eax, 1
// 006c7824  5e                   pop esi
// 006c7825  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_costatus)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
