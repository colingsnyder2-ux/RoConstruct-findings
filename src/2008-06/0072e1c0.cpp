// roc 2008-06 0072e1c0  unit: CXTPControlGallery  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0072e1c0
//
// 0072e1c0  53                   push ebx
// 0072e1c1  55                   push ebp
// 0072e1c2  56                   push esi
// 0072e1c3  57                   push edi
// 0072e1c4  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0072e1c8  57                   push edi
// 0072e1c9  8bf1                 mov esi, ecx
// 0072e1cb  e83050fbff           call 0x6e3200
// 0072e1d0  6a01                 push 1
// 0072e1d2  8d8628020000         lea eax, [esi + 0x228]
// 0072e1d8  50                   push eax
// 0072e1d9  68d4218600           push 0x8621d4
// 0072e1de  57                   push edi
// 0072e1df  e8bcf1fcff           call 0x6fd3a0
// 0072e1e4  6a01                 push 1
// 0072e1e6  8d8e30020000         lea ecx, [esi + 0x230]
// 0072e1ec  51                   push ecx
// 0072e1ed  68c8218600           push 0x8621c8
// 0072e1f2  57                   push edi
// 0072e1f3  e8a8f1fcff           call 0x6fd3a0
// 0072e1f8  6a01                 push 1
// 0072e1fa  8d962c020000         lea edx, [esi + 0x22c]
// 0072e200  52                   push edx
// 0072e201  68b8218600           push 0x8621b8
// 0072e206  57                   push edi
// 0072e207  e894f1fcff           call 0x6fd3a0
// 0072e20c  83c420               add esp, 0x20
// 0072e20f  8bc4                 mov eax, esp
// 0072e211  33c9                 xor ecx, ecx
// 0072e213  8908                 mov dword ptr [eax], ecx
// 0072e215  33d2                 xor edx, edx
// 0072e217  895004               mov dword ptr [eax + 4], edx
// 0072e21a  33db                 xor ebx, ebx
// 0072e21c  895808               mov dword ptr [eax + 8], ebx
// 0072e21f  33ed                 xor ebp, ebp
// 0072e221  89680c               mov dword ptr [eax + 0xc], ebp
// 0072e224  8d8634020000         lea eax, [esi + 0x234]
// 0072e22a  50                   push eax
// 0072e22b  68a8218600           push 0x8621a8
// 0072e230  57                   push edi
// 0072e231  e88af2fcff           call 0x6fd4c0
// 0072e236  83c41c               add esp, 0x1c
// 0072e239  837f2c17             cmp dword ptr [edi + 0x2c], 0x17
// 0072e23d  7616                 jbe 0x72e255
// 0072e23f  55                   push ebp
// 0072e240  81c648020000         add esi, 0x248
// 0072e246  56                   push esi
// 0072e247  6808e58100           push 0x81e508
// 0072e24c  57                   push edi
// 0072e24d  e8bef0fcff           call 0x6fd310
// 0072e252  83c410               add esp, 0x10
// 0072e255  5f                   pop edi
// 0072e256  5e                   pop esi
// 0072e257  5d                   pop ebp
// 0072e258  5b                   pop ebx
// 0072e259  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?DoPropExchange@CXTPControlGallery@@MAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
