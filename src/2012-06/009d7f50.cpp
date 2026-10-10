// roc 2012-06 009d7f50  unit: CXTPPropExchangeArchive  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009d7f50
//
// 009d7f50  56                   push esi
// 009d7f51  8bf1                 mov esi, ecx
// 009d7f53  8b06                 mov eax, dword ptr [esi]
// 009d7f55  8b9090000000         mov edx, dword ptr [eax + 0x90]
// 009d7f5b  ffd2                 call edx
// 009d7f5d  85c0                 test eax, eax
// 009d7f5f  7504                 jne 0x9d7f65
// 009d7f61  5e                   pop esi
// 009d7f62  c20c00               ret 0xc
// 009d7f65  837e2800             cmp dword ptr [esi + 0x28], 0
// 009d7f69  8b06                 mov eax, dword ptr [esi]
// 009d7f6b  57                   push edi
// 009d7f6c  752a                 jne 0x9d7f98
// 009d7f6e  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 009d7f72  8b0f                 mov ecx, dword ptr [edi]
// 009d7f74  8b5078               mov edx, dword ptr [eax + 0x78]
// 009d7f77  51                   push ecx
// 009d7f78  8bce                 mov ecx, esi
// 009d7f7a  ffd2                 call edx
// 009d7f7c  8b07                 mov eax, dword ptr [edi]
// 009d7f7e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 009d7f82  8b11                 mov edx, dword ptr [ecx]
// 009d7f84  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 009d7f87  50                   push eax
// 009d7f88  52                   push edx
// 009d7f89  e8d8acfaff           call 0x982c66
// 009d7f8e  5f                   pop edi
// 009d7f8f  b801000000           mov eax, 1
// 009d7f94  5e                   pop esi
// 009d7f95  c20c00               ret 0xc
// 009d7f98  8b507c               mov edx, dword ptr [eax + 0x7c]
// 009d7f9b  53                   push ebx
// 009d7f9c  8bce                 mov ecx, esi
// 009d7f9e  ffd2                 call edx
// 009d7fa0  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 009d7fa4  833b00               cmp dword ptr [ebx], 0
// 009d7fa7  8bf8                 mov edi, eax
// 009d7fa9  752d                 jne 0x9d7fd8
// 009d7fab  57                   push edi
// 009d7fac  ff15f829b200         call dword ptr [0xb229f8]
// 009d7fb2  8903                 mov dword ptr [ebx], eax
// 009d7fb4  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 009d7fb8  83c404               add esp, 4
// 009d7fbb  8938                 mov dword ptr [eax], edi
// 009d7fbd  8b13                 mov edx, dword ptr [ebx]
// 009d7fbf  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 009d7fc2  57                   push edi
// 009d7fc3  52                   push edx
// 009d7fc4  e897acfaff           call 0x982c60
// 009d7fc9  33c9                 xor ecx, ecx
// 009d7fcb  3bc7                 cmp eax, edi
// 009d7fcd  0f94c1               sete cl
// 009d7fd0  5b                   pop ebx
// 009d7fd1  5f                   pop edi
// 009d7fd2  5e                   pop esi
// 009d7fd3  8bc1                 mov eax, ecx
// 009d7fd5  c20c00               ret 0xc
// 009d7fd8  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 009d7fdc  3939                 cmp dword ptr [ecx], edi
// 009d7fde  73dd                 jae 0x9d7fbd
// 009d7fe0  5b                   pop ebx
// 009d7fe1  5f                   pop edi
// 009d7fe2  33c0                 xor eax, eax
// 009d7fe4  5e                   pop esi
// 009d7fe5  c20c00               ret 0xc
// library xtp-15.2.1-shared-mfc/Source\Common\XTPPropExchange.cpp (function ?ExchangeBlobProp@CXTPPropExchangeArchive@@UAEHPBDAAPAEAAK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/Common/XTPPropExchange.cpp
