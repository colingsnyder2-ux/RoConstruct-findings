// from server: 100% by auto
// roc 2008-06 00443eb0  unit: RBX::MergeBinder  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00443eb0
//
// 00443eb0  8b01                 mov eax, dword ptr [ecx]
// 00443eb2  8b4010               mov eax, dword ptr [eax + 0x10]
// 00443eb5  ffe0                 jmp eax
// library g3d-6.09/G3Dcpp\Color4.cpp (function ?in@?$codecvt@DDH@std@@QBEHAAHPBD1AAPBDPAD3AAPAD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color4.cpp
