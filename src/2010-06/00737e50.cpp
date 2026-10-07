// roc 2010-06 00737e50  unit: seg_00730000  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00737e50
//
// 00737e50  56                   push esi
// 00737e51  57                   push edi
// 00737e52  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00737e56  6a01                 push 1
// 00737e58  57                   push edi
// 00737e59  e80296feff           call 0x721460
// 00737e5e  8bf0                 mov esi, eax
// 00737e60  83c408               add esp, 8
// 00737e63  85f6                 test esi, esi
// 00737e65  7510                 jne 0x737e77
// 00737e67  6808e9a400           push 0xa4e908
// 00737e6c  6a01                 push 1
// 00737e6e  57                   push edi
// 00737e6f  e8bcaefeff           call 0x722d30
// 00737e74  83c40c               add esp, 0xc
// 00737e77  57                   push edi
// 00737e78  e863ffffff           call 0x737de0
// 00737e7d  8b0485a8e6a400       mov eax, dword ptr [eax*4 + 0xa4e6a8]
// 00737e84  50                   push eax
// 00737e85  57                   push edi
// 00737e86  e80597feff           call 0x721590
// 00737e8b  83c40c               add esp, 0xc
// 00737e8e  5f                   pop edi
// 00737e8f  b801000000           mov eax, 1
// 00737e94  5e                   pop esi
// 00737e95  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_costatus)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
