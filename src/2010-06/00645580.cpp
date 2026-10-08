// roc 2010-06 00645580  unit: RBX::VSpecialShape::?$FactoryProduct  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00645580
//
// 00645580  8b442404             mov eax, dword ptr [esp + 4]
// 00645584  398100010000         cmp dword ptr [ecx + 0x100], eax
// 0064558a  7413                 je 0x64559f
// 0064558c  898100010000         mov dword ptr [ecx + 0x100], eax
// 00645592  c744240458b7c100     mov dword ptr [esp + 4], 0xc1b758
// 0064559a  e9d16edcff           jmp 0x40c470
// 0064559f  c20400               ret 4
// library rbxgs/v8datamodel\Feature.cpp (function ?setFaceId@Feature@RBX@@QAEXW4NormalId@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Feature.cpp
