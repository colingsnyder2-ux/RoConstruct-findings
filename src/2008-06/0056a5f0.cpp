// from server: 100% by auto
// roc 2008-06 0056a5f0  unit: RBX::VInstance::?$NonFactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056a5f0
//
// 0056a5f0  6aff                 push -1
// 0056a5f2  6878017d00           push 0x7d0178
// 0056a5f7  64a100000000         mov eax, dword ptr fs:[0]
// 0056a5fd  50                   push eax
// 0056a5fe  64892500000000       mov dword ptr fs:[0], esp
// 0056a605  51                   push ecx
// 0056a606  56                   push esi
// 0056a607  8bf1                 mov esi, ecx
// 0056a609  89742404             mov dword ptr [esp + 4], esi
// 0056a60d  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0056a610  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0056a618  85c9                 test ecx, ecx
// 0056a61a  7408                 je 0x56a624
// 0056a61c  8b01                 mov eax, dword ptr [ecx]
// 0056a61e  8b10                 mov edx, dword ptr [eax]
// 0056a620  6a01                 push 1
// 0056a622  ffd2                 call edx
// 0056a624  8bce                 mov ecx, esi
// 0056a626  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0056a62e  e83dad0200           call 0x595370
// 0056a633  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0056a637  5e                   pop esi
// 0056a638  64890d00000000       mov dword ptr fs:[0], ecx
// 0056a63f  83c410               add esp, 0x10
// 0056a642  c3                   ret 
// library boost-1.34.1/libs\signals\src\named_slot_map.cpp (function ??1connection_slot_pair@detail@signals@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/named_slot_map.cpp
