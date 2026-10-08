// from server: 100% by auto
// roc 2008-06 005d7fe0  unit: RBX::Humanoid  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d7fe0
//
// 005d7fe0  8b01                 mov eax, dword ptr [ecx]
// 005d7fe2  8b401c               mov eax, dword ptr [eax + 0x1c]
// 005d7fe5  ffe0                 jmp eax
// library g3d-6.09/G3Dcpp\Color4.cpp (function ?length@?$codecvt@DDH@std@@QBEHABHPBD1I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color4.cpp
