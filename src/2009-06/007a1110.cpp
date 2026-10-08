// roc 2009-06 007a1110  unit: CXTPControlComboBoxGalleryPopupBar  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007a1110
//
// 007a1110  8b442404             mov eax, dword ptr [esp + 4]
// 007a1114  50                   push eax
// 007a1115  e8e6b8ffff           call 0x79ca00
// 007a111a  8bc8                 mov ecx, eax
// 007a111c  e82ff2ffff           call 0x7a0350
// 007a1121  c20400               ret 4
// library rbxgs/v8world\World.cpp (function ?onPrimitiveCanCollideChanged@World@RBX@@QAEXPAVPrimitive@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/World.cpp
