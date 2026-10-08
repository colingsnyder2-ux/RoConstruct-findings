// roc 2008-06 0048a670  unit: RBX::Network::VPlayer::?$FactoryProduct  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048a670
//
// 0048a670  8b442404             mov eax, dword ptr [esp + 4]
// 0048a674  8b08                 mov ecx, dword ptr [eax]
// 0048a676  8b542408             mov edx, dword ptr [esp + 8]
// 0048a67a  51                   push ecx
// 0048a67b  8b0a                 mov ecx, dword ptr [edx]
// 0048a67d  e86e020d00           call 0x55a8f0
// 0048a682  c3                   ret 
// library rbxgs-net/Player.cpp (function ?addChild@@YAXABV?$shared_ptr@VModelInstance@RBX@@@boost@@ABV?$shared_ptr@VInstance@RBX@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
