// roc 2009-12 00806da0  unit: CXTPControlComboBoxPopupBar  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00806da0
//
// 00806da0  83b98c00000000       cmp dword ptr [ecx + 0x8c], 0
// 00806da7  0f8480000000         je 0x806e2d
// 00806dad  8b442408             mov eax, dword ptr [esp + 8]
// 00806db1  3d00010000           cmp eax, 0x100
// 00806db6  7456                 je 0x806e0e
// 00806db8  3d0a020000           cmp eax, 0x20a
// 00806dbd  756e                 jne 0x806e2d
// 00806dbf  8b4178               mov eax, dword ptr [ecx + 0x78]
// 00806dc2  56                   push esi
// 00806dc3  50                   push eax
// 00806dc4  83c1ac               add ecx, -0x54
// 00806dc7  e894e4ffff           call 0x805260
// 00806dcc  8bf0                 mov esi, eax
// 00806dce  85f6                 test esi, esi
// 00806dd0  7433                 je 0x806e05
// 00806dd2  8b16                 mov edx, dword ptr [esi]
// 00806dd4  8b4274               mov eax, dword ptr [edx + 0x74]
// 00806dd7  8bce                 mov ecx, esi
// 00806dd9  ffd0                 call eax
// 00806ddb  85c0                 test eax, eax
// 00806ddd  7426                 je 0x806e05
// 00806ddf  8b442414             mov eax, dword ptr [esp + 0x14]
// 00806de3  0fb708               movzx ecx, word ptr [eax]
// 00806de6  0fb74002             movzx eax, word ptr [eax + 2]
// 00806dea  8b16                 mov edx, dword ptr [esi]
// 00806dec  8b92d8000000         mov edx, dword ptr [edx + 0xd8]
// 00806df2  50                   push eax
// 00806df3  8b442414             mov eax, dword ptr [esp + 0x14]
// 00806df7  51                   push ecx
// 00806df8  0fb74802             movzx ecx, word ptr [eax + 2]
// 00806dfc  0fb700               movzx eax, word ptr [eax]
// 00806dff  51                   push ecx
// 00806e00  50                   push eax
// 00806e01  8bce                 mov ecx, esi
// 00806e03  ffd2                 call edx
// 00806e05  b801000000           mov eax, 1
// 00806e0a  5e                   pop esi
// 00806e0b  c21400               ret 0x14
// 00806e0e  8b542410             mov edx, dword ptr [esp + 0x10]
// 00806e12  8b12                 mov edx, dword ptr [edx]
// 00806e14  8b41ac               mov eax, dword ptr [ecx - 0x54]
// 00806e17  8b80cc010000         mov eax, dword ptr [eax + 0x1cc]
// 00806e1d  52                   push edx
// 00806e1e  8b542410             mov edx, dword ptr [esp + 0x10]
// 00806e22  8b12                 mov edx, dword ptr [edx]
// 00806e24  83c1ac               add ecx, -0x54
// 00806e27  52                   push edx
// 00806e28  ffd0                 call eax
// 00806e2a  c21400               ret 0x14
// 00806e2d  33c0                 xor eax, eax
// 00806e2f  c21400               ret 0x14
// copied from an identical function in another client (function ?OnHookMessage@CXTPCommandBar@@UAEHPAUHWND__@@IAAIAAJ2@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCommandBar.cpp