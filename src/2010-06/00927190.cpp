// roc 2010-06 00927190  unit: RBX::VerticalCylinderBuilder  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00927190
//
// 00927190  6aff                 push -1
// 00927192  6889009a00           push 0x9a0089
// 00927197  64a100000000         mov eax, dword ptr fs:[0]
// 0092719d  50                   push eax
// 0092719e  64892500000000       mov dword ptr fs:[0], esp
// 009271a5  51                   push ecx
// 009271a6  8b442414             mov eax, dword ptr [esp + 0x14]
// 009271aa  56                   push esi
// 009271ab  8bf1                 mov esi, ecx
// 009271ad  50                   push eax
// 009271ae  89742408             mov dword ptr [esp + 8], esi
// 009271b2  ff1510a49e00         call dword ptr [0x9ea410]
// 009271b8  c744241000000000     mov dword ptr [esp + 0x10], 0
// 009271c0  e82bd2c6ff           call 0x5943f0
// 009271c5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 009271c9  89461c               mov dword ptr [esi + 0x1c], eax
// 009271cc  8bc6                 mov eax, esi
// 009271ce  5e                   pop esi
// 009271cf  64890d00000000       mov dword ptr fs:[0], ecx
// 009271d6  83c410               add esp, 0x10
// 009271d9  c20400               ret 4
// library openrbx-client/App\v8xml\XmlElement.cpp (function ??0ContentId@RBX@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlElement.cpp
