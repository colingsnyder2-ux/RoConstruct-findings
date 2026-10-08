// roc 2011-06 004a4f20  unit: RBX::Network::VPlayer::?$FactoryProduct  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004a4f20
//
// 004a4f20  8b442404             mov eax, dword ptr [esp + 4]
// 004a4f24  8b08                 mov ecx, dword ptr [eax]
// 004a4f26  8b542408             mov edx, dword ptr [esp + 8]
// 004a4f2a  51                   push ecx
// 004a4f2b  8b0a                 mov ecx, dword ptr [edx]
// 004a4f2d  e8de290f00           call 0x597910
// 004a4f32  c3                   ret 
// library rbxgs-net/Player.cpp (function ?addChild@@YAXABV?$shared_ptr@VModelInstance@RBX@@@boost@@ABV?$shared_ptr@VInstance@RBX@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
