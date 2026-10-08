// from server: 100% by auto
// roc 2008-06 0056b1d0  unit: RBX::VInstance::?$NonFactoryProduct  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056b1d0
//
// 0056b1d0  6aff                 push -1
// 0056b1d2  684bfa7c00           push 0x7cfa4b
// 0056b1d7  64a100000000         mov eax, dword ptr fs:[0]
// 0056b1dd  50                   push eax
// 0056b1de  64892500000000       mov dword ptr fs:[0], esp
// 0056b1e5  51                   push ecx
// 0056b1e6  56                   push esi
// 0056b1e7  8bf1                 mov esi, ecx
// 0056b1e9  89742404             mov dword ptr [esp + 4], esi
// 0056b1ed  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 0056b1f0  804e0402             or byte ptr [esi + 4], 2
// 0056b1f4  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0056b1fc  85c9                 test ecx, ecx
// 0056b1fe  7408                 je 0x56b208
// 0056b200  8b01                 mov eax, dword ptr [ecx]
// 0056b202  8b10                 mov edx, dword ptr [eax]
// 0056b204  6a01                 push 1
// 0056b206  ffd2                 call edx
// 0056b208  8d4e08               lea ecx, [esi + 8]
// 0056b20b  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0056b213  e828ffffff           call 0x56b140
// 0056b218  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0056b21c  5e                   pop esi
// 0056b21d  64890d00000000       mov dword ptr fs:[0], ecx
// 0056b224  83c410               add esp, 0x10
// 0056b227  c3                   ret 
// library boost-1.34.1/libs\signals\src\signal_base.cpp (function ??1signal_base_impl@detail@signals@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/signal_base.cpp
