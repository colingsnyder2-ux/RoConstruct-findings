// roc 2008-06 0050ab00  unit: G3D::Log  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0050ab00
//
// 0050ab00  8b442404             mov eax, dword ptr [esp + 4]
// 0050ab04  014144               add dword ptr [ecx + 0x44], eax
// 0050ab07  8b4144               mov eax, dword ptr [ecx + 0x44]
// 0050ab0a  7805                 js 0x50ab11
// 0050ab0c  3b413c               cmp eax, dword ptr [ecx + 0x3c]
// 0050ab0f  7e0d                 jle 0x50ab1e
// 0050ab11  8b5134               mov edx, dword ptr [ecx + 0x34]
// 0050ab14  6a00                 push 0
// 0050ab16  03d0                 add edx, eax
// 0050ab18  52                   push edx
// 0050ab19  e8b2ac0000           call 0x5157d0
// 0050ab1e  c20400               ret 4
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?skip@BinaryInput@G3D@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
