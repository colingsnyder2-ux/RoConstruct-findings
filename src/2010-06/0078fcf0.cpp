// roc 2010-06 0078fcf0  unit: RBX::GroupDragTool  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0078fcf0
//
// 0078fcf0  56                   push esi
// 0078fcf1  8b742408             mov esi, dword ptr [esp + 8]
// 0078fcf5  8b460c               mov eax, dword ptr [esi + 0xc]
// 0078fcf8  57                   push edi
// 0078fcf9  8b7e20               mov edi, dword ptr [esi + 0x20]
// 0078fcfc  c74620ffffffff       mov dword ptr [esi + 0x20], 0xffffffff
// 0078fd03  8b4808               mov ecx, dword ptr [eax + 8]
// 0078fd06  51                   push ecx
// 0078fd07  681680ff7f           push 0x7fff8016
// 0078fd0c  e8affdffff           call 0x78fac0
// 0078fd11  57                   push edi
// 0078fd12  8d542418             lea edx, [esp + 0x18]
// 0078fd16  52                   push edx
// 0078fd17  56                   push esi
// 0078fd18  89442420             mov dword ptr [esp + 0x20], eax
// 0078fd1c  e80ff9ffff           call 0x78f630
// 0078fd21  8b442420             mov eax, dword ptr [esp + 0x20]
// 0078fd25  83c414               add esp, 0x14
// 0078fd28  5f                   pop edi
// 0078fd29  5e                   pop esi
// 0078fd2a  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_jump)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
