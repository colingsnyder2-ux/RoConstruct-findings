// roc 2007-08 00628d80  unit: RBX::AssemblyStage  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00628d80
//
// 00628d80  8b542410             mov edx, dword ptr [esp + 0x10]
// 00628d84  c1e209               shl edx, 9
// 00628d87  0b542414             or edx, dword ptr [esp + 0x14]
// 00628d8b  56                   push esi
// 00628d8c  8b742408             mov esi, dword ptr [esp + 8]
// 00628d90  8b460c               mov eax, dword ptr [esi + 0xc]
// 00628d93  8b4808               mov ecx, dword ptr [eax + 8]
// 00628d96  c1e208               shl edx, 8
// 00628d99  0b542410             or edx, dword ptr [esp + 0x10]
// 00628d9d  51                   push ecx
// 00628d9e  c1e206               shl edx, 6
// 00628da1  0b542410             or edx, dword ptr [esp + 0x10]
// 00628da5  52                   push edx
// 00628da6  e835ffffff           call 0x628ce0
// 00628dab  83c408               add esp, 8
// 00628dae  5e                   pop esi
// 00628daf  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_codeABC)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
