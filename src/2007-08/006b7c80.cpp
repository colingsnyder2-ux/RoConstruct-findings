// roc 2007-08 006b7c80  unit: CXTPControlComboBoxGalleryPopupBar  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006b7c80
//
// 006b7c80  8b442404             mov eax, dword ptr [esp + 4]
// 006b7c84  50                   push eax
// 006b7c85  e8d6bcffff           call 0x6b3960
// 006b7c8a  8bc8                 mov ecx, eax
// 006b7c8c  e87ff2ffff           call 0x6b6f10
// 006b7c91  c20400               ret 4
// library rbxgs/v8world\World.cpp (function ?onPrimitiveCanCollideChanged@World@RBX@@QAEXPAVPrimitive@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/World.cpp
