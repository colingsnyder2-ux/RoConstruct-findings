// roc 2009-06 005797e0  unit: G3D::LineSegment  size: 253 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005797e0
//
// 005797e0  51                   push ecx
// 005797e1  80794800             cmp byte ptr [ecx + 0x48], 0
// 005797e5  890c24               mov dword ptr [esp], ecx
// 005797e8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005797ec  0f84dc000000         je 0x5798ce
// 005797f2  56                   push esi
// 005797f3  57                   push edi
// 005797f4  6816d28a00           push 0x8ad216
// 005797f9  ff15a8e48900         call dword ptr [0x89e4a8]
// 005797ff  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00579803  8b4714               mov eax, dword ptr [edi + 0x14]
// 00579806  33f6                 xor esi, esi
// 00579808  85c0                 test eax, eax
// 0057980a  0f86b8000000         jbe 0x5798c8
// 00579810  53                   push ebx
// 00579811  55                   push ebp
// 00579812  8d5f04               lea ebx, [edi + 4]
// 00579815  8d6e01               lea ebp, [esi + 1]
// 00579818  3bf0                 cmp esi, eax
// 0057981a  7606                 jbe 0x579822
// 0057981c  ff15ace98900         call dword ptr [0x89e9ac]
// 00579822  837f1810             cmp dword ptr [edi + 0x18], 0x10
// 00579826  7204                 jb 0x57982c
// 00579828  8b03                 mov eax, dword ptr [ebx]
// 0057982a  eb02                 jmp 0x57982e
// 0057982c  8bc3                 mov eax, ebx
// 0057982e  803c300a             cmp byte ptr [eax + esi], 0xa
// 00579832  7514                 jne 0x579848
// 00579834  8b442410             mov eax, dword ptr [esp + 0x10]
// 00579838  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0057983c  83c054               add eax, 0x54
// 0057983f  50                   push eax
// 00579840  ff15ace48900         call dword ptr [0x89e4ac]
// 00579846  eb71                 jmp 0x5798b9
// 00579848  3b7714               cmp esi, dword ptr [edi + 0x14]
// 0057984b  7606                 jbe 0x579853
// 0057984d  ff15ace98900         call dword ptr [0x89e9ac]
// 00579853  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 00579856  83f910               cmp ecx, 0x10
// 00579859  7204                 jb 0x57985f
// 0057985b  8b03                 mov eax, dword ptr [ebx]
// 0057985d  eb02                 jmp 0x579861
// 0057985f  8bc3                 mov eax, ebx
// 00579861  803c300d             cmp byte ptr [eax + esi], 0xd
// 00579865  752c                 jne 0x579893
// 00579867  3b6f14               cmp ebp, dword ptr [edi + 0x14]
// 0057986a  7327                 jae 0x579893
// 0057986c  83f910               cmp ecx, 0x10
// 0057986f  7204                 jb 0x579875
// 00579871  8b03                 mov eax, dword ptr [ebx]
// 00579873  eb02                 jmp 0x579877
// 00579875  8bc3                 mov eax, ebx
// 00579877  803c280a             cmp byte ptr [eax + ebp], 0xa
// 0057987b  7516                 jne 0x579893
// 0057987d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00579881  83c154               add ecx, 0x54
// 00579884  51                   push ecx
// 00579885  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00579889  ff15ace48900         call dword ptr [0x89e4ac]
// 0057988f  46                   inc esi
// 00579890  45                   inc ebp
// 00579891  eb26                 jmp 0x5798b9
// 00579893  3b7714               cmp esi, dword ptr [edi + 0x14]
// 00579896  7606                 jbe 0x57989e
// 00579898  ff15ace98900         call dword ptr [0x89e9ac]
// 0057989e  837f1810             cmp dword ptr [edi + 0x18], 0x10
// 005798a2  7204                 jb 0x5798a8
// 005798a4  8b03                 mov eax, dword ptr [ebx]
// 005798a6  eb02                 jmp 0x5798aa
// 005798a8  8bc3                 mov eax, ebx
// 005798aa  0fb61430             movzx edx, byte ptr [eax + esi]
// 005798ae  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005798b2  52                   push edx
// 005798b3  ff1558e58900         call dword ptr [0x89e558]
// 005798b9  8b4714               mov eax, dword ptr [edi + 0x14]
// 005798bc  46                   inc esi
// 005798bd  45                   inc ebp
// 005798be  3bf0                 cmp esi, eax
// 005798c0  0f825cffffff         jb 0x579822
// 005798c6  5d                   pop ebp
// 005798c7  5b                   pop ebx
// 005798c8  5f                   pop edi
// 005798c9  5e                   pop esi
// 005798ca  59                   pop ecx
// 005798cb  c20800               ret 8
// 005798ce  8b442408             mov eax, dword ptr [esp + 8]
// 005798d2  50                   push eax
// 005798d3  ff1564e48900         call dword ptr [0x89e464]
// 005798d9  59                   pop ecx
// 005798da  c20800               ret 8
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ?convertNewlines@TextOutput@G3D@@AAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AAV34@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp
