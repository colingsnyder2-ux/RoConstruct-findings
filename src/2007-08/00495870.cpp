// roc 2007-08 00495870  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00495870
//
// 00495870  83ec08               sub esp, 8
// 00495873  56                   push esi
// 00495874  57                   push edi
// 00495875  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00495879  57                   push edi
// 0049587a  e83187ffff           call 0x48dfb0
// 0049587f  8bf0                 mov esi, eax
// 00495881  83c404               add esp, 4
// 00495884  85f6                 test esi, esi
// 00495886  745d                 je 0x4958e5
// 00495888  83ec08               sub esp, 8
// 0049588b  8bc4                 mov eax, esp
// 0049588d  89642410             mov dword ptr [esp + 0x10], esp
// 00495891  57                   push edi
// 00495892  50                   push eax
// 00495893  e8d87d0000           call 0x49d670
// 00495898  83c408               add esp, 8
// 0049589b  8d4c2410             lea ecx, [esp + 0x10]
// 0049589f  51                   push ecx
// 004958a0  8bce                 mov ecx, esi
// 004958a2  e8e9d3ffff           call 0x492c90
// 004958a7  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004958ab  85f6                 test esi, esi
// 004958ad  8b7c2408             mov edi, dword ptr [esp + 8]
// 004958b1  742a                 je 0x4958dd
// 004958b3  8d5604               lea edx, [esi + 4]
// 004958b6  83c8ff               or eax, 0xffffffff
// 004958b9  f00fc102             lock xadd dword ptr [edx], eax
// 004958bd  751e                 jne 0x4958dd
// 004958bf  8b16                 mov edx, dword ptr [esi]
// 004958c1  8b4204               mov eax, dword ptr [edx + 4]
// 004958c4  8bce                 mov ecx, esi
// 004958c6  ffd0                 call eax
// 004958c8  8d4e08               lea ecx, [esi + 8]
// 004958cb  83caff               or edx, 0xffffffff
// 004958ce  f00fc111             lock xadd dword ptr [ecx], edx
// 004958d2  7509                 jne 0x4958dd
// 004958d4  8b06                 mov eax, dword ptr [esi]
// 004958d6  8b5008               mov edx, dword ptr [eax + 8]
// 004958d9  8bce                 mov ecx, esi
// 004958db  ffd2                 call edx
// 004958dd  8bc7                 mov eax, edi
// 004958df  5f                   pop edi
// 004958e0  5e                   pop esi
// 004958e1  83c408               add esp, 8
// 004958e4  c3                   ret 
// 004958e5  5f                   pop edi
// 004958e6  33c0                 xor eax, eax
// 004958e8  5e                   pop esi
// 004958e9  83c408               add esp, 8
// 004958ec  c3                   ret 
// library rbxgs-net/Players.cpp (function ?getPlayerFromCharacter@Players@Network@RBX@@SAPAVPlayer@23@PAVInstance@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
