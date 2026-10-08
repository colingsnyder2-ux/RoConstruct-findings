// roc 2007-08 006b7c60  unit: CXTPControlComboBoxGalleryPopupBar  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006b7c60
//
// 006b7c60  8b442404             mov eax, dword ptr [esp + 4]
// 006b7c64  50                   push eax
// 006b7c65  e8f6bcffff           call 0x6b3960
// 006b7c6a  8bc8                 mov ecx, eax
// 006b7c6c  e8eff3ffff           call 0x6b7060
// 006b7c71  c20400               ret 4
// library rbxgs/v8world\World.cpp (function ?onPrimitiveCanCollideChanged@World@RBX@@QAEXPAVPrimitive@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/World.cpp
