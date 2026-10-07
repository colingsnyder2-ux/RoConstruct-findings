// roc 2012-06 00967950  unit: RBX::CellContact  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00967950
//
// 00967950  c1e009               shl eax, 9
// 00967953  0b44240c             or eax, dword ptr [esp + 0xc]
// 00967957  56                   push esi
// 00967958  c1e008               shl eax, 8
// 0096795b  0b44240c             or eax, dword ptr [esp + 0xc]
// 0096795f  8bf1                 mov esi, ecx
// 00967961  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00967964  8b5108               mov edx, dword ptr [ecx + 8]
// 00967967  c1e006               shl eax, 6
// 0096796a  0b442408             or eax, dword ptr [esp + 8]
// 0096796e  57                   push edi
// 0096796f  52                   push edx
// 00967970  50                   push eax
// 00967971  e83afdffff           call 0x9676b0
// 00967976  8b7e20               mov edi, dword ptr [esi + 0x20]
// 00967979  8b460c               mov eax, dword ptr [esi + 0xc]
// 0096797c  c74620ffffffff       mov dword ptr [esi + 0x20], 0xffffffff
// 00967983  8b4808               mov ecx, dword ptr [eax + 8]
// 00967986  51                   push ecx
// 00967987  681680ff7f           push 0x7fff8016
// 0096798c  e81ffdffff           call 0x9676b0
// 00967991  57                   push edi
// 00967992  8d542428             lea edx, [esp + 0x28]
// 00967996  52                   push edx
// 00967997  56                   push esi
// 00967998  89442430             mov dword ptr [esp + 0x30], eax
// 0096799c  e84ff8ffff           call 0x9671f0
// 009679a1  8b442430             mov eax, dword ptr [esp + 0x30]
// 009679a5  83c41c               add esp, 0x1c
// 009679a8  5f                   pop edi
// 009679a9  5e                   pop esi
// 009679aa  c3                   ret 
// library lua-5.1.4/lcode.c (function _condjump)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
