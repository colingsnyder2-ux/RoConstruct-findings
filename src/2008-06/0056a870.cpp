// from server: 100% by auto
// roc 2008-06 0056a870  unit: RBX::VInstance::?$NonFactoryProduct  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056a870
//
// 0056a870  6aff                 push -1
// 0056a872  6878017d00           push 0x7d0178
// 0056a877  64a100000000         mov eax, dword ptr fs:[0]
// 0056a87d  50                   push eax
// 0056a87e  64892500000000       mov dword ptr fs:[0], esp
// 0056a885  51                   push ecx
// 0056a886  55                   push ebp
// 0056a887  8be9                 mov ebp, ecx
// 0056a889  8b4514               mov eax, dword ptr [ebp + 0x14]
// 0056a88c  56                   push esi
// 0056a88d  8b30                 mov esi, dword ptr [eax]
// 0056a88f  8900                 mov dword ptr [eax], eax
// 0056a891  8b4514               mov eax, dword ptr [ebp + 0x14]
// 0056a894  894004               mov dword ptr [eax + 4], eax
// 0056a897  c7451800000000       mov dword ptr [ebp + 0x18], 0
// 0056a89e  3b7514               cmp esi, dword ptr [ebp + 0x14]
// 0056a8a1  7443                 je 0x56a8e6
// 0056a8a3  53                   push ebx
// 0056a8a4  57                   push edi
// 0056a8a5  8b3e                 mov edi, dword ptr [esi]
// 0056a8a7  8d5e08               lea ebx, [esi + 8]
// 0056a8aa  895c2410             mov dword ptr [esp + 0x10], ebx
// 0056a8ae  8b4b10               mov ecx, dword ptr [ebx + 0x10]
// 0056a8b1  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0056a8b9  85c9                 test ecx, ecx
// 0056a8bb  7408                 je 0x56a8c5
// 0056a8bd  8b01                 mov eax, dword ptr [ecx]
// 0056a8bf  8b10                 mov edx, dword ptr [eax]
// 0056a8c1  6a01                 push 1
// 0056a8c3  ffd2                 call edx
// 0056a8c5  8bcb                 mov ecx, ebx
// 0056a8c7  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0056a8cf  e89caa0200           call 0x595370
// 0056a8d4  56                   push esi
// 0056a8d5  e8a05d1300           call 0x6a067a
// 0056a8da  83c404               add esp, 4
// 0056a8dd  8bf7                 mov esi, edi
// 0056a8df  3b7d14               cmp edi, dword ptr [ebp + 0x14]
// 0056a8e2  75c1                 jne 0x56a8a5
// 0056a8e4  5f                   pop edi
// 0056a8e5  5b                   pop ebx
// 0056a8e6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0056a8ea  5e                   pop esi
// 0056a8eb  5d                   pop ebp
// 0056a8ec  64890d00000000       mov dword ptr fs:[0], ecx
// 0056a8f3  83c410               add esp, 0x10
// 0056a8f6  c3                   ret 
// library boost-1.34.1/libs\signals\src\named_slot_map.cpp (function ?clear@?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/named_slot_map.cpp
