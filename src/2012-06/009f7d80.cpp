// roc 2012-06 009f7d80  unit: CXTPResourceManager  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f7d80
//
// 009f7d80  56                   push esi
// 009f7d81  8bf1                 mov esi, ecx
// 009f7d83  8b4608               mov eax, dword ptr [esi + 8]
// 009f7d86  85c0                 test eax, eax
// 009f7d88  740e                 je 0x9f7d98
// 009f7d8a  50                   push eax
// 009f7d8b  ff158c21b200         call dword ptr [0xb2218c]
// 009f7d91  c7460800000000       mov dword ptr [esi + 8], 0
// 009f7d98  5e                   pop esi
// 009f7d99  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPResourceManager.cpp (function ?Close@CXTPResourceManager@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPResourceManager.cpp
