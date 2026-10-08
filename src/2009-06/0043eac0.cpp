// from server: 100% by auto
// roc 2009-06 0043eac0  unit: RBX::MergeBinder  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0043eac0
//
// 0043eac0  8b01                 mov eax, dword ptr [ecx]
// 0043eac2  8b4010               mov eax, dword ptr [eax + 0x10]
// 0043eac5  ffe0                 jmp eax
// library g3d-6.09/G3Dcpp\Color4.cpp (function ?in@?$codecvt@DDH@std@@QBEHAAHPBD1AAPBDPAD3AAPAD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color4.cpp
