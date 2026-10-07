// roc 2012-06 005bbb70  unit: RakNet::RakPeer  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005bbb70
//
// 005bbb70  64a100000000         mov eax, dword ptr fs:[0]
// 005bbb76  6aff                 push -1
// 005bbb78  684b16ab00           push 0xab164b
// 005bbb7d  50                   push eax
// 005bbb7e  64892500000000       mov dword ptr fs:[0], esp
// 005bbb85  56                   push esi
// 005bbb86  57                   push edi
// 005bbb87  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 005bbb8b  85ff                 test edi, edi
// 005bbb8d  744e                 je 0x5bbbdd
// 005bbb8f  33c9                 xor ecx, ecx
// 005bbb91  8bc7                 mov eax, edi
// 005bbb93  ba14000000           mov edx, 0x14
// 005bbb98  f7e2                 mul edx
// 005bbb9a  0f90c1               seto cl
// 005bbb9d  f7d9                 neg ecx
// 005bbb9f  0bc8                 or ecx, eax
// 005bbba1  51                   push ecx
// 005bbba2  e849683c00           call 0x9823f0
// 005bbba7  8bf0                 mov esi, eax
// 005bbba9  83c404               add esp, 4
// 005bbbac  89742418             mov dword ptr [esp + 0x18], esi
// 005bbbb0  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005bbbb8  85f6                 test esi, esi
// 005bbbba  7421                 je 0x5bbbdd
// 005bbbbc  68301a5600           push 0x561a30
// 005bbbc1  57                   push edi
// 005bbbc2  6a14                 push 0x14
// 005bbbc4  56                   push esi
// 005bbbc5  e856b6eeff           call 0x4a7220
// 005bbbca  8bc6                 mov eax, esi
// 005bbbcc  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005bbbd0  64890d00000000       mov dword ptr fs:[0], ecx
// 005bbbd7  5f                   pop edi
// 005bbbd8  5e                   pop esi
// 005bbbd9  83c40c               add esp, 0xc
// 005bbbdc  c3                   ret 
// 005bbbdd  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005bbbe1  5f                   pop edi
// 005bbbe2  33c0                 xor eax, eax
// 005bbbe4  64890d00000000       mov dword ptr fs:[0], ecx
// 005bbbeb  5e                   pop esi
// 005bbbec  83c40c               add esp, 0xc
// 005bbbef  c3                   ret 
// library rbx2016-raknet/NatPunchthroughClient.cpp (function ??$OP_NEW_ARRAY@USystemAddress@RakNet@@@RakNet@@YAPAUSystemAddress@0@HPBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet NatPunchthroughClient.cpp
