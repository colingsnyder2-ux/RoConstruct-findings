// from server: 100% by auto
// roc 2007-08 00502a40  unit: G3D::Log  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00502a40
//
// 00502a40  8b442404             mov eax, dword ptr [esp + 4]
// 00502a44  014144               add dword ptr [ecx + 0x44], eax
// 00502a47  8b4144               mov eax, dword ptr [ecx + 0x44]
// 00502a4a  7805                 js 0x502a51
// 00502a4c  3b413c               cmp eax, dword ptr [ecx + 0x3c]
// 00502a4f  7e0d                 jle 0x502a5e
// 00502a51  8b5134               mov edx, dword ptr [ecx + 0x34]
// 00502a54  6a00                 push 0
// 00502a56  03d0                 add edx, eax
// 00502a58  52                   push edx
// 00502a59  e862920000           call 0x50bcc0
// 00502a5e  c20400               ret 4
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?skip@BinaryInput@G3D@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
