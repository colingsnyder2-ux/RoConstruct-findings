// roc 2010-06 00874110  unit: CXTPDockingPaneContext  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00874110
//
// 00874110  56                   push esi
// 00874111  8bf1                 mov esi, ecx
// 00874113  e808faf6ff           call 0x7e3b20
// 00874118  6a00                 push 0
// 0087411a  8bc8                 mov ecx, eax
// 0087411c  e84ff3f6ff           call 0x7e3470
// 00874121  85c0                 test eax, eax
// 00874123  7404                 je 0x874129
// 00874125  33c0                 xor eax, eax
// 00874127  5e                   pop esi
// 00874128  c3                   ret 
// 00874129  33c0                 xor eax, eax
// 0087412b  3906                 cmp dword ptr [esi], eax
// 0087412d  5e                   pop esi
// 0087412e  0f95c0               setne al
// 00874131  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPShadowsManager.cpp (function ?AlphaShadow@CXTPShadowsManager@@QAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShadowsManager.cpp
