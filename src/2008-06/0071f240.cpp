// roc 2008-06 0071f240  unit: CXTPResourceManager  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0071f240
//
// 0071f240  56                   push esi
// 0071f241  8bf1                 mov esi, ecx
// 0071f243  8b4608               mov eax, dword ptr [esi + 8]
// 0071f246  85c0                 test eax, eax
// 0071f248  740e                 je 0x71f258
// 0071f24a  50                   push eax
// 0071f24b  ff15a0218000         call dword ptr [0x8021a0]
// 0071f251  c7460800000000       mov dword ptr [esi + 8], 0
// 0071f258  5e                   pop esi
// 0071f259  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPResourceManager.cpp (function ?Close@CXTPResourceManager@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPResourceManager.cpp
