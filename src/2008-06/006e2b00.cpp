// from server: 100% by auto
// roc 2008-06 006e2b00  unit: CXTPPopupBar  size: 259 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e2b00
//
// 006e2b00  53                   push ebx
// 006e2b01  55                   push ebp
// 006e2b02  56                   push esi
// 006e2b03  8b742410             mov esi, dword ptr [esp + 0x10]
// 006e2b07  57                   push edi
// 006e2b08  56                   push esi
// 006e2b09  8bf9                 mov edi, ecx
// 006e2b0b  e840faffff           call 0x6e2550
// 006e2b10  6a00                 push 0
// 006e2b12  8d87b0010000         lea eax, [edi + 0x1b0]
// 006e2b18  50                   push eax
// 006e2b19  68d0668500           push 0x8566d0
// 006e2b1e  56                   push esi
// 006e2b1f  e87ca80100           call 0x6fd3a0
// 006e2b24  6816b78000           push 0x80b716
// 006e2b29  8d8ff0010000         lea ecx, [edi + 0x1f0]
// 006e2b2f  51                   push ecx
// 006e2b30  68c0668500           push 0x8566c0
// 006e2b35  56                   push esi
// 006e2b36  e8c5a80100           call 0x6fd400
// 006e2b3b  6a00                 push 0
// 006e2b3d  8d97f4010000         lea edx, [edi + 0x1f4]
// 006e2b43  52                   push edx
// 006e2b44  68b4668500           push 0x8566b4
// 006e2b49  56                   push esi
// 006e2b4a  e8c1a70100           call 0x6fd310
// 006e2b4f  6a00                 push 0
// 006e2b51  8d87f8010000         lea eax, [edi + 0x1f8]
// 006e2b57  50                   push eax
// 006e2b58  68a4668500           push 0x8566a4
// 006e2b5d  56                   push esi
// 006e2b5e  e8ada70100           call 0x6fd310
// 006e2b63  83c440               add esp, 0x40
// 006e2b66  837e2c03             cmp dword ptr [esi + 0x2c], 3
// 006e2b6a  7647                 jbe 0x6e2bb3
// 006e2b6c  83ec10               sub esp, 0x10
// 006e2b6f  8bc4                 mov eax, esp
// 006e2b71  b902000000           mov ecx, 2
// 006e2b76  8908                 mov dword ptr [eax], ecx
// 006e2b78  8bd9                 mov ebx, ecx
// 006e2b7a  8d8f00020000         lea ecx, [edi + 0x200]
// 006e2b80  51                   push ecx
// 006e2b81  ba04000000           mov edx, 4
// 006e2b86  895004               mov dword ptr [eax + 4], edx
// 006e2b89  8bea                 mov ebp, edx
// 006e2b8b  689c668500           push 0x85669c
// 006e2b90  895808               mov dword ptr [eax + 8], ebx
// 006e2b93  56                   push esi
// 006e2b94  89680c               mov dword ptr [eax + 0xc], ebp
// 006e2b97  e824a90100           call 0x6fd4c0
// 006e2b9c  6a01                 push 1
// 006e2b9e  8d97fc010000         lea edx, [edi + 0x1fc]
// 006e2ba4  52                   push edx
// 006e2ba5  6890668500           push 0x856690
// 006e2baa  56                   push esi
// 006e2bab  e8f0a70100           call 0x6fd3a0
// 006e2bb0  83c42c               add esp, 0x2c
// 006e2bb3  837e2c08             cmp dword ptr [esi + 0x2c], 8
// 006e2bb7  7617                 jbe 0x6e2bd0
// 006e2bb9  6a00                 push 0
// 006e2bbb  8d8710020000         lea eax, [edi + 0x210]
// 006e2bc1  50                   push eax
// 006e2bc2  6880668500           push 0x856680
// 006e2bc7  56                   push esi
// 006e2bc8  e8d3a70100           call 0x6fd3a0
// 006e2bcd  83c410               add esp, 0x10
// 006e2bd0  837e2c14             cmp dword ptr [esi + 0x2c], 0x14
// 006e2bd4  7309                 jae 0x6e2bdf
// 006e2bd6  6a01                 push 1
// 006e2bd8  8bcf                 mov ecx, edi
// 006e2bda  e8e120fdff           call 0x6b4cc0
// 006e2bdf  837e2c12             cmp dword ptr [esi + 0x2c], 0x12
// 006e2be3  7617                 jbe 0x6e2bfc
// 006e2be5  6a00                 push 0
// 006e2be7  81c714020000         add edi, 0x214
// 006e2bed  57                   push edi
// 006e2bee  6874668500           push 0x856674
// 006e2bf3  56                   push esi
// 006e2bf4  e8a7a70100           call 0x6fd3a0
// 006e2bf9  83c410               add esp, 0x10
// 006e2bfc  5f                   pop edi
// 006e2bfd  5e                   pop esi
// 006e2bfe  5d                   pop ebp
// 006e2bff  5b                   pop ebx
// 006e2c00  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPDockState.cpp (function ?DoPropExchange@CXTPPopupBar@@MAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockState.cpp
