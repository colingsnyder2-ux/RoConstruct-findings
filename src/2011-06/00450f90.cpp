// from server: 100% by auto
// roc 2011-06 00450f90  unit: RBX::MergeBinder  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00450f90
//
// 00450f90  8b01                 mov eax, dword ptr [ecx]
// 00450f92  8b4014               mov eax, dword ptr [eax + 0x14]
// 00450f95  ffe0                 jmp eax
// library g3d-6.09/G3Dcpp\Color4.cpp (function ?out@?$codecvt@DDH@std@@QBEHAAHPBD1AAPBDPAD3AAPAD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color4.cpp
