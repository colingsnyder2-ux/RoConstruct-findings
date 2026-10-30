// roc 2009-06 00819870  unit: CXTButtonThemeOffice2003  size: 224 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00819870
//
// 00819870  56                   push esi
// 00819871  57                   push edi
// 00819872  8bf1                 mov esi, ecx
// 00819874  e847fdffff           call 0x8195c0
// 00819879  e8a2b2f3ff           call 0x754b20
// 0081987e  8bc8                 mov ecx, eax
// 00819880  e84bb0f3ff           call 0x7548d0
// 00819885  8bf8                 mov edi, eax
// 00819887  e894b2f3ff           call 0x754b20
// 0081988c  6a0f                 push 0xf
// 0081988e  8bc8                 mov ecx, eax
// 00819890  e80baaf3ff           call 0x7542a0
// 00819895  33c9                 xor ecx, ecx
// 00819897  894624               mov dword ptr [esi + 0x24], eax
// 0081989a  3bf9                 cmp edi, ecx
// 0081989c  7421                 je 0x8198bf
// 0081989e  c7869c000000ffeec200 mov dword ptr [esi + 0x9c], 0xc2eeff
// 008198a8  c78690000000fe803e00 mov dword ptr [esi + 0x90], 0x3e80fe
// 008198b2  c786c0000000ffc06f00 mov dword ptr [esi + 0xc0], 0x6fc0ff
// 008198bc  894e30               mov dword ptr [esi + 0x30], ecx
// 008198bf  8d47ff               lea eax, [edi - 1]
// 008198c2  898eb4000000         mov dword ptr [esi + 0xb4], ecx
// 008198c8  898ea8000000         mov dword ptr [esi + 0xa8], ecx
// 008198ce  83f804               cmp eax, 4
// 008198d1  774a                 ja 0x81991d
// 008198d3  ff24853c998100       jmp dword ptr [eax*4 + 0x81993c]
// 008198da  c74624a9c7f000       mov dword ptr [esi + 0x24], 0xf0c7a9
// 008198e1  c746547f9db900       mov dword ptr [esi + 0x54], 0xb99d7f
// 008198e8  c7464800008000       mov dword ptr [esi + 0x48], 0x800000
// 008198ef  eb2c                 jmp 0x81991d
// 008198f1  c74624c5d49f00       mov dword ptr [esi + 0x24], 0x9fd4c5
// 008198f8  c74654a4b97f00       mov dword ptr [esi + 0x54], 0x7fb9a4
// 008198ff  c746483f5d3800       mov dword ptr [esi + 0x48], 0x385d3f
// 00819906  eb15                 jmp 0x81991d
// 00819908  c74624c0c0d300       mov dword ptr [esi + 0x24], 0xd3c0c0
// 0081990f  c74654a5acb200       mov dword ptr [esi + 0x54], 0xb2aca5
// 00819916  c746484b4b0b00       mov dword ptr [esi + 0x48], 0xb4b4b
// 0081991d  398e80000000         cmp dword ptr [esi + 0x80], ecx
// 00819923  7511                 jne 0x819936
// 00819925  e8f6b1f3ff           call 0x754b20
// 0081992a  6a0f                 push 0xf
// 0081992c  8bc8                 mov ecx, eax
// 0081992e  e86da9f3ff           call 0x7542a0
// 00819933  894624               mov dword ptr [esi + 0x24], eax
// 00819936  5f                   pop edi
// 00819937  5e                   pop esi
// 00819938  c3                   ret 
// 00819939  8d4900               lea ecx, [ecx]
// 0081993c  da988100f198         ficomp dword ptr [eax - 0x670eff7f]
// 00819942  810008998100         add dword ptr [eax], 0x819908
// 00819948  da988100da98         ficomp dword ptr [eax - 0x6725ff7f]
// copied from an identical function in another client (function ?RefreshMetrics@CXTButtonThemeOffice2003@@UAEXXZ)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/Controls/XTButtonTheme.cpp