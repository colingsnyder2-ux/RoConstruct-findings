// from server: 100% by auto
// roc 2009-06 006fa3d0  unit: RBX::GroupDragTool  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006fa3d0
//
// 006fa3d0  c1e009               shl eax, 9
// 006fa3d3  0b44240c             or eax, dword ptr [esp + 0xc]
// 006fa3d7  56                   push esi
// 006fa3d8  c1e008               shl eax, 8
// 006fa3db  0b44240c             or eax, dword ptr [esp + 0xc]
// 006fa3df  8bf1                 mov esi, ecx
// 006fa3e1  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 006fa3e4  8b5108               mov edx, dword ptr [ecx + 8]
// 006fa3e7  c1e006               shl eax, 6
// 006fa3ea  0b442408             or eax, dword ptr [esp + 8]
// 006fa3ee  57                   push edi
// 006fa3ef  52                   push edx
// 006fa3f0  50                   push eax
// 006fa3f1  e83afdffff           call 0x6fa130
// 006fa3f6  8b7e20               mov edi, dword ptr [esi + 0x20]
// 006fa3f9  8b460c               mov eax, dword ptr [esi + 0xc]
// 006fa3fc  c74620ffffffff       mov dword ptr [esi + 0x20], 0xffffffff
// 006fa403  8b4808               mov ecx, dword ptr [eax + 8]
// 006fa406  51                   push ecx
// 006fa407  681680ff7f           push 0x7fff8016
// 006fa40c  e81ffdffff           call 0x6fa130
// 006fa411  57                   push edi
// 006fa412  8d542428             lea edx, [esp + 0x28]
// 006fa416  52                   push edx
// 006fa417  56                   push esi
// 006fa418  89442430             mov dword ptr [esp + 0x30], eax
// 006fa41c  e88ff8ffff           call 0x6f9cb0
// 006fa421  8b442430             mov eax, dword ptr [esp + 0x30]
// 006fa425  83c41c               add esp, 0x1c
// 006fa428  5f                   pop edi
// 006fa429  5e                   pop esi
// 006fa42a  c3                   ret 
// library lua-5.1.4/lcode.c (function _condjump)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
