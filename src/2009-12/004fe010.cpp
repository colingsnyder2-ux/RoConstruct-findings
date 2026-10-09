// roc 2009-12 004fe010  unit: RBX::Network::Player::W4BuildPermission::?$EnumDesc  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004fe010
//
// 004fe010  6aff                 push -1
// 004fe012  6860629300           push 0x936260
// 004fe017  64a100000000         mov eax, dword ptr fs:[0]
// 004fe01d  50                   push eax
// 004fe01e  64892500000000       mov dword ptr fs:[0], esp
// 004fe025  83ec08               sub esp, 8
// 004fe028  56                   push esi
// 004fe029  8bf1                 mov esi, ecx
// 004fe02b  6a04                 push 4
// 004fe02d  8974240c             mov dword ptr [esp + 0xc], esi
// 004fe031  e82a582f00           call 0x7f3860
// 004fe036  33c9                 xor ecx, ecx
// 004fe038  83c404               add esp, 4
// 004fe03b  3bc1                 cmp eax, ecx
// 004fe03d  7404                 je 0x4fe043
// 004fe03f  8930                 mov dword ptr [eax], esi
// 004fe041  eb02                 jmp 0x4fe045
// 004fe043  33c0                 xor eax, eax
// 004fe045  8906                 mov dword ptr [esi], eax
// 004fe047  894c2414             mov dword ptr [esp + 0x14], ecx
// 004fe04b  894c2404             mov dword ptr [esp + 4], ecx
// 004fe04f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004fe053  8d442404             lea eax, [esp + 4]
// 004fe057  50                   push eax
// 004fe058  51                   push ecx
// 004fe059  8bce                 mov ecx, esi
// 004fe05b  c644241c01           mov byte ptr [esp + 0x1c], 1
// 004fe060  e8dbeaffff           call 0x4fcb40
// 004fe065  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004fe069  8bc6                 mov eax, esi
// 004fe06b  5e                   pop esi
// 004fe06c  64890d00000000       mov dword ptr fs:[0], ecx
// 004fe073  83c414               add esp, 0x14
// 004fe076  c20400               ret 4
// library openrbx-client/App\util\RunStateOwner.cpp (function ??0?$vector@Vany@boost@@V?$allocator@Vany@boost@@@std@@@std@@QAE@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
