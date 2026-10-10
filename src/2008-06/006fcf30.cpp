// roc 2008-06 006fcf30  unit: CXTPPropExchangeArchive  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fcf30
//
// 006fcf30  56                   push esi
// 006fcf31  8bf1                 mov esi, ecx
// 006fcf33  8b06                 mov eax, dword ptr [esi]
// 006fcf35  8b9090000000         mov edx, dword ptr [eax + 0x90]
// 006fcf3b  ffd2                 call edx
// 006fcf3d  85c0                 test eax, eax
// 006fcf3f  7504                 jne 0x6fcf45
// 006fcf41  5e                   pop esi
// 006fcf42  c20c00               ret 0xc
// 006fcf45  837e2800             cmp dword ptr [esi + 0x28], 0
// 006fcf49  8b06                 mov eax, dword ptr [esi]
// 006fcf4b  57                   push edi
// 006fcf4c  752a                 jne 0x6fcf78
// 006fcf4e  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 006fcf52  8b0f                 mov ecx, dword ptr [edi]
// 006fcf54  8b5078               mov edx, dword ptr [eax + 0x78]
// 006fcf57  51                   push ecx
// 006fcf58  8bce                 mov ecx, esi
// 006fcf5a  ffd2                 call edx
// 006fcf5c  8b07                 mov eax, dword ptr [edi]
// 006fcf5e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006fcf62  8b11                 mov edx, dword ptr [ecx]
// 006fcf64  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 006fcf67  50                   push eax
// 006fcf68  52                   push edx
// 006fcf69  e8c241faff           call 0x6a1130
// 006fcf6e  5f                   pop edi
// 006fcf6f  b801000000           mov eax, 1
// 006fcf74  5e                   pop esi
// 006fcf75  c20c00               ret 0xc
// 006fcf78  8b507c               mov edx, dword ptr [eax + 0x7c]
// 006fcf7b  53                   push ebx
// 006fcf7c  8bce                 mov ecx, esi
// 006fcf7e  ffd2                 call edx
// 006fcf80  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 006fcf84  833b00               cmp dword ptr [ebx], 0
// 006fcf87  8bf8                 mov edi, eax
// 006fcf89  752d                 jne 0x6fcfb8
// 006fcf8b  57                   push edi
// 006fcf8c  ff15b0288000         call dword ptr [0x8028b0]
// 006fcf92  8903                 mov dword ptr [ebx], eax
// 006fcf94  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006fcf98  83c404               add esp, 4
// 006fcf9b  8938                 mov dword ptr [eax], edi
// 006fcf9d  8b13                 mov edx, dword ptr [ebx]
// 006fcf9f  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 006fcfa2  57                   push edi
// 006fcfa3  52                   push edx
// 006fcfa4  e88141faff           call 0x6a112a
// 006fcfa9  33c9                 xor ecx, ecx
// 006fcfab  3bc7                 cmp eax, edi
// 006fcfad  0f94c1               sete cl
// 006fcfb0  5b                   pop ebx
// 006fcfb1  5f                   pop edi
// 006fcfb2  5e                   pop esi
// 006fcfb3  8bc1                 mov eax, ecx
// 006fcfb5  c20c00               ret 0xc
// 006fcfb8  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006fcfbc  3939                 cmp dword ptr [ecx], edi
// 006fcfbe  73dd                 jae 0x6fcf9d
// 006fcfc0  5b                   pop ebx
// 006fcfc1  5f                   pop edi
// 006fcfc2  33c0                 xor eax, eax
// 006fcfc4  5e                   pop esi
// 006fcfc5  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\Common\XTPPropExchange.cpp (function ?ExchangeBlobProp@CXTPPropExchangeArchive@@UAEHPBDAAPAEAAK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPPropExchange.cpp
