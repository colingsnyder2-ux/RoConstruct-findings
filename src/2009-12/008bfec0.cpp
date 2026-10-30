// roc 2009-12 008bfec0  unit: CXTPDockingPaneContext  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008bfec0
//
// 008bfec0  56                   push esi
// 008bfec1  8bf1                 mov esi, ecx
// 008bfec3  e808fbf6ff           call 0x82f9d0
// 008bfec8  6a00                 push 0
// 008bfeca  8bc8                 mov ecx, eax
// 008bfecc  e8eff3f6ff           call 0x82f2c0
// 008bfed1  85c0                 test eax, eax
// 008bfed3  7404                 je 0x8bfed9
// 008bfed5  33c0                 xor eax, eax
// 008bfed7  5e                   pop esi
// 008bfed8  c3                   ret 
// 008bfed9  33c0                 xor eax, eax
// 008bfedb  3906                 cmp dword ptr [esi], eax
// 008bfedd  5e                   pop esi
// 008bfede  0f95c0               setne al
// 008bfee1  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPShadowsManager.cpp (function ?AlphaShadow@CXTPShadowsManager@@QAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShadowsManager.cpp
