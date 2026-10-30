// roc 2009-12 0085a3d0  unit: CXTThemeManagerStyleHost  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085a3d0
//
// 0085a3d0  53                   push ebx
// 0085a3d1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0085a3d5  56                   push esi
// 0085a3d6  8bf1                 mov esi, ecx
// 0085a3d8  837e0c00             cmp dword ptr [esi + 0xc], 0
// 0085a3dc  7504                 jne 0x85a3e2
// 0085a3de  85db                 test ebx, ebx
// 0085a3e0  7477                 je 0x85a459
// 0085a3e2  56                   push esi
// 0085a3e3  e828fbffff           call 0x859f10
// 0085a3e8  8bc8                 mov ecx, eax
// 0085a3ea  83c108               add ecx, 8
// 0085a3ed  e8ecc60c00           call 0x926ade
// 0085a3f2  837e0400             cmp dword ptr [esi + 4], 0
// 0085a3f6  7417                 je 0x85a40f
// 0085a3f8  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0085a3fb  85c9                 test ecx, ecx
// 0085a3fd  7410                 je 0x85a40f
// 0085a3ff  8b01                 mov eax, dword ptr [ecx]
// 0085a401  8b5004               mov edx, dword ptr [eax + 4]
// 0085a404  6a01                 push 1
// 0085a406  ffd2                 call edx
// 0085a408  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0085a40f  85db                 test ebx, ebx
// 0085a411  741d                 je 0x85a430
// 0085a413  8b06                 mov eax, dword ptr [esi]
// 0085a415  8b5004               mov edx, dword ptr [eax + 4]
// 0085a418  8bce                 mov ecx, esi
// 0085a41a  ffd2                 call edx
// 0085a41c  53                   push ebx
// 0085a41d  8bc8                 mov ecx, eax
// 0085a41f  89460c               mov dword ptr [esi + 0xc], eax
// 0085a422  e809ffffff           call 0x85a330
// 0085a427  c7460401000000       mov dword ptr [esi + 4], 1
// 0085a42e  eb0e                 jmp 0x85a43e
// 0085a430  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0085a437  c7460400000000       mov dword ptr [esi + 4], 0
// 0085a43e  8b06                 mov eax, dword ptr [esi]
// 0085a440  8b5008               mov edx, dword ptr [eax + 8]
// 0085a443  8bce                 mov ecx, esi
// 0085a445  ffd2                 call edx
// 0085a447  56                   push esi
// 0085a448  8bce                 mov ecx, esi
// 0085a44a  e8c1faffff           call 0x859f10
// 0085a44f  8bc8                 mov ecx, eax
// 0085a451  83c108               add ecx, 8
// 0085a454  e87fc60c00           call 0x926ad8
// 0085a459  5e                   pop esi
// 0085a45a  5b                   pop ebx
// 0085a45b  c20400               ret 4
// copied from an identical function in another client (function ?SetTheme@CXTThemeManagerStyleHost@@QAEXPAVCXTThemeManagerStyle@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTThemeManager.cpp