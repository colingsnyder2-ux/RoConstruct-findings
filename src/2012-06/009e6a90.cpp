// roc 2012-06 009e6a90  unit: CXTThemeManagerStyleHost  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e6a90
//
// 009e6a90  53                   push ebx
// 009e6a91  8b5c2408             mov ebx, dword ptr [esp + 8]
// 009e6a95  56                   push esi
// 009e6a96  8bf1                 mov esi, ecx
// 009e6a98  837e0c00             cmp dword ptr [esi + 0xc], 0
// 009e6a9c  7504                 jne 0x9e6aa2
// 009e6a9e  85db                 test ebx, ebx
// 009e6aa0  7477                 je 0x9e6b19
// 009e6aa2  56                   push esi
// 009e6aa3  e808fbffff           call 0x9e65b0
// 009e6aa8  8bc8                 mov ecx, eax
// 009e6aaa  83c108               add ecx, 8
// 009e6aad  e8ae300b00           call 0xa99b60
// 009e6ab2  837e0400             cmp dword ptr [esi + 4], 0
// 009e6ab6  7417                 je 0x9e6acf
// 009e6ab8  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 009e6abb  85c9                 test ecx, ecx
// 009e6abd  7410                 je 0x9e6acf
// 009e6abf  8b01                 mov eax, dword ptr [ecx]
// 009e6ac1  8b5004               mov edx, dword ptr [eax + 4]
// 009e6ac4  6a01                 push 1
// 009e6ac6  ffd2                 call edx
// 009e6ac8  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 009e6acf  85db                 test ebx, ebx
// 009e6ad1  741d                 je 0x9e6af0
// 009e6ad3  8b06                 mov eax, dword ptr [esi]
// 009e6ad5  8b5004               mov edx, dword ptr [eax + 4]
// 009e6ad8  8bce                 mov ecx, esi
// 009e6ada  ffd2                 call edx
// 009e6adc  53                   push ebx
// 009e6add  8bc8                 mov ecx, eax
// 009e6adf  89460c               mov dword ptr [esi + 0xc], eax
// 009e6ae2  e809ffffff           call 0x9e69f0
// 009e6ae7  c7460401000000       mov dword ptr [esi + 4], 1
// 009e6aee  eb0e                 jmp 0x9e6afe
// 009e6af0  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 009e6af7  c7460400000000       mov dword ptr [esi + 4], 0
// 009e6afe  8b06                 mov eax, dword ptr [esi]
// 009e6b00  8b5008               mov edx, dword ptr [eax + 8]
// 009e6b03  8bce                 mov ecx, esi
// 009e6b05  ffd2                 call edx
// 009e6b07  56                   push esi
// 009e6b08  8bce                 mov ecx, esi
// 009e6b0a  e8a1faffff           call 0x9e65b0
// 009e6b0f  8bc8                 mov ecx, eax
// 009e6b11  83c108               add ecx, 8
// 009e6b14  e841300b00           call 0xa99b5a
// 009e6b19  5e                   pop esi
// 009e6b1a  5b                   pop ebx
// 009e6b1b  c20400               ret 4
// copied from an identical function in another client (function ?SetTheme@CXTThemeManagerStyleHost@@QAEXPAVCXTThemeManagerStyle@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTThemeManager.cpp