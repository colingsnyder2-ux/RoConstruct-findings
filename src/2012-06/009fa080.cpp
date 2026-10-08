// roc 2012-06 009fa080  unit: CXTPControlGallery  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009fa080
//
// 009fa080  53                   push ebx
// 009fa081  55                   push ebp
// 009fa082  56                   push esi
// 009fa083  57                   push edi
// 009fa084  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 009fa088  57                   push edi
// 009fa089  8bf1                 mov esi, ecx
// 009fa08b  e8b0a7fcff           call 0x9c4840
// 009fa090  6a01                 push 1
// 009fa092  8d8628020000         lea eax, [esi + 0x228]
// 009fa098  50                   push eax
// 009fa099  6884b1c100           push 0xc1b184
// 009fa09e  57                   push edi
// 009fa09f  e80ce3fdff           call 0x9d83b0
// 009fa0a4  6a01                 push 1
// 009fa0a6  8d8e30020000         lea ecx, [esi + 0x230]
// 009fa0ac  51                   push ecx
// 009fa0ad  6878b1c100           push 0xc1b178
// 009fa0b2  57                   push edi
// 009fa0b3  e8f8e2fdff           call 0x9d83b0
// 009fa0b8  6a01                 push 1
// 009fa0ba  8d962c020000         lea edx, [esi + 0x22c]
// 009fa0c0  52                   push edx
// 009fa0c1  6868b1c100           push 0xc1b168
// 009fa0c6  57                   push edi
// 009fa0c7  e8e4e2fdff           call 0x9d83b0
// 009fa0cc  83c420               add esp, 0x20
// 009fa0cf  8bc4                 mov eax, esp
// 009fa0d1  33c9                 xor ecx, ecx
// 009fa0d3  8908                 mov dword ptr [eax], ecx
// 009fa0d5  33d2                 xor edx, edx
// 009fa0d7  895004               mov dword ptr [eax + 4], edx
// 009fa0da  33db                 xor ebx, ebx
// 009fa0dc  895808               mov dword ptr [eax + 8], ebx
// 009fa0df  33ed                 xor ebp, ebp
// 009fa0e1  89680c               mov dword ptr [eax + 0xc], ebp
// 009fa0e4  8d8634020000         lea eax, [esi + 0x234]
// 009fa0ea  50                   push eax
// 009fa0eb  6858b1c100           push 0xc1b158
// 009fa0f0  57                   push edi
// 009fa0f1  e8dae3fdff           call 0x9d84d0
// 009fa0f6  83c41c               add esp, 0x1c
// 009fa0f9  837f2c17             cmp dword ptr [edi + 0x2c], 0x17
// 009fa0fd  7616                 jbe 0x9fa115
// 009fa0ff  55                   push ebp
// 009fa100  81c648020000         add esi, 0x248
// 009fa106  56                   push esi
// 009fa107  684cb1c100           push 0xc1b14c
// 009fa10c  57                   push edi
// 009fa10d  e80ee2fdff           call 0x9d8320
// 009fa112  83c410               add esp, 0x10
// 009fa115  5f                   pop edi
// 009fa116  5e                   pop esi
// 009fa117  5d                   pop ebp
// 009fa118  5b                   pop ebx
// 009fa119  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?DoPropExchange@CXTPControlGallery@@MAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
