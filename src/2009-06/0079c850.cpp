// roc 2009-06 0079c850  unit: CXTPControlGallery  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0079c850
//
// 0079c850  53                   push ebx
// 0079c851  55                   push ebp
// 0079c852  56                   push esi
// 0079c853  57                   push edi
// 0079c854  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0079c858  57                   push edi
// 0079c859  8bf1                 mov esi, ecx
// 0079c85b  e830f2fbff           call 0x75ba90
// 0079c860  6a01                 push 1
// 0079c862  8d8628020000         lea eax, [esi + 0x228]
// 0079c868  50                   push eax
// 0079c869  686c149000           push 0x90146c
// 0079c86e  57                   push edi
// 0079c86f  e88c94fdff           call 0x775d00
// 0079c874  6a01                 push 1
// 0079c876  8d8e30020000         lea ecx, [esi + 0x230]
// 0079c87c  51                   push ecx
// 0079c87d  6860149000           push 0x901460
// 0079c882  57                   push edi
// 0079c883  e87894fdff           call 0x775d00
// 0079c888  6a01                 push 1
// 0079c88a  8d962c020000         lea edx, [esi + 0x22c]
// 0079c890  52                   push edx
// 0079c891  6850149000           push 0x901450
// 0079c896  57                   push edi
// 0079c897  e86494fdff           call 0x775d00
// 0079c89c  83c420               add esp, 0x20
// 0079c89f  8bc4                 mov eax, esp
// 0079c8a1  33c9                 xor ecx, ecx
// 0079c8a3  8908                 mov dword ptr [eax], ecx
// 0079c8a5  33d2                 xor edx, edx
// 0079c8a7  895004               mov dword ptr [eax + 4], edx
// 0079c8aa  33db                 xor ebx, ebx
// 0079c8ac  895808               mov dword ptr [eax + 8], ebx
// 0079c8af  33ed                 xor ebp, ebp
// 0079c8b1  89680c               mov dword ptr [eax + 0xc], ebp
// 0079c8b4  8d8634020000         lea eax, [esi + 0x234]
// 0079c8ba  50                   push eax
// 0079c8bb  6840149000           push 0x901440
// 0079c8c0  57                   push edi
// 0079c8c1  e85a95fdff           call 0x775e20
// 0079c8c6  83c41c               add esp, 0x1c
// 0079c8c9  837f2c17             cmp dword ptr [edi + 0x2c], 0x17
// 0079c8cd  7616                 jbe 0x79c8e5
// 0079c8cf  55                   push ebp
// 0079c8d0  81c648020000         add esi, 0x248
// 0079c8d6  56                   push esi
// 0079c8d7  68b8ff8b00           push 0x8bffb8
// 0079c8dc  57                   push edi
// 0079c8dd  e8be93fdff           call 0x775ca0
// 0079c8e2  83c410               add esp, 0x10
// 0079c8e5  5f                   pop edi
// 0079c8e6  5e                   pop esi
// 0079c8e7  5d                   pop ebp
// 0079c8e8  5b                   pop ebx
// 0079c8e9  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?DoPropExchange@CXTPControlGallery@@MAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
