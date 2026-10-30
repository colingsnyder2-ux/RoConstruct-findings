// from server: 100% by auto
// roc 2007-08 00628f80  unit: RBX::AssemblyStage  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00628f80
//
// 00628f80  c1e009               shl eax, 9
// 00628f83  0b44240c             or eax, dword ptr [esp + 0xc]
// 00628f87  56                   push esi
// 00628f88  c1e008               shl eax, 8
// 00628f8b  0b44240c             or eax, dword ptr [esp + 0xc]
// 00628f8f  8bf1                 mov esi, ecx
// 00628f91  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00628f94  8b5108               mov edx, dword ptr [ecx + 8]
// 00628f97  c1e006               shl eax, 6
// 00628f9a  0b442408             or eax, dword ptr [esp + 8]
// 00628f9e  57                   push edi
// 00628f9f  52                   push edx
// 00628fa0  50                   push eax
// 00628fa1  e83afdffff           call 0x628ce0
// 00628fa6  8b7e20               mov edi, dword ptr [esi + 0x20]
// 00628fa9  8b460c               mov eax, dword ptr [esi + 0xc]
// 00628fac  c74620ffffffff       mov dword ptr [esi + 0x20], 0xffffffff
// 00628fb3  8b4808               mov ecx, dword ptr [eax + 8]
// 00628fb6  51                   push ecx
// 00628fb7  681680ff7f           push 0x7fff8016
// 00628fbc  e81ffdffff           call 0x628ce0
// 00628fc1  57                   push edi
// 00628fc2  8d542428             lea edx, [esp + 0x28]
// 00628fc6  52                   push edx
// 00628fc7  56                   push esi
// 00628fc8  89442430             mov dword ptr [esp + 0x30], eax
// 00628fcc  e84ff8ffff           call 0x628820
// 00628fd1  8b442430             mov eax, dword ptr [esp + 0x30]
// 00628fd5  83c41c               add esp, 0x1c
// 00628fd8  5f                   pop edi
// 00628fd9  5e                   pop esi
// 00628fda  c3                   ret 
// library lua-5.1.4/lcode.c (function _condjump)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
