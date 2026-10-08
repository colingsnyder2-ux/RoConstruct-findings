// from server: 100% by auto
// roc 2009-06 0056d230  unit: G3D::Log  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0056d230
//
// 0056d230  8b442404             mov eax, dword ptr [esp + 4]
// 0056d234  014144               add dword ptr [ecx + 0x44], eax
// 0056d237  8b4144               mov eax, dword ptr [ecx + 0x44]
// 0056d23a  7805                 js 0x56d241
// 0056d23c  3b413c               cmp eax, dword ptr [ecx + 0x3c]
// 0056d23f  7e0d                 jle 0x56d24e
// 0056d241  8b5134               mov edx, dword ptr [ecx + 0x34]
// 0056d244  6a00                 push 0
// 0056d246  03d0                 add edx, eax
// 0056d248  52                   push edx
// 0056d249  e802750000           call 0x574750
// 0056d24e  c20400               ret 4
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?skip@BinaryInput@G3D@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
