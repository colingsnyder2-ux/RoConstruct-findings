// roc 2007-08 004875b0  unit: RBX::Network::VPlayer::?$FactoryProduct  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004875b0
//
// 004875b0  8b442404             mov eax, dword ptr [esp + 4]
// 004875b4  8b08                 mov ecx, dword ptr [eax]
// 004875b6  8b542408             mov edx, dword ptr [esp + 8]
// 004875ba  51                   push ecx
// 004875bb  8b0a                 mov ecx, dword ptr [edx]
// 004875bd  e86ea00b00           call 0x541630
// 004875c2  c3                   ret 
// library rbxgs-net/Player.cpp (function ?addChild@@YAXABV?$shared_ptr@VModelInstance@RBX@@@boost@@ABV?$shared_ptr@VInstance@RBX@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
