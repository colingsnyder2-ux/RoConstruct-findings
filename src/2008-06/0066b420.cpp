// from server: 100% by auto
// roc 2008-06 0066b420  unit: RBX::GroupDragTool  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066b420
//
// 0066b420  c1e009               shl eax, 9
// 0066b423  0b44240c             or eax, dword ptr [esp + 0xc]
// 0066b427  56                   push esi
// 0066b428  c1e008               shl eax, 8
// 0066b42b  0b44240c             or eax, dword ptr [esp + 0xc]
// 0066b42f  8bf1                 mov esi, ecx
// 0066b431  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0066b434  8b5108               mov edx, dword ptr [ecx + 8]
// 0066b437  c1e006               shl eax, 6
// 0066b43a  0b442408             or eax, dword ptr [esp + 8]
// 0066b43e  57                   push edi
// 0066b43f  52                   push edx
// 0066b440  50                   push eax
// 0066b441  e84afdffff           call 0x66b190
// 0066b446  8b7e20               mov edi, dword ptr [esi + 0x20]
// 0066b449  8b460c               mov eax, dword ptr [esi + 0xc]
// 0066b44c  c74620ffffffff       mov dword ptr [esi + 0x20], 0xffffffff
// 0066b453  8b4808               mov ecx, dword ptr [eax + 8]
// 0066b456  51                   push ecx
// 0066b457  681680ff7f           push 0x7fff8016
// 0066b45c  e82ffdffff           call 0x66b190
// 0066b461  57                   push edi
// 0066b462  8d542428             lea edx, [esp + 0x28]
// 0066b466  52                   push edx
// 0066b467  56                   push esi
// 0066b468  89442430             mov dword ptr [esp + 0x30], eax
// 0066b46c  e89ff8ffff           call 0x66ad10
// 0066b471  8b442430             mov eax, dword ptr [esp + 0x30]
// 0066b475  83c41c               add esp, 0x1c
// 0066b478  5f                   pop edi
// 0066b479  5e                   pop esi
// 0066b47a  c3                   ret 
// library lua-5.1.4/lcode.c (function _condjump)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
