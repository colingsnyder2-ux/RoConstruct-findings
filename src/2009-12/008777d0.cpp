// roc 2009-12 008777d0  unit: CXTPControlGallery  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008777d0
//
// 008777d0  53                   push ebx
// 008777d1  55                   push ebp
// 008777d2  56                   push esi
// 008777d3  57                   push edi
// 008777d4  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 008777d8  57                   push edi
// 008777d9  8bf1                 mov esi, ecx
// 008777db  e8d0f0fbff           call 0x8368b0
// 008777e0  6a01                 push 1
// 008777e2  8d8628020000         lea eax, [esi + 0x228]
// 008777e8  50                   push eax
// 008777e9  68f418a000           push 0xa018f4
// 008777ee  57                   push edi
// 008777ef  e86c92fdff           call 0x850a60
// 008777f4  6a01                 push 1
// 008777f6  8d8e30020000         lea ecx, [esi + 0x230]
// 008777fc  51                   push ecx
// 008777fd  68e818a000           push 0xa018e8
// 00877802  57                   push edi
// 00877803  e85892fdff           call 0x850a60
// 00877808  6a01                 push 1
// 0087780a  8d962c020000         lea edx, [esi + 0x22c]
// 00877810  52                   push edx
// 00877811  68d818a000           push 0xa018d8
// 00877816  57                   push edi
// 00877817  e84492fdff           call 0x850a60
// 0087781c  83c420               add esp, 0x20
// 0087781f  8bc4                 mov eax, esp
// 00877821  33c9                 xor ecx, ecx
// 00877823  8908                 mov dword ptr [eax], ecx
// 00877825  33d2                 xor edx, edx
// 00877827  895004               mov dword ptr [eax + 4], edx
// 0087782a  33db                 xor ebx, ebx
// 0087782c  895808               mov dword ptr [eax + 8], ebx
// 0087782f  33ed                 xor ebp, ebp
// 00877831  89680c               mov dword ptr [eax + 0xc], ebp
// 00877834  8d8634020000         lea eax, [esi + 0x234]
// 0087783a  50                   push eax
// 0087783b  68c818a000           push 0xa018c8
// 00877840  57                   push edi
// 00877841  e83a93fdff           call 0x850b80
// 00877846  83c41c               add esp, 0x1c
// 00877849  837f2c17             cmp dword ptr [edi + 0x2c], 0x17
// 0087784d  7616                 jbe 0x877865
// 0087784f  55                   push ebp
// 00877850  81c648020000         add esi, 0x248
// 00877856  56                   push esi
// 00877857  68a4589b00           push 0x9b58a4
// 0087785c  57                   push edi
// 0087785d  e89e91fdff           call 0x850a00
// 00877862  83c410               add esp, 0x10
// 00877865  5f                   pop edi
// 00877866  5e                   pop esi
// 00877867  5d                   pop ebp
// 00877868  5b                   pop ebx
// 00877869  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?DoPropExchange@CXTPControlGallery@@MAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
