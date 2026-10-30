// roc 2012-06 00a79f70  unit: CXTButtonThemeOffice2003  size: 224 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a79f70
//
// 00a79f70  56                   push esi
// 00a79f71  57                   push edi
// 00a79f72  8bf1                 mov esi, ecx
// 00a79f74  e837fdffff           call 0xa79cb0
// 00a79f79  e8e238f4ff           call 0x9bd860
// 00a79f7e  8bc8                 mov ecx, eax
// 00a79f80  e88b36f4ff           call 0x9bd610
// 00a79f85  8bf8                 mov edi, eax
// 00a79f87  e8d438f4ff           call 0x9bd860
// 00a79f8c  6a0f                 push 0xf
// 00a79f8e  8bc8                 mov ecx, eax
// 00a79f90  e84b30f4ff           call 0x9bcfe0
// 00a79f95  33c9                 xor ecx, ecx
// 00a79f97  894624               mov dword ptr [esi + 0x24], eax
// 00a79f9a  3bf9                 cmp edi, ecx
// 00a79f9c  7421                 je 0xa79fbf
// 00a79f9e  c7869c000000ffeec200 mov dword ptr [esi + 0x9c], 0xc2eeff
// 00a79fa8  c78690000000fe803e00 mov dword ptr [esi + 0x90], 0x3e80fe
// 00a79fb2  c786c0000000ffc06f00 mov dword ptr [esi + 0xc0], 0x6fc0ff
// 00a79fbc  894e30               mov dword ptr [esi + 0x30], ecx
// 00a79fbf  8d47ff               lea eax, [edi - 1]
// 00a79fc2  898eb4000000         mov dword ptr [esi + 0xb4], ecx
// 00a79fc8  898ea8000000         mov dword ptr [esi + 0xa8], ecx
// 00a79fce  83f804               cmp eax, 4
// 00a79fd1  774a                 ja 0xa7a01d
// 00a79fd3  ff24853ca0a700       jmp dword ptr [eax*4 + 0xa7a03c]
// 00a79fda  c74624a9c7f000       mov dword ptr [esi + 0x24], 0xf0c7a9
// 00a79fe1  c746547f9db900       mov dword ptr [esi + 0x54], 0xb99d7f
// 00a79fe8  c7464800008000       mov dword ptr [esi + 0x48], 0x800000
// 00a79fef  eb2c                 jmp 0xa7a01d
// 00a79ff1  c74624c5d49f00       mov dword ptr [esi + 0x24], 0x9fd4c5
// 00a79ff8  c74654a4b97f00       mov dword ptr [esi + 0x54], 0x7fb9a4
// 00a79fff  c746483f5d3800       mov dword ptr [esi + 0x48], 0x385d3f
// 00a7a006  eb15                 jmp 0xa7a01d
// 00a7a008  c74624c0c0d300       mov dword ptr [esi + 0x24], 0xd3c0c0
// 00a7a00f  c74654a5acb200       mov dword ptr [esi + 0x54], 0xb2aca5
// 00a7a016  c746484b4b0b00       mov dword ptr [esi + 0x48], 0xb4b4b
// 00a7a01d  398e80000000         cmp dword ptr [esi + 0x80], ecx
// 00a7a023  7511                 jne 0xa7a036
// 00a7a025  e83638f4ff           call 0x9bd860
// 00a7a02a  6a0f                 push 0xf
// 00a7a02c  8bc8                 mov ecx, eax
// 00a7a02e  e8ad2ff4ff           call 0x9bcfe0
// 00a7a033  894624               mov dword ptr [esi + 0x24], eax
// 00a7a036  5f                   pop edi
// 00a7a037  5e                   pop esi
// 00a7a038  c3                   ret 
// 00a7a039  8d4900               lea ecx, [ecx]
// 00a7a03c  da9fa700f19f         ficomp dword ptr [edi - 0x600eff59]
// 00a7a042  a7                   cmpsd dword ptr [esi], dword ptr es:[edi]
// 00a7a043  0008                 add byte ptr [eax], cl
// 00a7a045  a0a700da9f           mov al, byte ptr [0x9fda00a7]
// 00a7a04a  a7                   cmpsd dword ptr [esi], dword ptr es:[edi]
// 00a7a04b  00da                 add dl, bl
// 00a7a04d  9f                   lahf 
// 00a7a04e  a7                   cmpsd dword ptr [esi], dword ptr es:[edi]
// copied from an identical function in another client (function ?RefreshMetrics@CXTButtonThemeOffice2003@@UAEXXZ)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/Controls/XTButtonTheme.cpp