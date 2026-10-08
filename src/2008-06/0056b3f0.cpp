// from server: 100% by auto
// roc 2008-06 0056b3f0  unit: boost::signals::detail::Vsignal_base_impl::?$sp_counted_impl_p  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056b3f0
//
// 0056b3f0  6aff                 push -1
// 0056b3f2  6883fa7c00           push 0x7cfa83
// 0056b3f7  64a100000000         mov eax, dword ptr fs:[0]
// 0056b3fd  50                   push eax
// 0056b3fe  64892500000000       mov dword ptr fs:[0], esp
// 0056b405  83ec08               sub esp, 8
// 0056b408  56                   push esi
// 0056b409  8bf1                 mov esi, ecx
// 0056b40b  c70600000000         mov dword ptr [esi], 0
// 0056b411  89742404             mov dword ptr [esp + 4], esi
// 0056b415  c7460400000000       mov dword ptr [esi + 4], 0
// 0056b41c  6a60                 push 0x60
// 0056b41e  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0056b426  e8f5541300           call 0x6a0920
// 0056b42b  83c404               add esp, 4
// 0056b42e  89442408             mov dword ptr [esp + 8], eax
// 0056b432  c644241401           mov byte ptr [esp + 0x14], 1
// 0056b437  85c0                 test eax, eax
// 0056b439  7413                 je 0x56b44e
// 0056b43b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0056b43f  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0056b443  51                   push ecx
// 0056b444  52                   push edx
// 0056b445  8bc8                 mov ecx, eax
// 0056b447  e8e4fdffff           call 0x56b230
// 0056b44c  eb02                 jmp 0x56b450
// 0056b44e  33c0                 xor eax, eax
// 0056b450  50                   push eax
// 0056b451  8bce                 mov ecx, esi
// 0056b453  c644241800           mov byte ptr [esp + 0x18], 0
// 0056b458  e813ffffff           call 0x56b370
// 0056b45d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0056b461  8bc6                 mov eax, esi
// 0056b463  5e                   pop esi
// 0056b464  64890d00000000       mov dword ptr fs:[0], ecx
// 0056b46b  83c414               add esp, 0x14
// 0056b46e  c20800               ret 8
// library boost-1.34.1/libs\signals\src\signal_base.cpp (function ??0signal_base@detail@signals@boost@@QAE@ABV?$function2@_NVstored_group@detail@signals@boost@@V1234@V?$allocator@Vfunction_base@boost@@@std@@@3@ABVany@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/signal_base.cpp
