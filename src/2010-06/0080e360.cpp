// roc 2010-06 0080e360  unit: CXTThemeManagerStyleHost  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0080e360
//
// 0080e360  53                   push ebx
// 0080e361  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0080e365  56                   push esi
// 0080e366  8bf1                 mov esi, ecx
// 0080e368  837e0c00             cmp dword ptr [esi + 0xc], 0
// 0080e36c  7504                 jne 0x80e372
// 0080e36e  85db                 test ebx, ebx
// 0080e370  7477                 je 0x80e3e9
// 0080e372  56                   push esi
// 0080e373  e808fbffff           call 0x80de80
// 0080e378  8bc8                 mov ecx, eax
// 0080e37a  83c108               add ecx, 8
// 0080e37d  e89ef01600           call 0x97d420
// 0080e382  837e0400             cmp dword ptr [esi + 4], 0
// 0080e386  7417                 je 0x80e39f
// 0080e388  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0080e38b  85c9                 test ecx, ecx
// 0080e38d  7410                 je 0x80e39f
// 0080e38f  8b01                 mov eax, dword ptr [ecx]
// 0080e391  8b5004               mov edx, dword ptr [eax + 4]
// 0080e394  6a01                 push 1
// 0080e396  ffd2                 call edx
// 0080e398  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0080e39f  85db                 test ebx, ebx
// 0080e3a1  741d                 je 0x80e3c0
// 0080e3a3  8b06                 mov eax, dword ptr [esi]
// 0080e3a5  8b5004               mov edx, dword ptr [eax + 4]
// 0080e3a8  8bce                 mov ecx, esi
// 0080e3aa  ffd2                 call edx
// 0080e3ac  53                   push ebx
// 0080e3ad  8bc8                 mov ecx, eax
// 0080e3af  89460c               mov dword ptr [esi + 0xc], eax
// 0080e3b2  e809ffffff           call 0x80e2c0
// 0080e3b7  c7460401000000       mov dword ptr [esi + 4], 1
// 0080e3be  eb0e                 jmp 0x80e3ce
// 0080e3c0  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0080e3c7  c7460400000000       mov dword ptr [esi + 4], 0
// 0080e3ce  8b06                 mov eax, dword ptr [esi]
// 0080e3d0  8b5008               mov edx, dword ptr [eax + 8]
// 0080e3d3  8bce                 mov ecx, esi
// 0080e3d5  ffd2                 call edx
// 0080e3d7  56                   push esi
// 0080e3d8  8bce                 mov ecx, esi
// 0080e3da  e8a1faffff           call 0x80de80
// 0080e3df  8bc8                 mov ecx, eax
// 0080e3e1  83c108               add ecx, 8
// 0080e3e4  e831f01600           call 0x97d41a
// 0080e3e9  5e                   pop esi
// 0080e3ea  5b                   pop ebx
// 0080e3eb  c20400               ret 4
// copied from an identical function in another client (function ?SetTheme@CXTThemeManagerStyleHost@@QAEXPAVCXTThemeManagerStyle@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTThemeManager.cpp