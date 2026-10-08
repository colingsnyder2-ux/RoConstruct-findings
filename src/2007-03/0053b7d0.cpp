// roc 2007-03 0053b7d0  unit: seg_00530000  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0053b7d0
//
// 0053b7d0  83ec08               sub esp, 8
// 0053b7d3  56                   push esi
// 0053b7d4  8bf1                 mov esi, ecx
// 0053b7d6  8b5604               mov edx, dword ptr [esi + 4]
// 0053b7d9  85d2                 test edx, edx
// 0053b7db  57                   push edi
// 0053b7dc  7504                 jne 0x53b7e2
// 0053b7de  33c9                 xor ecx, ecx
// 0053b7e0  eb08                 jmp 0x53b7ea
// 0053b7e2  8b4e08               mov ecx, dword ptr [esi + 8]
// 0053b7e5  2bca                 sub ecx, edx
// 0053b7e7  c1f903               sar ecx, 3
// 0053b7ea  85d2                 test edx, edx
// 0053b7ec  743d                 je 0x53b82b
// 0053b7ee  8b460c               mov eax, dword ptr [esi + 0xc]
// 0053b7f1  2bc2                 sub eax, edx
// 0053b7f3  c1f803               sar eax, 3
// 0053b7f6  3bc8                 cmp ecx, eax
// 0053b7f8  7331                 jae 0x53b82b
// 0053b7fa  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0053b7fe  8b542414             mov edx, dword ptr [esp + 0x14]
// 0053b802  8b7e08               mov edi, dword ptr [esi + 8]
// 0053b805  c644240800           mov byte ptr [esp + 8], 0
// 0053b80a  8b442408             mov eax, dword ptr [esp + 8]
// 0053b80e  50                   push eax
// 0053b80f  51                   push ecx
// 0053b810  56                   push esi
// 0053b811  52                   push edx
// 0053b812  6a01                 push 1
// 0053b814  57                   push edi
// 0053b815  e89641f6ff           call 0x49f9b0
// 0053b81a  83c418               add esp, 0x18
// 0053b81d  83c708               add edi, 8
// 0053b820  897e08               mov dword ptr [esi + 8], edi
// 0053b823  5f                   pop edi
// 0053b824  5e                   pop esi
// 0053b825  83c408               add esp, 8
// 0053b828  c20400               ret 4
// 0053b82b  8b7e08               mov edi, dword ptr [esi + 8]
// 0053b82e  3bd7                 cmp edx, edi
// 0053b830  7606                 jbe 0x53b838
// 0053b832  ff1544e97700         call dword ptr [0x77e944]
// 0053b838  8b442414             mov eax, dword ptr [esp + 0x14]
// 0053b83c  50                   push eax
// 0053b83d  57                   push edi
// 0053b83e  56                   push esi
// 0053b83f  8d4c2414             lea ecx, [esp + 0x14]
// 0053b843  51                   push ecx
// 0053b844  8bce                 mov ecx, esi
// 0053b846  e895feffff           call 0x53b6e0
// 0053b84b  5f                   pop edi
// 0053b84c  5e                   pop esi
// 0053b84d  83c408               add esp, 8
// 0053b850  c20400               ret 4
// library rbxgs/v8datamodel\PartInstance.cpp (function ?push_back@?$vector@V?$weak_ptr@VPartInstance@RBX@@@boost@@V?$allocator@V?$weak_ptr@VPartInstance@RBX@@@boost@@@std@@@std@@QAEXABV?$weak_ptr@VPartInstance@RBX@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
