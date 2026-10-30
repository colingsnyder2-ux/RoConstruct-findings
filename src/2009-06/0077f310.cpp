// roc 2009-06 0077f310  unit: CXTThemeManagerStyleHost  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0077f310
//
// 0077f310  53                   push ebx
// 0077f311  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0077f315  56                   push esi
// 0077f316  8bf1                 mov esi, ecx
// 0077f318  837e0c00             cmp dword ptr [esi + 0xc], 0
// 0077f31c  7504                 jne 0x77f322
// 0077f31e  85db                 test ebx, ebx
// 0077f320  7477                 je 0x77f399
// 0077f322  56                   push esi
// 0077f323  e828fbffff           call 0x77ee50
// 0077f328  8bc8                 mov ecx, eax
// 0077f32a  83c108               add ecx, 8
// 0077f32d  e840d20c00           call 0x84c572
// 0077f332  837e0400             cmp dword ptr [esi + 4], 0
// 0077f336  7417                 je 0x77f34f
// 0077f338  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0077f33b  85c9                 test ecx, ecx
// 0077f33d  7410                 je 0x77f34f
// 0077f33f  8b01                 mov eax, dword ptr [ecx]
// 0077f341  8b5004               mov edx, dword ptr [eax + 4]
// 0077f344  6a01                 push 1
// 0077f346  ffd2                 call edx
// 0077f348  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0077f34f  85db                 test ebx, ebx
// 0077f351  741d                 je 0x77f370
// 0077f353  8b06                 mov eax, dword ptr [esi]
// 0077f355  8b5004               mov edx, dword ptr [eax + 4]
// 0077f358  8bce                 mov ecx, esi
// 0077f35a  ffd2                 call edx
// 0077f35c  53                   push ebx
// 0077f35d  8bc8                 mov ecx, eax
// 0077f35f  89460c               mov dword ptr [esi + 0xc], eax
// 0077f362  e809ffffff           call 0x77f270
// 0077f367  c7460401000000       mov dword ptr [esi + 4], 1
// 0077f36e  eb0e                 jmp 0x77f37e
// 0077f370  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0077f377  c7460400000000       mov dword ptr [esi + 4], 0
// 0077f37e  8b06                 mov eax, dword ptr [esi]
// 0077f380  8b5008               mov edx, dword ptr [eax + 8]
// 0077f383  8bce                 mov ecx, esi
// 0077f385  ffd2                 call edx
// 0077f387  56                   push esi
// 0077f388  8bce                 mov ecx, esi
// 0077f38a  e8c1faffff           call 0x77ee50
// 0077f38f  8bc8                 mov ecx, eax
// 0077f391  83c108               add ecx, 8
// 0077f394  e8d3d10c00           call 0x84c56c
// 0077f399  5e                   pop esi
// 0077f39a  5b                   pop ebx
// 0077f39b  c20400               ret 4
// copied from an identical function in another client (function ?SetTheme@CXTThemeManagerStyleHost@@QAEXPAVCXTThemeManagerStyle@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTThemeManager.cpp