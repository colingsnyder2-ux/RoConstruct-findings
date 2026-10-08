// roc 2009-06 004b4270  unit: RBX::Network::VPlayer::?$FactoryProduct  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004b4270
//
// 004b4270  8b442404             mov eax, dword ptr [esp + 4]
// 004b4274  8b08                 mov ecx, dword ptr [eax]
// 004b4276  8b542408             mov edx, dword ptr [esp + 8]
// 004b427a  51                   push ecx
// 004b427b  8b0a                 mov ecx, dword ptr [edx]
// 004b427d  e8cedb1100           call 0x5d1e50
// 004b4282  c3                   ret 
// library rbxgs-net/Player.cpp (function ?addChild@@YAXABV?$shared_ptr@VModelInstance@RBX@@@boost@@ABV?$shared_ptr@VInstance@RBX@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
