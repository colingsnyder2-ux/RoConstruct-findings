// roc 2009-06 0040d820  unit: VCBrowserViewExternal::?$CProxy_IBrowserViewExternalEvents  size: 188 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0040d820
//
// 0040d820  56                   push esi
// 0040d821  8bf1                 mov esi, ecx
// 0040d823  837e0400             cmp dword ptr [esi + 4], 0
// 0040d827  752b                 jne 0x40d854
// 0040d829  6a04                 push 4
// 0040d82b  6a04                 push 4
// 0040d82d  ff1564e98900         call dword ptr [0x89e964]
// 0040d833  83c408               add esp, 8
// 0040d836  85c0                 test eax, eax
// 0040d838  7504                 jne 0x40d83e
// 0040d83a  5e                   pop esi
// 0040d83b  c20400               ret 4
// 0040d83e  33c9                 xor ecx, ecx
// 0040d840  8908                 mov dword ptr [eax], ecx
// 0040d842  894804               mov dword ptr [eax + 4], ecx
// 0040d845  894808               mov dword ptr [eax + 8], ecx
// 0040d848  89480c               mov dword ptr [eax + 0xc], ecx
// 0040d84b  8906                 mov dword ptr [esi], eax
// 0040d84d  c7460404000000       mov dword ptr [esi + 4], 4
// 0040d854  8b0e                 mov ecx, dword ptr [esi]
// 0040d856  8b5604               mov edx, dword ptr [esi + 4]
// 0040d859  53                   push ebx
// 0040d85a  57                   push edi
// 0040d85b  8bf9                 mov edi, ecx
// 0040d85d  8d3c97               lea edi, [edi + edx*4]
// 0040d860  b801000000           mov eax, 1
// 0040d865  3bcf                 cmp ecx, edi
// 0040d867  731b                 jae 0x40d884
// 0040d869  8da42400000000       lea esp, [esp]
// 0040d870  833900               cmp dword ptr [ecx], 0
// 0040d873  742b                 je 0x40d8a0
// 0040d875  8b1e                 mov ebx, dword ptr [esi]
// 0040d877  8bfa                 mov edi, edx
// 0040d879  83c104               add ecx, 4
// 0040d87c  8d3cbb               lea edi, [ebx + edi*4]
// 0040d87f  40                   inc eax
// 0040d880  3bcf                 cmp ecx, edi
// 0040d882  72ec                 jb 0x40d870
// 0040d884  8b06                 mov eax, dword ptr [esi]
// 0040d886  8d3c12               lea edi, [edx + edx]
// 0040d889  57                   push edi
// 0040d88a  6a04                 push 4
// 0040d88c  50                   push eax
// 0040d88d  ff1580e98900         call dword ptr [0x89e980]
// 0040d893  83c40c               add esp, 0xc
// 0040d896  85c0                 test eax, eax
// 0040d898  7512                 jne 0x40d8ac
// 0040d89a  5f                   pop edi
// 0040d89b  5b                   pop ebx
// 0040d89c  5e                   pop esi
// 0040d89d  c20400               ret 4
// 0040d8a0  8b542410             mov edx, dword ptr [esp + 0x10]
// 0040d8a4  5f                   pop edi
// 0040d8a5  5b                   pop ebx
// 0040d8a6  8911                 mov dword ptr [ecx], edx
// 0040d8a8  5e                   pop esi
// 0040d8a9  c20400               ret 4
// 0040d8ac  8b4e04               mov ecx, dword ptr [esi + 4]
// 0040d8af  03c9                 add ecx, ecx
// 0040d8b1  03c9                 add ecx, ecx
// 0040d8b3  51                   push ecx
// 0040d8b4  03c8                 add ecx, eax
// 0040d8b6  6a00                 push 0
// 0040d8b8  51                   push ecx
// 0040d8b9  8906                 mov dword ptr [esi], eax
// 0040d8bb  e8b4c33000           call 0x719c74
// 0040d8c0  8b4e04               mov ecx, dword ptr [esi + 4]
// 0040d8c3  8b16                 mov edx, dword ptr [esi]
// 0040d8c5  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0040d8c9  89048a               mov dword ptr [edx + ecx*4], eax
// 0040d8cc  8b4604               mov eax, dword ptr [esi + 4]
// 0040d8cf  83c40c               add esp, 0xc
// 0040d8d2  897e04               mov dword ptr [esi + 4], edi
// 0040d8d5  5f                   pop edi
// 0040d8d6  5b                   pop ebx
// 0040d8d7  40                   inc eax
// 0040d8d8  5e                   pop esi
// 0040d8d9  c20400               ret 4
// copied from an identical function in another client (function ?Add@CComDynamicUnkArray@ATL@@QAEKPAUIUnknown@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_2e752666f44a81f5.cpp