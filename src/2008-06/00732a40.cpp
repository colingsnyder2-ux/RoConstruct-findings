// roc 2008-06 00732a40  unit: CXTPControlComboBoxGalleryPopupBar  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00732a40
//
// 00732a40  8b442404             mov eax, dword ptr [esp + 4]
// 00732a44  50                   push eax
// 00732a45  e836b9ffff           call 0x72e380
// 00732a4a  8bc8                 mov ecx, eax
// 00732a4c  e82ff2ffff           call 0x731c80
// 00732a51  c20400               ret 4
// library rbxgs/v8world\World.cpp (function ?onPrimitiveCanCollideChanged@World@RBX@@QAEXPAVPrimitive@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/World.cpp
