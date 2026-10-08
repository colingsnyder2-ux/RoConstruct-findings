// roc 2009-12 005ec340  unit: G3D::Log  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005ec340
//
// 005ec340  8b442404             mov eax, dword ptr [esp + 4]
// 005ec344  014144               add dword ptr [ecx + 0x44], eax
// 005ec347  8b4144               mov eax, dword ptr [ecx + 0x44]
// 005ec34a  7805                 js 0x5ec351
// 005ec34c  3b413c               cmp eax, dword ptr [ecx + 0x3c]
// 005ec34f  7e0d                 jle 0x5ec35e
// 005ec351  8b5134               mov edx, dword ptr [ecx + 0x34]
// 005ec354  6a00                 push 0
// 005ec356  03d0                 add edx, eax
// 005ec358  52                   push edx
// 005ec359  e8628e0000           call 0x5f51c0
// 005ec35e  c20400               ret 4
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?skip@BinaryInput@G3D@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
