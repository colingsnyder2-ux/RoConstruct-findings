// from server: 100% by auto
// roc 2008-06 007a1de0  unit: CXTButtonThemeOffice2003  size: 224 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a1de0
//
// 007a1de0  56                   push esi
// 007a1de1  57                   push edi
// 007a1de2  8bf1                 mov esi, ecx
// 007a1de4  e837fdffff           call 0x7a1b20
// 007a1de9  e852dff3ff           call 0x6dfd40
// 007a1dee  8bc8                 mov ecx, eax
// 007a1df0  e84bddf3ff           call 0x6dfb40
// 007a1df5  8bf8                 mov edi, eax
// 007a1df7  e844dff3ff           call 0x6dfd40
// 007a1dfc  6a0f                 push 0xf
// 007a1dfe  8bc8                 mov ecx, eax
// 007a1e00  e81bd7f3ff           call 0x6df520
// 007a1e05  33c9                 xor ecx, ecx
// 007a1e07  894624               mov dword ptr [esi + 0x24], eax
// 007a1e0a  3bf9                 cmp edi, ecx
// 007a1e0c  7421                 je 0x7a1e2f
// 007a1e0e  c7869c000000ffeec200 mov dword ptr [esi + 0x9c], 0xc2eeff
// 007a1e18  c78690000000fe803e00 mov dword ptr [esi + 0x90], 0x3e80fe
// 007a1e22  c786c0000000ffc06f00 mov dword ptr [esi + 0xc0], 0x6fc0ff
// 007a1e2c  894e30               mov dword ptr [esi + 0x30], ecx
// 007a1e2f  8d47ff               lea eax, [edi - 1]
// 007a1e32  898eb4000000         mov dword ptr [esi + 0xb4], ecx
// 007a1e38  898ea8000000         mov dword ptr [esi + 0xa8], ecx
// 007a1e3e  83f804               cmp eax, 4
// 007a1e41  774a                 ja 0x7a1e8d
// 007a1e43  ff2485ac1e7a00       jmp dword ptr [eax*4 + 0x7a1eac]
// 007a1e4a  c74624a9c7f000       mov dword ptr [esi + 0x24], 0xf0c7a9
// 007a1e51  c746547f9db900       mov dword ptr [esi + 0x54], 0xb99d7f
// 007a1e58  c7464800008000       mov dword ptr [esi + 0x48], 0x800000
// 007a1e5f  eb2c                 jmp 0x7a1e8d
// 007a1e61  c74624c5d49f00       mov dword ptr [esi + 0x24], 0x9fd4c5
// 007a1e68  c74654a4b97f00       mov dword ptr [esi + 0x54], 0x7fb9a4
// 007a1e6f  c746483f5d3800       mov dword ptr [esi + 0x48], 0x385d3f
// 007a1e76  eb15                 jmp 0x7a1e8d
// 007a1e78  c74624c0c0d300       mov dword ptr [esi + 0x24], 0xd3c0c0
// 007a1e7f  c74654a5acb200       mov dword ptr [esi + 0x54], 0xb2aca5
// 007a1e86  c746484b4b0b00       mov dword ptr [esi + 0x48], 0xb4b4b
// 007a1e8d  398e80000000         cmp dword ptr [esi + 0x80], ecx
// 007a1e93  7511                 jne 0x7a1ea6
// 007a1e95  e8a6def3ff           call 0x6dfd40
// 007a1e9a  6a0f                 push 0xf
// 007a1e9c  8bc8                 mov ecx, eax
// 007a1e9e  e87dd6f3ff           call 0x6df520
// 007a1ea3  894624               mov dword ptr [esi + 0x24], eax
// 007a1ea6  5f                   pop edi
// 007a1ea7  5e                   pop esi
// 007a1ea8  c3                   ret 
// 007a1ea9  8d4900               lea ecx, [ecx]
// 007a1eac  4a                   dec edx
// 007a1ead  1e                   push ds
// 007a1eae  7a00                 jp 0x7a1eb0
// 007a1eb0  61                   popal 
// 007a1eb1  1e                   push ds
// 007a1eb2  7a00                 jp 0x7a1eb4
// 007a1eb4  781e                 js 0x7a1ed4
// 007a1eb6  7a00                 jp 0x7a1eb8
// 007a1eb8  4a                   dec edx
// 007a1eb9  1e                   push ds
// 007a1eba  7a00                 jp 0x7a1ebc
// 007a1ebc  4a                   dec edx
// 007a1ebd  1e                   push ds
// 007a1ebe  7a00                 jp 0x7a1ec0
// library xtp-11.2.2/Source\Controls\XTButtonTheme.cpp (function ?RefreshMetrics@CXTButtonThemeOffice2003@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButtonTheme.cpp
