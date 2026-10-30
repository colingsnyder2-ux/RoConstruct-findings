// from server: 100% by auto
// roc 2009-06 006ecd30  unit: RBX::PartDropTool  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ecd30
//
// 006ecd30  56                   push esi
// 006ecd31  57                   push edi
// 006ecd32  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006ecd36  6a20                 push 0x20
// 006ecd38  6a00                 push 0
// 006ecd3a  6a00                 push 0
// 006ecd3c  57                   push edi
// 006ecd3d  e81e0a0000           call 0x6ed760
// 006ecd42  8bf0                 mov esi, eax
// 006ecd44  6a0a                 push 0xa
// 006ecd46  56                   push esi
// 006ecd47  57                   push edi
// 006ecd48  e8c3cfffff           call 0x6e9d10
// 006ecd4d  8d4610               lea eax, [esi + 0x10]
// 006ecd50  83c41c               add esp, 0x1c
// 006ecd53  894608               mov dword ptr [esi + 8], eax
// 006ecd56  c7400800000000       mov dword ptr [eax + 8], 0
// 006ecd5d  5f                   pop edi
// 006ecd5e  8bc6                 mov eax, esi
// 006ecd60  5e                   pop esi
// 006ecd61  c3                   ret 
// library lua-5.1.4/lfunc.c (function _luaF_newupval)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lfunc.c
