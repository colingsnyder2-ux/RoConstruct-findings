// roc 2009-12 0087c030  unit: CXTPControlComboBoxGalleryPopupBar  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0087c030
//
// 0087c030  8b442404             mov eax, dword ptr [esp + 4]
// 0087c034  50                   push eax
// 0087c035  e856b9ffff           call 0x877990
// 0087c03a  8bc8                 mov ecx, eax
// 0087c03c  e8aff3ffff           call 0x87b3f0
// 0087c041  c20400               ret 4
// library rbxgs/v8world\World.cpp (function ?onPrimitiveCanCollideChanged@World@RBX@@QAEXPAVPrimitive@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/World.cpp
