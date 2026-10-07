// roc 2008-06 0066b3b0  unit: RBX::GroupDragTool  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066b3b0
//
// 0066b3b0  56                   push esi
// 0066b3b1  8b742408             mov esi, dword ptr [esp + 8]
// 0066b3b5  8b460c               mov eax, dword ptr [esi + 0xc]
// 0066b3b8  57                   push edi
// 0066b3b9  8b7e20               mov edi, dword ptr [esi + 0x20]
// 0066b3bc  c74620ffffffff       mov dword ptr [esi + 0x20], 0xffffffff
// 0066b3c3  8b4808               mov ecx, dword ptr [eax + 8]
// 0066b3c6  51                   push ecx
// 0066b3c7  681680ff7f           push 0x7fff8016
// 0066b3cc  e8bffdffff           call 0x66b190
// 0066b3d1  57                   push edi
// 0066b3d2  8d542418             lea edx, [esp + 0x18]
// 0066b3d6  52                   push edx
// 0066b3d7  56                   push esi
// 0066b3d8  89442420             mov dword ptr [esp + 0x20], eax
// 0066b3dc  e82ff9ffff           call 0x66ad10
// 0066b3e1  8b442420             mov eax, dword ptr [esp + 0x20]
// 0066b3e5  83c414               add esp, 0x14
// 0066b3e8  5f                   pop edi
// 0066b3e9  5e                   pop esi
// 0066b3ea  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_jump)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
