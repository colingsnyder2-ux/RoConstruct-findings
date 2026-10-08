// from server: 100% by auto
// roc 2008-06 0050aa60  unit: G3D::Log  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0050aa60
//
// 0050aa60  8b5134               mov edx, dword ptr [ecx + 0x34]
// 0050aa63  8b442404             mov eax, dword ptr [esp + 4]
// 0050aa67  2bc2                 sub eax, edx
// 0050aa69  894144               mov dword ptr [ecx + 0x44], eax
// 0050aa6c  7805                 js 0x50aa73
// 0050aa6e  3b413c               cmp eax, dword ptr [ecx + 0x3c]
// 0050aa71  7e0a                 jle 0x50aa7d
// 0050aa73  6a00                 push 0
// 0050aa75  03c2                 add eax, edx
// 0050aa77  50                   push eax
// 0050aa78  e853ad0000           call 0x5157d0
// 0050aa7d  c20400               ret 4
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?setPosition@BinaryInput@G3D@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
