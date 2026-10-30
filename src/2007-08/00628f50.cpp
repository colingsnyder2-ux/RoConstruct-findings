// from server: 100% by auto
// roc 2007-08 00628f50  unit: RBX::AssemblyStage  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00628f50
//
// 00628f50  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00628f54  56                   push esi
// 00628f55  8b742408             mov esi, dword ptr [esp + 8]
// 00628f59  8b460c               mov eax, dword ptr [esi + 0xc]
// 00628f5c  8b4808               mov ecx, dword ptr [eax + 8]
// 00628f5f  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00628f63  83c201               add edx, 1
// 00628f66  c1e217               shl edx, 0x17
// 00628f69  c1e006               shl eax, 6
// 00628f6c  0bd0                 or edx, eax
// 00628f6e  51                   push ecx
// 00628f6f  83ca1e               or edx, 0x1e
// 00628f72  52                   push edx
// 00628f73  e868fdffff           call 0x628ce0
// 00628f78  83c408               add esp, 8
// 00628f7b  5e                   pop esi
// 00628f7c  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_ret)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
