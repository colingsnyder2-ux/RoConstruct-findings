// from server: 100% by auto
// roc 2008-06 0076ccf0  unit: CXTPDockingPaneContext  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0076ccf0
//
// 0076ccf0  56                   push esi
// 0076ccf1  8bf1                 mov esi, ecx
// 0076ccf3  e84830f7ff           call 0x6dfd40
// 0076ccf8  6a00                 push 0
// 0076ccfa  8bc8                 mov ecx, eax
// 0076ccfc  e8df29f7ff           call 0x6df6e0
// 0076cd01  85c0                 test eax, eax
// 0076cd03  7404                 je 0x76cd09
// 0076cd05  33c0                 xor eax, eax
// 0076cd07  5e                   pop esi
// 0076cd08  c3                   ret 
// 0076cd09  33c0                 xor eax, eax
// 0076cd0b  3906                 cmp dword ptr [esi], eax
// 0076cd0d  5e                   pop esi
// 0076cd0e  0f95c0               setne al
// 0076cd11  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPShadowsManager.cpp (function ?AlphaShadow@CXTPShadowsManager@@QAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShadowsManager.cpp
