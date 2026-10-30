// roc 2010-06 008249d0  unit: CXTPControlGallery  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008249d0
//
// 008249d0  53                   push ebx
// 008249d1  55                   push ebp
// 008249d2  56                   push esi
// 008249d3  57                   push edi
// 008249d4  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 008249d8  57                   push edi
// 008249d9  8bf1                 mov esi, ecx
// 008249db  e8f060fcff           call 0x7eaad0
// 008249e0  6a01                 push 1
// 008249e2  8d8628020000         lea eax, [esi + 0x228]
// 008249e8  50                   push eax
// 008249e9  68ac50a600           push 0xa650ac
// 008249ee  57                   push edi
// 008249ef  e8dc00feff           call 0x804ad0
// 008249f4  6a01                 push 1
// 008249f6  8d8e30020000         lea ecx, [esi + 0x230]
// 008249fc  51                   push ecx
// 008249fd  68a050a600           push 0xa650a0
// 00824a02  57                   push edi
// 00824a03  e8c800feff           call 0x804ad0
// 00824a08  6a01                 push 1
// 00824a0a  8d962c020000         lea edx, [esi + 0x22c]
// 00824a10  52                   push edx
// 00824a11  689050a600           push 0xa65090
// 00824a16  57                   push edi
// 00824a17  e8b400feff           call 0x804ad0
// 00824a1c  83c420               add esp, 0x20
// 00824a1f  8bc4                 mov eax, esp
// 00824a21  33c9                 xor ecx, ecx
// 00824a23  8908                 mov dword ptr [eax], ecx
// 00824a25  33d2                 xor edx, edx
// 00824a27  895004               mov dword ptr [eax + 4], edx
// 00824a2a  33db                 xor ebx, ebx
// 00824a2c  895808               mov dword ptr [eax + 8], ebx
// 00824a2f  33ed                 xor ebp, ebp
// 00824a31  89680c               mov dword ptr [eax + 0xc], ebp
// 00824a34  8d8634020000         lea eax, [esi + 0x234]
// 00824a3a  50                   push eax
// 00824a3b  688050a600           push 0xa65080
// 00824a40  57                   push edi
// 00824a41  e8aa01feff           call 0x804bf0
// 00824a46  83c41c               add esp, 0x1c
// 00824a49  837f2c17             cmp dword ptr [edi + 0x2c], 0x17
// 00824a4d  7616                 jbe 0x824a65
// 00824a4f  55                   push ebp
// 00824a50  81c648020000         add esi, 0x248
// 00824a56  56                   push esi
// 00824a57  687468a100           push 0xa16874
// 00824a5c  57                   push edi
// 00824a5d  e8defffdff           call 0x804a40
// 00824a62  83c410               add esp, 0x10
// 00824a65  5f                   pop edi
// 00824a66  5e                   pop esi
// 00824a67  5d                   pop ebp
// 00824a68  5b                   pop ebx
// 00824a69  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?DoPropExchange@CXTPControlGallery@@MAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
