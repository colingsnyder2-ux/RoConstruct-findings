// roc 2007-08 00628db0  unit: RBX::AssemblyStage  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00628db0
//
// 00628db0  8b542410             mov edx, dword ptr [esp + 0x10]
// 00628db4  c1e208               shl edx, 8
// 00628db7  0b54240c             or edx, dword ptr [esp + 0xc]
// 00628dbb  56                   push esi
// 00628dbc  8b742408             mov esi, dword ptr [esp + 8]
// 00628dc0  8b460c               mov eax, dword ptr [esi + 0xc]
// 00628dc3  8b4808               mov ecx, dword ptr [eax + 8]
// 00628dc6  c1e206               shl edx, 6
// 00628dc9  0b54240c             or edx, dword ptr [esp + 0xc]
// 00628dcd  51                   push ecx
// 00628dce  52                   push edx
// 00628dcf  e80cffffff           call 0x628ce0
// 00628dd4  83c408               add esp, 8
// 00628dd7  5e                   pop esi
// 00628dd8  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_codeABx)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
