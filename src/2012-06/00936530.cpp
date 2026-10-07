// roc 2012-06 00936530  unit: seg_00930000  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00936530
//
// 00936530  56                   push esi
// 00936531  57                   push edi
// 00936532  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00936536  6a20                 push 0x20
// 00936538  6a00                 push 0
// 0093653a  6a00                 push 0
// 0093653c  57                   push edi
// 0093653d  e81e0a0000           call 0x936f60
// 00936542  8bf0                 mov esi, eax
// 00936544  6a0a                 push 0xa
// 00936546  56                   push esi
// 00936547  57                   push edi
// 00936548  e8b3ceffff           call 0x933400
// 0093654d  8d4610               lea eax, [esi + 0x10]
// 00936550  83c41c               add esp, 0x1c
// 00936553  894608               mov dword ptr [esi + 8], eax
// 00936556  c7400800000000       mov dword ptr [eax + 8], 0
// 0093655d  5f                   pop edi
// 0093655e  8bc6                 mov eax, esi
// 00936560  5e                   pop esi
// 00936561  c3                   ret 
// library lua-5.1.4/lfunc.c (function _luaF_newupval)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lfunc.c
