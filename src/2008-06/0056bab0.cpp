// roc 2008-06 0056bab0  unit: boost::signals::detail::Vsignal_base_impl::?$sp_counted_impl_p  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056bab0
//
// 0056bab0  6aff                 push -1
// 0056bab2  6893207d00           push 0x7d2093
// 0056bab7  64a100000000         mov eax, dword ptr fs:[0]
// 0056babd  50                   push eax
// 0056babe  64892500000000       mov dword ptr fs:[0], esp
// 0056bac5  51                   push ecx
// 0056bac6  8b442418             mov eax, dword ptr [esp + 0x18]
// 0056baca  56                   push esi
// 0056bacb  57                   push edi
// 0056bacc  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0056bad0  6824f68200           push 0x82f624
// 0056bad5  50                   push eax
// 0056bad6  8bf1                 mov esi, ecx
// 0056bad8  57                   push edi
// 0056bad9  89742414             mov dword ptr [esp + 0x14], esi
// 0056badd  e89ef9ffff           call 0x56b480
// 0056bae2  33c0                 xor eax, eax
// 0056bae4  8d4e14               lea ecx, [esi + 0x14]
// 0056bae7  89442414             mov dword ptr [esp + 0x14], eax
// 0056baeb  894610               mov dword ptr [esi + 0x10], eax
// 0056baee  e8fd900200           call 0x594bf0
// 0056baf3  56                   push esi
// 0056baf4  8d4f3c               lea ecx, [edi + 0x3c]
// 0056baf7  c644241801           mov byte ptr [esp + 0x18], 1
// 0056bafc  e8fffbffff           call 0x56b700
// 0056bb01  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0056bb05  5f                   pop edi
// 0056bb06  8bc6                 mov eax, esi
// 0056bb08  5e                   pop esi
// 0056bb09  64890d00000000       mov dword ptr fs:[0], ecx
// 0056bb10  83c410               add esp, 0x10
// 0056bb13  c20800               ret 8
// library rbxgs/reflection\signal.cpp (function ??0SignalDescriptor@Reflection@RBX@@IAE@AAVClassDescriptor@12@PBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp
