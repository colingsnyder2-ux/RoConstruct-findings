// from server: 100% by auto
// roc 2008-06 0056b230  unit: RBX::VInstance::?$NonFactoryProduct  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056b230
//
// 0056b230  6aff                 push -1
// 0056b232  684bfa7c00           push 0x7cfa4b
// 0056b237  64a100000000         mov eax, dword ptr fs:[0]
// 0056b23d  50                   push eax
// 0056b23e  64892500000000       mov dword ptr fs:[0], esp
// 0056b245  51                   push ecx
// 0056b246  8b442414             mov eax, dword ptr [esp + 0x14]
// 0056b24a  56                   push esi
// 0056b24b  8bf1                 mov esi, ecx
// 0056b24d  50                   push eax
// 0056b24e  8d4e08               lea ecx, [esi + 8]
// 0056b251  89742408             mov dword ptr [esp + 8], esi
// 0056b255  c70600000000         mov dword ptr [esi], 0
// 0056b25b  e8d0730000           call 0x572630
// 0056b260  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0056b264  8b09                 mov ecx, dword ptr [ecx]
// 0056b266  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0056b26e  85c9                 test ecx, ecx
// 0056b270  7409                 je 0x56b27b
// 0056b272  8b11                 mov edx, dword ptr [ecx]
// 0056b274  8b4208               mov eax, dword ptr [edx + 8]
// 0056b277  ffd0                 call eax
// 0056b279  eb02                 jmp 0x56b27d
// 0056b27b  33c0                 xor eax, eax
// 0056b27d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0056b281  894658               mov dword ptr [esi + 0x58], eax
// 0056b284  806604fc             and byte ptr [esi + 4], 0xfc
// 0056b288  8bc6                 mov eax, esi
// 0056b28a  5e                   pop esi
// 0056b28b  64890d00000000       mov dword ptr fs:[0], ecx
// 0056b292  83c410               add esp, 0x10
// 0056b295  c20800               ret 8
// library boost-1.34.1/libs\signals\src\signal_base.cpp (function ??0signal_base_impl@detail@signals@boost@@QAE@ABV?$function2@_NVstored_group@detail@signals@boost@@V1234@V?$allocator@Vfunction_base@boost@@@std@@@3@ABVany@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/signal_base.cpp
