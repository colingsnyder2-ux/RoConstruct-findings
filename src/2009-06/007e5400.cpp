// roc 2009-06 007e5400  unit: CXTPDockingPaneContext  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007e5400
//
// 007e5400  56                   push esi
// 007e5401  8bf1                 mov esi, ecx
// 007e5403  e818f7f6ff           call 0x754b20
// 007e5408  6a00                 push 0
// 007e540a  8bc8                 mov ecx, eax
// 007e540c  e84ff0f6ff           call 0x754460
// 007e5411  85c0                 test eax, eax
// 007e5413  7404                 je 0x7e5419
// 007e5415  33c0                 xor eax, eax
// 007e5417  5e                   pop esi
// 007e5418  c3                   ret 
// 007e5419  33c0                 xor eax, eax
// 007e541b  3906                 cmp dword ptr [esi], eax
// 007e541d  5e                   pop esi
// 007e541e  0f95c0               setne al
// 007e5421  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPShadowsManager.cpp (function ?AlphaShadow@CXTPShadowsManager@@QAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShadowsManager.cpp
