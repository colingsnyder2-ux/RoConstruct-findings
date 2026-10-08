// roc 2008-06 00732a20  unit: CXTPControlComboBoxGalleryPopupBar  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00732a20
//
// 00732a20  8b442404             mov eax, dword ptr [esp + 4]
// 00732a24  50                   push eax
// 00732a25  e856b9ffff           call 0x72e380
// 00732a2a  8bc8                 mov ecx, eax
// 00732a2c  e8aff3ffff           call 0x731de0
// 00732a31  c20400               ret 4
// library rbxgs/v8world\World.cpp (function ?onPrimitiveCanCollideChanged@World@RBX@@QAEXPAVPrimitive@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/World.cpp
