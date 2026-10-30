// roc 2011-06 0086bb00  unit: CXTThemeManagerStyleHost  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086bb00
//
// 0086bb00  53                   push ebx
// 0086bb01  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0086bb05  56                   push esi
// 0086bb06  8bf1                 mov esi, ecx
// 0086bb08  837e0c00             cmp dword ptr [esi + 0xc], 0
// 0086bb0c  7504                 jne 0x86bb12
// 0086bb0e  85db                 test ebx, ebx
// 0086bb10  7477                 je 0x86bb89
// 0086bb12  56                   push esi
// 0086bb13  e818fbffff           call 0x86b630
// 0086bb18  8bc8                 mov ecx, eax
// 0086bb1a  83c108               add ecx, 8
// 0086bb1d  e8a00f1600           call 0x9ccac2
// 0086bb22  837e0400             cmp dword ptr [esi + 4], 0
// 0086bb26  7417                 je 0x86bb3f
// 0086bb28  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0086bb2b  85c9                 test ecx, ecx
// 0086bb2d  7410                 je 0x86bb3f
// 0086bb2f  8b01                 mov eax, dword ptr [ecx]
// 0086bb31  8b5004               mov edx, dword ptr [eax + 4]
// 0086bb34  6a01                 push 1
// 0086bb36  ffd2                 call edx
// 0086bb38  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0086bb3f  85db                 test ebx, ebx
// 0086bb41  741d                 je 0x86bb60
// 0086bb43  8b06                 mov eax, dword ptr [esi]
// 0086bb45  8b5004               mov edx, dword ptr [eax + 4]
// 0086bb48  8bce                 mov ecx, esi
// 0086bb4a  ffd2                 call edx
// 0086bb4c  53                   push ebx
// 0086bb4d  8bc8                 mov ecx, eax
// 0086bb4f  89460c               mov dword ptr [esi + 0xc], eax
// 0086bb52  e809ffffff           call 0x86ba60
// 0086bb57  c7460401000000       mov dword ptr [esi + 4], 1
// 0086bb5e  eb0e                 jmp 0x86bb6e
// 0086bb60  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0086bb67  c7460400000000       mov dword ptr [esi + 4], 0
// 0086bb6e  8b06                 mov eax, dword ptr [esi]
// 0086bb70  8b5008               mov edx, dword ptr [eax + 8]
// 0086bb73  8bce                 mov ecx, esi
// 0086bb75  ffd2                 call edx
// 0086bb77  56                   push esi
// 0086bb78  8bce                 mov ecx, esi
// 0086bb7a  e8b1faffff           call 0x86b630
// 0086bb7f  8bc8                 mov ecx, eax
// 0086bb81  83c108               add ecx, 8
// 0086bb84  e8330f1600           call 0x9ccabc
// 0086bb89  5e                   pop esi
// 0086bb8a  5b                   pop ebx
// 0086bb8b  c20400               ret 4
// copied from an identical function in another client (function ?SetTheme@CXTThemeManagerStyleHost@@QAEXPAVCXTThemeManagerStyle@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTThemeManager.cpp