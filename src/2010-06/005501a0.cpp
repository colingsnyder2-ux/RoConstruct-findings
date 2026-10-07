// roc 2010-06 005501a0  unit: G3D::Log  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005501a0
//
// 005501a0  8b5134               mov edx, dword ptr [ecx + 0x34]
// 005501a3  8b442404             mov eax, dword ptr [esp + 4]
// 005501a7  2bc2                 sub eax, edx
// 005501a9  894144               mov dword ptr [ecx + 0x44], eax
// 005501ac  7805                 js 0x5501b3
// 005501ae  3b413c               cmp eax, dword ptr [ecx + 0x3c]
// 005501b1  7e0a                 jle 0x5501bd
// 005501b3  6a00                 push 0
// 005501b5  03c2                 add eax, edx
// 005501b7  50                   push eax
// 005501b8  e893860000           call 0x558850
// 005501bd  c20400               ret 4
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?setPosition@BinaryInput@G3D@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
