// roc 2007-08 005029a0  unit: G3D::Log  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005029a0
//
// 005029a0  8b5134               mov edx, dword ptr [ecx + 0x34]
// 005029a3  8b442404             mov eax, dword ptr [esp + 4]
// 005029a7  2bc2                 sub eax, edx
// 005029a9  894144               mov dword ptr [ecx + 0x44], eax
// 005029ac  7805                 js 0x5029b3
// 005029ae  3b413c               cmp eax, dword ptr [ecx + 0x3c]
// 005029b1  7e0a                 jle 0x5029bd
// 005029b3  6a00                 push 0
// 005029b5  03c2                 add eax, edx
// 005029b7  50                   push eax
// 005029b8  e803930000           call 0x50bcc0
// 005029bd  c20400               ret 4
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?setPosition@BinaryInput@G3D@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
