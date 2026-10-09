// roc 2009-06 004be440  unit: std::D::DU?$char_traits::$$A6AXV?$basic_string::?$signal::slot  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004be440
//
// 004be440  6aff                 push -1
// 004be442  6800948500           push 0x859400
// 004be447  64a100000000         mov eax, dword ptr fs:[0]
// 004be44d  50                   push eax
// 004be44e  64892500000000       mov dword ptr fs:[0], esp
// 004be455  83ec08               sub esp, 8
// 004be458  56                   push esi
// 004be459  8bf1                 mov esi, ecx
// 004be45b  6a04                 push 4
// 004be45d  8974240c             mov dword ptr [esp + 0xc], esi
// 004be461  e8d2a52500           call 0x718a38
// 004be466  33c9                 xor ecx, ecx
// 004be468  83c404               add esp, 4
// 004be46b  3bc1                 cmp eax, ecx
// 004be46d  7404                 je 0x4be473
// 004be46f  8930                 mov dword ptr [eax], esi
// 004be471  eb02                 jmp 0x4be475
// 004be473  33c0                 xor eax, eax
// 004be475  8906                 mov dword ptr [esi], eax
// 004be477  894c2414             mov dword ptr [esp + 0x14], ecx
// 004be47b  894c2404             mov dword ptr [esp + 4], ecx
// 004be47f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004be483  8d442404             lea eax, [esp + 4]
// 004be487  50                   push eax
// 004be488  51                   push ecx
// 004be489  8bce                 mov ecx, esi
// 004be48b  c644241c01           mov byte ptr [esp + 0x1c], 1
// 004be490  e80bfeffff           call 0x4be2a0
// 004be495  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004be499  8bc6                 mov eax, esi
// 004be49b  5e                   pop esi
// 004be49c  64890d00000000       mov dword ptr fs:[0], ecx
// 004be4a3  83c414               add esp, 0x14
// 004be4a6  c20400               ret 4
// library openrbx-client/App\util\RunStateOwner.cpp (function ??0?$vector@Vany@boost@@V?$allocator@Vany@boost@@@std@@@std@@QAE@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
