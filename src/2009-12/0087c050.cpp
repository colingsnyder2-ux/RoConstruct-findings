// roc 2009-12 0087c050  unit: CXTPControlComboBoxGalleryPopupBar  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0087c050
//
// 0087c050  8b442404             mov eax, dword ptr [esp + 4]
// 0087c054  50                   push eax
// 0087c055  e836b9ffff           call 0x877990
// 0087c05a  8bc8                 mov ecx, eax
// 0087c05c  e82ff2ffff           call 0x87b290
// 0087c061  c20400               ret 4
// library rbxgs/v8world\World.cpp (function ?onPrimitiveCanCollideChanged@World@RBX@@QAEXPAVPrimitive@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/World.cpp
