// roc 2012-06 00a49940  unit: CXTPDockingPaneContext  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a49940
//
// 00a49940  56                   push esi
// 00a49941  8bf1                 mov esi, ecx
// 00a49943  e8183ff7ff           call 0x9bd860
// 00a49948  6a00                 push 0
// 00a4994a  8bc8                 mov ecx, eax
// 00a4994c  e84f38f7ff           call 0x9bd1a0
// 00a49951  85c0                 test eax, eax
// 00a49953  7404                 je 0xa49959
// 00a49955  33c0                 xor eax, eax
// 00a49957  5e                   pop esi
// 00a49958  c3                   ret 
// 00a49959  33c0                 xor eax, eax
// 00a4995b  3906                 cmp dword ptr [esi], eax
// 00a4995d  5e                   pop esi
// 00a4995e  0f95c0               setne al
// 00a49961  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPShadowsManager.cpp (function ?AlphaShadow@CXTPShadowsManager@@QAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShadowsManager.cpp
