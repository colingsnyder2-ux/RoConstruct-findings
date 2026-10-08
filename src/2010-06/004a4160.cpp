// roc 2010-06 004a4160  unit: RBX::Network::Player  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004a4160
//
// 004a4160  8b442404             mov eax, dword ptr [esp + 4]
// 004a4164  8b08                 mov ecx, dword ptr [eax]
// 004a4166  8b542408             mov edx, dword ptr [esp + 8]
// 004a416a  51                   push ecx
// 004a416b  8b0a                 mov ecx, dword ptr [edx]
// 004a416d  e81e4c0f00           call 0x598d90
// 004a4172  c3                   ret 
// library rbxgs-net/Player.cpp (function ?addChild@@YAXABV?$shared_ptr@VModelInstance@RBX@@@boost@@ABV?$shared_ptr@VInstance@RBX@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
