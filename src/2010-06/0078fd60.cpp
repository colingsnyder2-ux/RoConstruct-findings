// from server: 100% by auto
// roc 2010-06 0078fd60  unit: RBX::GroupDragTool  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0078fd60
//
// 0078fd60  c1e009               shl eax, 9
// 0078fd63  0b44240c             or eax, dword ptr [esp + 0xc]
// 0078fd67  56                   push esi
// 0078fd68  c1e008               shl eax, 8
// 0078fd6b  0b44240c             or eax, dword ptr [esp + 0xc]
// 0078fd6f  8bf1                 mov esi, ecx
// 0078fd71  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0078fd74  8b5108               mov edx, dword ptr [ecx + 8]
// 0078fd77  c1e006               shl eax, 6
// 0078fd7a  0b442408             or eax, dword ptr [esp + 8]
// 0078fd7e  57                   push edi
// 0078fd7f  52                   push edx
// 0078fd80  50                   push eax
// 0078fd81  e83afdffff           call 0x78fac0
// 0078fd86  8b7e20               mov edi, dword ptr [esi + 0x20]
// 0078fd89  8b460c               mov eax, dword ptr [esi + 0xc]
// 0078fd8c  c74620ffffffff       mov dword ptr [esi + 0x20], 0xffffffff
// 0078fd93  8b4808               mov ecx, dword ptr [eax + 8]
// 0078fd96  51                   push ecx
// 0078fd97  681680ff7f           push 0x7fff8016
// 0078fd9c  e81ffdffff           call 0x78fac0
// 0078fda1  57                   push edi
// 0078fda2  8d542428             lea edx, [esp + 0x28]
// 0078fda6  52                   push edx
// 0078fda7  56                   push esi
// 0078fda8  89442430             mov dword ptr [esp + 0x30], eax
// 0078fdac  e87ff8ffff           call 0x78f630
// 0078fdb1  8b442430             mov eax, dword ptr [esp + 0x30]
// 0078fdb5  83c41c               add esp, 0x1c
// 0078fdb8  5f                   pop edi
// 0078fdb9  5e                   pop esi
// 0078fdba  c3                   ret 
// library lua-5.1.4/lcode.c (function _condjump)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
