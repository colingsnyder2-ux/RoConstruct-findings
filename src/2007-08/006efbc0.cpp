// roc 2007-08 006efbc0  unit: CXTPDockingPaneContext  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006efbc0
//
// 006efbc0  56                   push esi
// 006efbc1  8bf1                 mov esi, ecx
// 006efbc3  e8a893f7ff           call 0x668f70
// 006efbc8  6a00                 push 0
// 006efbca  8bc8                 mov ecx, eax
// 006efbcc  e85f8df7ff           call 0x668930
// 006efbd1  85c0                 test eax, eax
// 006efbd3  7404                 je 0x6efbd9
// 006efbd5  33c0                 xor eax, eax
// 006efbd7  5e                   pop esi
// 006efbd8  c3                   ret 
// 006efbd9  33c0                 xor eax, eax
// 006efbdb  3906                 cmp dword ptr [esi], eax
// 006efbdd  5e                   pop esi
// 006efbde  0f95c0               setne al
// 006efbe1  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPShadowsManager.cpp (function ?AlphaShadow@CXTPShadowsManager@@QAEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPShadowsManager.cpp
