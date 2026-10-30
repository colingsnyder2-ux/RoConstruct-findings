// roc 2007-08 00691df0  unit: CXTThemeManagerStyleHost  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00691df0
//
// 00691df0  53                   push ebx
// 00691df1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00691df5  56                   push esi
// 00691df6  8bf1                 mov esi, ecx
// 00691df8  837e0c00             cmp dword ptr [esi + 0xc], 0
// 00691dfc  7504                 jne 0x691e02
// 00691dfe  85db                 test ebx, ebx
// 00691e00  7477                 je 0x691e79
// 00691e02  56                   push esi
// 00691e03  e838fbffff           call 0x691940
// 00691e08  8bc8                 mov ecx, eax
// 00691e0a  83c108               add ecx, 8
// 00691e0d  e8206d0a00           call 0x738b32
// 00691e12  837e0400             cmp dword ptr [esi + 4], 0
// 00691e16  7417                 je 0x691e2f
// 00691e18  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00691e1b  85c9                 test ecx, ecx
// 00691e1d  7410                 je 0x691e2f
// 00691e1f  8b01                 mov eax, dword ptr [ecx]
// 00691e21  8b5004               mov edx, dword ptr [eax + 4]
// 00691e24  6a01                 push 1
// 00691e26  ffd2                 call edx
// 00691e28  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 00691e2f  85db                 test ebx, ebx
// 00691e31  741d                 je 0x691e50
// 00691e33  8b06                 mov eax, dword ptr [esi]
// 00691e35  8b5004               mov edx, dword ptr [eax + 4]
// 00691e38  8bce                 mov ecx, esi
// 00691e3a  ffd2                 call edx
// 00691e3c  53                   push ebx
// 00691e3d  8bc8                 mov ecx, eax
// 00691e3f  89460c               mov dword ptr [esi + 0xc], eax
// 00691e42  e819ffffff           call 0x691d60
// 00691e47  c7460401000000       mov dword ptr [esi + 4], 1
// 00691e4e  eb0e                 jmp 0x691e5e
// 00691e50  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 00691e57  c7460400000000       mov dword ptr [esi + 4], 0
// 00691e5e  8b06                 mov eax, dword ptr [esi]
// 00691e60  8b5008               mov edx, dword ptr [eax + 8]
// 00691e63  8bce                 mov ecx, esi
// 00691e65  ffd2                 call edx
// 00691e67  56                   push esi
// 00691e68  8bce                 mov ecx, esi
// 00691e6a  e8d1faffff           call 0x691940
// 00691e6f  8bc8                 mov ecx, eax
// 00691e71  83c108               add ecx, 8
// 00691e74  e8b36c0a00           call 0x738b2c
// 00691e79  5e                   pop esi
// 00691e7a  5b                   pop ebx
// 00691e7b  c20400               ret 4
// copied from an identical function in another client (function ?SetTheme@CXTThemeManagerStyleHost@@QAEXPAVCXTThemeManagerStyle@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTThemeManager.cpp