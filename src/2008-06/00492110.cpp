// roc 2008-06 00492110  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00492110
//
// 00492110  6aff                 push -1
// 00492112  6879657c00           push 0x7c6579
// 00492117  64a100000000         mov eax, dword ptr fs:[0]
// 0049211d  50                   push eax
// 0049211e  64892500000000       mov dword ptr fs:[0], esp
// 00492125  83ec28               sub esp, 0x28
// 00492128  56                   push esi
// 00492129  57                   push edi
// 0049212a  c744240800000000     mov dword ptr [esp + 8], 0
// 00492132  8b442464             mov eax, dword ptr [esp + 0x64]
// 00492136  50                   push eax
// 00492137  83ec20               sub esp, 0x20
// 0049213a  8d542468             lea edx, [esp + 0x68]
// 0049213e  89a42488000000       mov dword ptr [esp + 0x88], esp
// 00492145  8bcc                 mov ecx, esp
// 00492147  52                   push edx
// 00492148  c744246001000000     mov dword ptr [esp + 0x60], 1
// 00492150  e8ebb2ffff           call 0x48d440
// 00492155  8d4c2430             lea ecx, [esp + 0x30]
// 00492159  e852edffff           call 0x490eb0
// 0049215e  8bf0                 mov esi, eax
// 00492160  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 00492164  56                   push esi
// 00492165  8bcf                 mov ecx, edi
// 00492167  c644243c02           mov byte ptr [esp + 0x3c], 2
// 0049216c  e8cfb2ffff           call 0x48d440
// 00492171  8b4620               mov eax, dword ptr [esi + 0x20]
// 00492174  894720               mov dword ptr [edi + 0x20], eax
// 00492177  8d4c240c             lea ecx, [esp + 0xc]
// 0049217b  c744240801000000     mov dword ptr [esp + 8], 1
// 00492183  c644243801           mov byte ptr [esp + 0x38], 1
// 00492188  e813b6ffff           call 0x48d7a0
// 0049218d  8d4c2444             lea ecx, [esp + 0x44]
// 00492191  c644243800           mov byte ptr [esp + 0x38], 0
// 00492196  e805b6ffff           call 0x48d7a0
// 0049219b  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0049219f  8bc7                 mov eax, edi
// 004921a1  5f                   pop edi
// 004921a2  64890d00000000       mov dword ptr fs:[0], ecx
// 004921a9  5e                   pop esi
// 004921aa  83c434               add esp, 0x34
// 004921ad  c3                   ret 
// library rbxgs/roc_descriptor_receiver_native_family_bd34d89f6d6c7dad.cpp (function ??$token_finder@U?$is_any_ofF@D@detail@algorithm@boost@@@algorithm@boost@@YA?AU?$token_finderF@U?$is_any_ofF@D@detail@algorithm@boost@@@detail@01@U?$is_any_ofF@D@301@W4token_compress_mode_type@01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_descriptor_receiver_native_family_bd34d89f6d6c7dad.cpp
