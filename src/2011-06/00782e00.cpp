// from server: 100% by auto
// roc 2011-06 00782e00  unit: seg_00780000  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00782e00
//
// 00782e00  56                   push esi
// 00782e01  57                   push edi
// 00782e02  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00782e06  6a01                 push 1
// 00782e08  57                   push edi
// 00782e09  e862fafdff           call 0x762870
// 00782e0e  8bf0                 mov esi, eax
// 00782e10  83c408               add esp, 8
// 00782e13  85f6                 test esi, esi
// 00782e15  7510                 jne 0x782e27
// 00782e17  68c882ab00           push 0xab82c8
// 00782e1c  6a01                 push 1
// 00782e1e  57                   push edi
// 00782e1f  e87c11feff           call 0x763fa0
// 00782e24  83c40c               add esp, 0xc
// 00782e27  57                   push edi
// 00782e28  e863ffffff           call 0x782d90
// 00782e2d  8b0485b080ab00       mov eax, dword ptr [eax*4 + 0xab80b0]
// 00782e34  50                   push eax
// 00782e35  57                   push edi
// 00782e36  e865fbfdff           call 0x7629a0
// 00782e3b  83c40c               add esp, 0xc
// 00782e3e  5f                   pop edi
// 00782e3f  b801000000           mov eax, 1
// 00782e44  5e                   pop esi
// 00782e45  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_costatus)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
