// roc 2009-12 00850610  unit: CXTPPropExchangeArchive  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00850610
//
// 00850610  56                   push esi
// 00850611  8bf1                 mov esi, ecx
// 00850613  8b06                 mov eax, dword ptr [esi]
// 00850615  8b9090000000         mov edx, dword ptr [eax + 0x90]
// 0085061b  ffd2                 call edx
// 0085061d  85c0                 test eax, eax
// 0085061f  7504                 jne 0x850625
// 00850621  5e                   pop esi
// 00850622  c20c00               ret 0xc
// 00850625  837e2800             cmp dword ptr [esi + 0x28], 0
// 00850629  8b06                 mov eax, dword ptr [esi]
// 0085062b  57                   push edi
// 0085062c  752a                 jne 0x850658
// 0085062e  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00850632  8b0f                 mov ecx, dword ptr [edi]
// 00850634  8b5078               mov edx, dword ptr [eax + 0x78]
// 00850637  51                   push ecx
// 00850638  8bce                 mov ecx, esi
// 0085063a  ffd2                 call edx
// 0085063c  8b07                 mov eax, dword ptr [edi]
// 0085063e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00850642  8b11                 mov edx, dword ptr [ecx]
// 00850644  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 00850647  50                   push eax
// 00850648  52                   push edx
// 00850649  e88e3dfaff           call 0x7f43dc
// 0085064e  5f                   pop edi
// 0085064f  b801000000           mov eax, 1
// 00850654  5e                   pop esi
// 00850655  c20c00               ret 0xc
// 00850658  8b507c               mov edx, dword ptr [eax + 0x7c]
// 0085065b  53                   push ebx
// 0085065c  8bce                 mov ecx, esi
// 0085065e  ffd2                 call edx
// 00850660  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00850664  833b00               cmp dword ptr [ebx], 0
// 00850667  8bf8                 mov edi, eax
// 00850669  752d                 jne 0x850698
// 0085066b  57                   push edi
// 0085066c  ff1578b79800         call dword ptr [0x98b778]
// 00850672  8903                 mov dword ptr [ebx], eax
// 00850674  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00850678  83c404               add esp, 4
// 0085067b  8938                 mov dword ptr [eax], edi
// 0085067d  8b13                 mov edx, dword ptr [ebx]
// 0085067f  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 00850682  57                   push edi
// 00850683  52                   push edx
// 00850684  e84d3dfaff           call 0x7f43d6
// 00850689  33c9                 xor ecx, ecx
// 0085068b  3bc7                 cmp eax, edi
// 0085068d  0f94c1               sete cl
// 00850690  5b                   pop ebx
// 00850691  5f                   pop edi
// 00850692  5e                   pop esi
// 00850693  8bc1                 mov eax, ecx
// 00850695  c20c00               ret 0xc
// 00850698  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0085069c  3939                 cmp dword ptr [ecx], edi
// 0085069e  73dd                 jae 0x85067d
// 008506a0  5b                   pop ebx
// 008506a1  5f                   pop edi
// 008506a2  33c0                 xor eax, eax
// 008506a4  5e                   pop esi
// 008506a5  c20c00               ret 0xc
// copied from an identical function in another client (function ?ExchangeBlobProp@CXTPPropExchangeArchive@@UAEHPBDAAPAEAAK@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPPropExchange.cpp