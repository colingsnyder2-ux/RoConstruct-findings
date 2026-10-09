// roc 2010-06 004ab810  unit: RBX::Network::Player::W4BuildPermission::?$EnumDesc  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004ab810
//
// 004ab810  6aff                 push -1
// 004ab812  6800899800           push 0x988900
// 004ab817  64a100000000         mov eax, dword ptr fs:[0]
// 004ab81d  50                   push eax
// 004ab81e  64892500000000       mov dword ptr fs:[0], esp
// 004ab825  83ec08               sub esp, 8
// 004ab828  56                   push esi
// 004ab829  8bf1                 mov esi, ecx
// 004ab82b  6a04                 push 4
// 004ab82d  8974240c             mov dword ptr [esp + 0xc], esi
// 004ab831  e86ac12f00           call 0x7a79a0
// 004ab836  33c9                 xor ecx, ecx
// 004ab838  83c404               add esp, 4
// 004ab83b  3bc1                 cmp eax, ecx
// 004ab83d  7404                 je 0x4ab843
// 004ab83f  8930                 mov dword ptr [eax], esi
// 004ab841  eb02                 jmp 0x4ab845
// 004ab843  33c0                 xor eax, eax
// 004ab845  8906                 mov dword ptr [esi], eax
// 004ab847  894c2414             mov dword ptr [esp + 0x14], ecx
// 004ab84b  894c2404             mov dword ptr [esp + 4], ecx
// 004ab84f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004ab853  8d442404             lea eax, [esp + 4]
// 004ab857  50                   push eax
// 004ab858  51                   push ecx
// 004ab859  8bce                 mov ecx, esi
// 004ab85b  c644241c01           mov byte ptr [esp + 0x1c], 1
// 004ab860  e8fbedffff           call 0x4aa660
// 004ab865  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004ab869  8bc6                 mov eax, esi
// 004ab86b  5e                   pop esi
// 004ab86c  64890d00000000       mov dword ptr fs:[0], ecx
// 004ab873  83c414               add esp, 0x14
// 004ab876  c20400               ret 4
// library openrbx-client/App\util\RunStateOwner.cpp (function ??0?$vector@Vany@boost@@V?$allocator@Vany@boost@@@std@@@std@@QAE@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
