// roc 2009-06 005cf450  unit: VAuthoringSettings::?$FactoryProduct  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005cf450
//
// 005cf450  8b442404             mov eax, dword ptr [esp + 4]
// 005cf454  83ec0c               sub esp, 0xc
// 005cf457  6a00                 push 0
// 005cf459  6840be9d00           push 0x9dbe40
// 005cf45e  68c4bf9d00           push 0x9dbfc4
// 005cf463  6a00                 push 0
// 005cf465  50                   push eax
// 005cf466  e80fa81400           call 0x719c7a
// 005cf46b  83c414               add esp, 0x14
// 005cf46e  85c0                 test eax, eax
// 005cf470  751e                 jne 0x5cf490
// 005cf472  6850d38a00           push 0x8ad350
// 005cf477  8d4c2404             lea ecx, [esp + 4]
// 005cf47b  ff1570e98900         call dword ptr [0x89e970]
// 005cf481  68b04b9800           push 0x984bb0
// 005cf486  8d4c2404             lea ecx, [esp + 4]
// 005cf48a  51                   push ecx
// 005cf48b  e8baa51400           call 0x719a4a
// 005cf490  83c40c               add esp, 0xc
// 005cf493  c3                   ret 
// library openrbx-client/App\v8tree\Instance.cpp (function ??$polymorphic_cast@PAVInstance@RBX@@VDescribedBase@Reflection@2@@boost@@YAPAVInstance@RBX@@PAVDescribedBase@Reflection@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8tree/Instance.cpp
