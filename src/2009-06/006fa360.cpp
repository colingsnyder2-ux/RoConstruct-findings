// from server: 100% by auto
// roc 2009-06 006fa360  unit: RBX::GroupDragTool  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006fa360
//
// 006fa360  56                   push esi
// 006fa361  8b742408             mov esi, dword ptr [esp + 8]
// 006fa365  8b460c               mov eax, dword ptr [esi + 0xc]
// 006fa368  57                   push edi
// 006fa369  8b7e20               mov edi, dword ptr [esi + 0x20]
// 006fa36c  c74620ffffffff       mov dword ptr [esi + 0x20], 0xffffffff
// 006fa373  8b4808               mov ecx, dword ptr [eax + 8]
// 006fa376  51                   push ecx
// 006fa377  681680ff7f           push 0x7fff8016
// 006fa37c  e8affdffff           call 0x6fa130
// 006fa381  57                   push edi
// 006fa382  8d542418             lea edx, [esp + 0x18]
// 006fa386  52                   push edx
// 006fa387  56                   push esi
// 006fa388  89442420             mov dword ptr [esp + 0x20], eax
// 006fa38c  e81ff9ffff           call 0x6f9cb0
// 006fa391  8b442420             mov eax, dword ptr [esp + 0x20]
// 006fa395  83c414               add esp, 0x14
// 006fa398  5f                   pop edi
// 006fa399  5e                   pop esi
// 006fa39a  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_jump)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
