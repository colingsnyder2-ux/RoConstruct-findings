// from server: 100% by auto
// roc 2010-06 00550240  unit: G3D::Log  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00550240
//
// 00550240  8b442404             mov eax, dword ptr [esp + 4]
// 00550244  014144               add dword ptr [ecx + 0x44], eax
// 00550247  8b4144               mov eax, dword ptr [ecx + 0x44]
// 0055024a  7805                 js 0x550251
// 0055024c  3b413c               cmp eax, dword ptr [ecx + 0x3c]
// 0055024f  7e0d                 jle 0x55025e
// 00550251  8b5134               mov edx, dword ptr [ecx + 0x34]
// 00550254  6a00                 push 0
// 00550256  03d0                 add edx, eax
// 00550258  52                   push edx
// 00550259  e8f2850000           call 0x558850
// 0055025e  c20400               ret 4
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?skip@BinaryInput@G3D@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
