// roc 2009-12 004f60f0  unit: RBX::Network::VPlayer::?$FactoryProduct  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004f60f0
//
// 004f60f0  8b442404             mov eax, dword ptr [esp + 4]
// 004f60f4  8b08                 mov ecx, dword ptr [eax]
// 004f60f6  8b542408             mov edx, dword ptr [esp + 8]
// 004f60fa  51                   push ecx
// 004f60fb  8b0a                 mov ecx, dword ptr [edx]
// 004f60fd  e87e0c1400           call 0x636d80
// 004f6102  c3                   ret 
// library rbxgs-net/Player.cpp (function ?addChild@@YAXABV?$shared_ptr@VModelInstance@RBX@@@boost@@ABV?$shared_ptr@VInstance@RBX@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
