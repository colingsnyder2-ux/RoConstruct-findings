// from server: 100% by auto
// roc 2009-06 0056d1e0  unit: G3D::Log  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0056d1e0
//
// 0056d1e0  8b5134               mov edx, dword ptr [ecx + 0x34]
// 0056d1e3  8b442404             mov eax, dword ptr [esp + 4]
// 0056d1e7  2bc2                 sub eax, edx
// 0056d1e9  894144               mov dword ptr [ecx + 0x44], eax
// 0056d1ec  7805                 js 0x56d1f3
// 0056d1ee  3b413c               cmp eax, dword ptr [ecx + 0x3c]
// 0056d1f1  7e0a                 jle 0x56d1fd
// 0056d1f3  6a00                 push 0
// 0056d1f5  03c2                 add eax, edx
// 0056d1f7  50                   push eax
// 0056d1f8  e853750000           call 0x574750
// 0056d1fd  c20400               ret 4
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?setPosition@BinaryInput@G3D@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
