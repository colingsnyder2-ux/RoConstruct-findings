// from server: 100% by auto
// roc 2008-06 00570cb0  unit: RBX::Reflection::ClassDescriptor  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00570cb0
//
// 00570cb0  6aff                 push -1
// 00570cb2  6878017d00           push 0x7d0178
// 00570cb7  64a100000000         mov eax, dword ptr fs:[0]
// 00570cbd  50                   push eax
// 00570cbe  64892500000000       mov dword ptr fs:[0], esp
// 00570cc5  51                   push ecx
// 00570cc6  56                   push esi
// 00570cc7  57                   push edi
// 00570cc8  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00570ccc  8bf1                 mov esi, ecx
// 00570cce  57                   push edi
// 00570ccf  8974240c             mov dword ptr [esp + 0xc], esi
// 00570cd3  e818440200           call 0x5950f0
// 00570cd8  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 00570cdb  33c0                 xor eax, eax
// 00570cdd  89442414             mov dword ptr [esp + 0x14], eax
// 00570ce1  3bc8                 cmp ecx, eax
// 00570ce3  7407                 je 0x570cec
// 00570ce5  8b01                 mov eax, dword ptr [ecx]
// 00570ce7  8b5008               mov edx, dword ptr [eax + 8]
// 00570cea  ffd2                 call edx
// 00570cec  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00570cf0  894610               mov dword ptr [esi + 0x10], eax
// 00570cf3  5f                   pop edi
// 00570cf4  8bc6                 mov eax, esi
// 00570cf6  5e                   pop esi
// 00570cf7  64890d00000000       mov dword ptr fs:[0], ecx
// 00570cfe  83c410               add esp, 0x10
// 00570d01  c20400               ret 4
// library boost-1.34.1/libs\signals\src\named_slot_map.cpp (function ??0connection_slot_pair@detail@signals@boost@@QAE@ABU0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/named_slot_map.cpp
