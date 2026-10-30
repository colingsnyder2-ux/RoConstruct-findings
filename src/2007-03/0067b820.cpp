// roc 2007-03 0067b820  unit: seg_00670000  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0067b820
//
// 0067b820  53                   push ebx
// 0067b821  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0067b825  56                   push esi
// 0067b826  8bf1                 mov esi, ecx
// 0067b828  837e0c00             cmp dword ptr [esi + 0xc], 0
// 0067b82c  7504                 jne 0x67b832
// 0067b82e  85db                 test ebx, ebx
// 0067b830  7477                 je 0x67b8a9
// 0067b832  56                   push esi
// 0067b833  e838fbffff           call 0x67b370
// 0067b838  8bc8                 mov ecx, eax
// 0067b83a  83c108               add ecx, 8
// 0067b83d  e82afa0b00           call 0x73b26c
// 0067b842  837e0400             cmp dword ptr [esi + 4], 0
// 0067b846  7417                 je 0x67b85f
// 0067b848  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0067b84b  85c9                 test ecx, ecx
// 0067b84d  7410                 je 0x67b85f
// 0067b84f  8b01                 mov eax, dword ptr [ecx]
// 0067b851  8b5004               mov edx, dword ptr [eax + 4]
// 0067b854  6a01                 push 1
// 0067b856  ffd2                 call edx
// 0067b858  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0067b85f  85db                 test ebx, ebx
// 0067b861  741d                 je 0x67b880
// 0067b863  8b06                 mov eax, dword ptr [esi]
// 0067b865  8b5004               mov edx, dword ptr [eax + 4]
// 0067b868  8bce                 mov ecx, esi
// 0067b86a  ffd2                 call edx
// 0067b86c  53                   push ebx
// 0067b86d  8bc8                 mov ecx, eax
// 0067b86f  89460c               mov dword ptr [esi + 0xc], eax
// 0067b872  e819ffffff           call 0x67b790
// 0067b877  c7460401000000       mov dword ptr [esi + 4], 1
// 0067b87e  eb0e                 jmp 0x67b88e
// 0067b880  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0067b887  c7460400000000       mov dword ptr [esi + 4], 0
// 0067b88e  8b06                 mov eax, dword ptr [esi]
// 0067b890  8b5008               mov edx, dword ptr [eax + 8]
// 0067b893  8bce                 mov ecx, esi
// 0067b895  ffd2                 call edx
// 0067b897  56                   push esi
// 0067b898  8bce                 mov ecx, esi
// 0067b89a  e8d1faffff           call 0x67b370
// 0067b89f  8bc8                 mov ecx, eax
// 0067b8a1  83c108               add ecx, 8
// 0067b8a4  e8bdf90b00           call 0x73b266
// 0067b8a9  5e                   pop esi
// 0067b8aa  5b                   pop ebx
// 0067b8ab  c20400               ret 4
// copied from an identical function in another client (function ?SetTheme@CXTThemeManagerStyleHost@@QAEXPAVCXTThemeManagerStyle@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTThemeManager.cpp