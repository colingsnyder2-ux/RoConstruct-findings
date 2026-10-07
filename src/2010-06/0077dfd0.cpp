// roc 2010-06 0077dfd0  unit: RBX::PartDropTool  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077dfd0
//
// 0077dfd0  56                   push esi
// 0077dfd1  57                   push edi
// 0077dfd2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0077dfd6  6a20                 push 0x20
// 0077dfd8  6a00                 push 0
// 0077dfda  6a00                 push 0
// 0077dfdc  57                   push edi
// 0077dfdd  e81e0a0000           call 0x77ea00
// 0077dfe2  8bf0                 mov esi, eax
// 0077dfe4  6a0a                 push 0xa
// 0077dfe6  56                   push esi
// 0077dfe7  57                   push edi
// 0077dfe8  e8c3cfffff           call 0x77afb0
// 0077dfed  8d4610               lea eax, [esi + 0x10]
// 0077dff0  83c41c               add esp, 0x1c
// 0077dff3  894608               mov dword ptr [esi + 8], eax
// 0077dff6  c7400800000000       mov dword ptr [eax + 8], 0
// 0077dffd  5f                   pop edi
// 0077dffe  8bc6                 mov eax, esi
// 0077e000  5e                   pop esi
// 0077e001  c3                   ret 
// library lua-5.1.4/lfunc.c (function _luaF_newupval)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lfunc.c
