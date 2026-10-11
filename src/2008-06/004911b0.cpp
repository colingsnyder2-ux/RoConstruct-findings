// roc 2008-06 004911b0  unit: RBX::Network::VPlayer::?$PropDescriptor  size: 179 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004911b0
//
// 004911b0  6aff                 push -1
// 004911b2  68a8647c00           push 0x7c64a8
// 004911b7  64a100000000         mov eax, dword ptr fs:[0]
// 004911bd  50                   push eax
// 004911be  64892500000000       mov dword ptr fs:[0], esp
// 004911c5  83ec18               sub esp, 0x18
// 004911c8  57                   push edi
// 004911c9  8bf9                 mov edi, ecx
// 004911cb  6a01                 push 1
// 004911cd  8d4c2408             lea ecx, [esp + 8]
// 004911d1  e89a9ff8ff           call 0x41b170
// 004911d6  8b442414             mov eax, dword ptr [esp + 0x14]
// 004911da  2b442410             sub eax, dword ptr [esp + 0x10]
// 004911de  c744242400000000     mov dword ptr [esp + 0x24], 0
// 004911e6  c1f802               sar eax, 2
// 004911e9  85c0                 test eax, eax
// 004911eb  7706                 ja 0x4911f3
// 004911ed  ff1590288000         call dword ptr [0x802890]
// 004911f3  56                   push esi
// 004911f4  8b742414             mov esi, dword ptr [esp + 0x14]
// 004911f8  6a08                 push 8
// 004911fa  e821f72000           call 0x6a0920
// 004911ff  83c404               add esp, 4
// 00491202  85c0                 test eax, eax
// 00491204  740f                 je 0x491215
// 00491206  d9442430             fld dword ptr [esp + 0x30]
// 0049120a  c700bc068100         mov dword ptr [eax], 0x8106bc
// 00491210  d95804               fstp dword ptr [eax + 4]
// 00491213  eb02                 jmp 0x491217
// 00491215  33c0                 xor eax, eax
// 00491217  8d542430             lea edx, [esp + 0x30]
// 0049121b  8bc8                 mov ecx, eax
// 0049121d  3bd6                 cmp edx, esi
// 0049121f  7404                 je 0x491225
// 00491221  8b0e                 mov ecx, dword ptr [esi]
// 00491223  8906                 mov dword ptr [esi], eax
// 00491225  5e                   pop esi
// 00491226  85c9                 test ecx, ecx
// 00491228  7408                 je 0x491232
// 0049122a  8b01                 mov eax, dword ptr [ecx]
// 0049122c  8b10                 mov edx, dword ptr [eax]
// 0049122e  6a01                 push 1
// 00491230  ffd2                 call edx
// 00491232  8b0f                 mov ecx, dword ptr [edi]
// 00491234  8b01                 mov eax, dword ptr [ecx]
// 00491236  8b4004               mov eax, dword ptr [eax + 4]
// 00491239  8d542404             lea edx, [esp + 4]
// 0049123d  52                   push edx
// 0049123e  ffd0                 call eax
// 00491240  8d4c2404             lea ecx, [esp + 4]
// 00491244  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0049124c  e8cf9cf8ff           call 0x41af20
// 00491251  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00491255  5f                   pop edi
// 00491256  64890d00000000       mov dword ptr fs:[0], ecx
// 0049125d  83c424               add esp, 0x24
// 00491260  c20400               ret 4
// library openrbx-client/App\util\RunStateOwner.cpp (function ??RGenericSlotAdapter@?$SignalDescImpl@$00$$A6AXM@Z@Reflection@RBX@@QBEXM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/util/RunStateOwner.cpp
