// roc 2009-06 007a10f0  unit: CXTPControlComboBoxGalleryPopupBar  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007a10f0
//
// 007a10f0  8b442404             mov eax, dword ptr [esp + 4]
// 007a10f4  50                   push eax
// 007a10f5  e806b9ffff           call 0x79ca00
// 007a10fa  8bc8                 mov ecx, eax
// 007a10fc  e8aff3ffff           call 0x7a04b0
// 007a1101  c20400               ret 4
// library rbxgs/v8world\World.cpp (function ?onPrimitiveCanCollideChanged@World@RBX@@QAEXPAVPrimitive@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/World.cpp
