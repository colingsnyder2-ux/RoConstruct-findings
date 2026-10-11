// roc 2011-06 004d06f0  unit: RBX::Network::Players::W4PlayerChatType::?$EnumDesc  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004d06f0
//
// 004d06f0  8b442404             mov eax, dword ptr [esp + 4]
// 004d06f4  83ec0c               sub esp, 0xc
// 004d06f7  6a00                 push 0
// 004d06f9  68f871c000           push 0xc071f8
// 004d06fe  68f873c000           push 0xc073f8
// 004d0703  6a00                 push 0
// 004d0705  50                   push eax
// 004d0706  e8dfab3300           call 0x80b2ea
// 004d070b  83c414               add esp, 0x14
// 004d070e  85c0                 test eax, eax
// 004d0710  751e                 jne 0x4d0730
// 004d0712  680cc1a500           push 0xa5c10c
// 004d0717  8d4c2404             lea ecx, [esp + 4]
// 004d071b  ff15100aa400         call dword ptr [0xa40a10]
// 004d0721  68fc89b900           push 0xb989fc
// 004d0726  8d4c2404             lea ecx, [esp + 4]
// 004d072a  51                   push ecx
// 004d072b  e87ca93300           call 0x80b0ac
// 004d0730  83c40c               add esp, 0xc
// 004d0733  c3                   ret 
// library openrbx-client/App\v8tree\Instance.cpp (function ??$polymorphic_cast@PAVInstance@RBX@@VDescribedBase@Reflection@2@@boost@@YAPAVInstance@RBX@@PAVDescribedBase@Reflection@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8tree/Instance.cpp
