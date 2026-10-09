// roc 2008-06 005654b0  unit: RBX::Debugable::W4AssertAction::?$EnumDesc  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005654b0
//
// 005654b0  6aff                 push -1
// 005654b2  68b8f37c00           push 0x7cf3b8
// 005654b7  64a100000000         mov eax, dword ptr fs:[0]
// 005654bd  50                   push eax
// 005654be  64892500000000       mov dword ptr fs:[0], esp
// 005654c5  51                   push ecx
// 005654c6  56                   push esi
// 005654c7  8bf1                 mov esi, ecx
// 005654c9  89742404             mov dword ptr [esp + 4], esi
// 005654cd  e80ee7ffff           call 0x563be0
// 005654d2  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005654da  e801faffff           call 0x564ee0
// 005654df  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005654e3  89461c               mov dword ptr [esi + 0x1c], eax
// 005654e6  c70634e58200         mov dword ptr [esi], 0x82e534
// 005654ec  c7461028e58200       mov dword ptr [esi + 0x10], 0x82e528
// 005654f3  c7461420e58200       mov dword ptr [esi + 0x14], 0x82e520
// 005654fa  c7462018e58200       mov dword ptr [esi + 0x20], 0x82e518
// 00565501  c7462408e58200       mov dword ptr [esi + 0x24], 0x82e508
// 00565508  c74644f8e48200       mov dword ptr [esi + 0x44], 0x82e4f8
// 0056550f  c74664e8e48200       mov dword ptr [esi + 0x64], 0x82e4e8
// 00565516  c78684000000d8e48200 mov dword ptr [esi + 0x84], 0x82e4d8
// 00565520  c786a4000000c8e48200 mov dword ptr [esi + 0xa4], 0x82e4c8
// 0056552a  c786c4000000b8e48200 mov dword ptr [esi + 0xc4], 0x82e4b8
// 00565534  8bc6                 mov eax, esi
// 00565536  5e                   pop esi
// 00565537  64890d00000000       mov dword ptr fs:[0], ecx
// 0056553e  83c410               add esp, 0x10
// 00565541  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$DescribedCreatable@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
