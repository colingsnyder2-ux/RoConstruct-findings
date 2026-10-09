// roc 2008-06 0041b170  unit: boost::signals::detail::slot_base::Udata_t::?$sp_counted_impl_p  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041b170
//
// 0041b170  6aff                 push -1
// 0041b172  68e0df7b00           push 0x7bdfe0
// 0041b177  64a100000000         mov eax, dword ptr fs:[0]
// 0041b17d  50                   push eax
// 0041b17e  64892500000000       mov dword ptr fs:[0], esp
// 0041b185  83ec08               sub esp, 8
// 0041b188  56                   push esi
// 0041b189  8bf1                 mov esi, ecx
// 0041b18b  6a04                 push 4
// 0041b18d  8974240c             mov dword ptr [esp + 0xc], esi
// 0041b191  e88a572800           call 0x6a0920
// 0041b196  33c9                 xor ecx, ecx
// 0041b198  83c404               add esp, 4
// 0041b19b  3bc1                 cmp eax, ecx
// 0041b19d  7404                 je 0x41b1a3
// 0041b19f  8930                 mov dword ptr [eax], esi
// 0041b1a1  eb02                 jmp 0x41b1a5
// 0041b1a3  33c0                 xor eax, eax
// 0041b1a5  8906                 mov dword ptr [esi], eax
// 0041b1a7  894c2414             mov dword ptr [esp + 0x14], ecx
// 0041b1ab  894c2404             mov dword ptr [esp + 4], ecx
// 0041b1af  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0041b1b3  8d442404             lea eax, [esp + 4]
// 0041b1b7  50                   push eax
// 0041b1b8  51                   push ecx
// 0041b1b9  8bce                 mov ecx, esi
// 0041b1bb  c644241c01           mov byte ptr [esp + 0x1c], 1
// 0041b1c0  e8cbfdffff           call 0x41af90
// 0041b1c5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0041b1c9  8bc6                 mov eax, esi
// 0041b1cb  5e                   pop esi
// 0041b1cc  64890d00000000       mov dword ptr fs:[0], ecx
// 0041b1d3  83c414               add esp, 0x14
// 0041b1d6  c20400               ret 4
// library openrbx-client/App\util\RunStateOwner.cpp (function ??0?$vector@Vany@boost@@V?$allocator@Vany@boost@@@std@@@std@@QAE@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
