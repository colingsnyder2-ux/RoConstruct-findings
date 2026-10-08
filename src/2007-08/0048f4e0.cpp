// roc 2007-08 0048f4e0  unit: RBX::Network::Player  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0048f4e0
//
// 0048f4e0  56                   push esi
// 0048f4e1  68bcb37900           push 0x79b3bc
// 0048f4e6  6a01                 push 1
// 0048f4e8  8bf1                 mov esi, ecx
// 0048f4ea  e8d1fbffff           call 0x48f0c0
// 0048f4ef  8bc8                 mov ecx, eax
// 0048f4f1  e8ca73ffff           call 0x4868c0
// 0048f4f6  8b442408             mov eax, dword ptr [esp + 8]
// 0048f4fa  50                   push eax
// 0048f4fb  8bce                 mov ecx, esi
// 0048f4fd  e8ee260b00           call 0x541bf0
// 0048f502  5e                   pop esi
// 0048f503  c20400               ret 4
// library rbxgs-net/Player.cpp (function ?setName@Player@Network@RBX@@UAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
