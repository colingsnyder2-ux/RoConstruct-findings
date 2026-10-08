// roc 2009-12 0088eb70  unit: CXTPShortcutManager::CKeyHelper  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088eb70
//
// 0088eb70  8bc1                 mov eax, ecx
// 0088eb72  33c9                 xor ecx, ecx
// 0088eb74  c7009431a000         mov dword ptr [eax], 0xa03194
// 0088eb7a  894804               mov dword ptr [eax + 4], ecx
// 0088eb7d  894810               mov dword ptr [eax + 0x10], ecx
// 0088eb80  89480c               mov dword ptr [eax + 0xc], ecx
// 0088eb83  894808               mov dword ptr [eax + 8], ecx
// 0088eb86  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\array_b.cpp (function ??0CByteArray@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/array_b.cpp
