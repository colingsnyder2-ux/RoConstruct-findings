// from server: 100% by auto
// roc 2007-08 006b2bf0  unit: CXTPResourceManager  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006b2bf0
//
// 006b2bf0  56                   push esi
// 006b2bf1  8bf1                 mov esi, ecx
// 006b2bf3  8b4608               mov eax, dword ptr [esi + 8]
// 006b2bf6  85c0                 test eax, eax
// 006b2bf8  740e                 je 0x6b2c08
// 006b2bfa  50                   push eax
// 006b2bfb  ff15dcd27700         call dword ptr [0x77d2dc]
// 006b2c01  c7460800000000       mov dword ptr [esi + 8], 0
// 006b2c08  5e                   pop esi
// 006b2c09  c3                   ret 
// library xtp-11.2.2-vc8/Source\Common\XTPResourceManager.cpp (function ?Close@CXTPResourceManager@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPResourceManager.cpp
