// roc 2011-06 008d1640  unit: CXTPDockingPaneContext  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d1640
//
// 008d1640  56                   push esi
// 008d1641  8bf1                 mov esi, ecx
// 008d1643  e8983df7ff           call 0x8453e0
// 008d1648  6a00                 push 0
// 008d164a  8bc8                 mov ecx, eax
// 008d164c  e81f37f7ff           call 0x844d70
// 008d1651  85c0                 test eax, eax
// 008d1653  7404                 je 0x8d1659
// 008d1655  33c0                 xor eax, eax
// 008d1657  5e                   pop esi
// 008d1658  c3                   ret 
// 008d1659  33c0                 xor eax, eax
// 008d165b  3906                 cmp dword ptr [esi], eax
// 008d165d  5e                   pop esi
// 008d165e  0f95c0               setne al
// 008d1661  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPShadowsManager.cpp (function ?AlphaShadow@CXTPShadowsManager@@QAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShadowsManager.cpp
