// from server: 100% by auto
// roc 2011-06 0087f7d0  unit: CXTPResourceManager  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0087f7d0
//
// 0087f7d0  56                   push esi
// 0087f7d1  8bf1                 mov esi, ecx
// 0087f7d3  8b4608               mov eax, dword ptr [esi + 8]
// 0087f7d6  85c0                 test eax, eax
// 0087f7d8  740e                 je 0x87f7e8
// 0087f7da  50                   push eax
// 0087f7db  ff15b803a400         call dword ptr [0xa403b8]
// 0087f7e1  c7460800000000       mov dword ptr [esi + 8], 0
// 0087f7e8  5e                   pop esi
// 0087f7e9  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPResourceManager.cpp (function ?Close@CXTPResourceManager@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPResourceManager.cpp
