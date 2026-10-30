// roc 2009-12 00895530  unit: CXTPRibbonBar  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00895530
//
// 00895530  56                   push esi
// 00895531  8bf1                 mov esi, ecx
// 00895533  e898eff6ff           call 0x8044d0
// 00895538  85c0                 test eax, eax
// 0089553a  747b                 je 0x8955b7
// 0089553c  8bce                 mov ecx, esi
// 0089553e  e8bdeff6ff           call 0x804500
// 00895543  85c0                 test eax, eax
// 00895545  741a                 je 0x895561
// 00895547  8b442410             mov eax, dword ptr [esp + 0x10]
// 0089554b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0089554f  8b542408             mov edx, dword ptr [esp + 8]
// 00895553  50                   push eax
// 00895554  51                   push ecx
// 00895555  52                   push edx
// 00895556  8bce                 mov ecx, esi
// 00895558  e8731ef7ff           call 0x8073d0
// 0089555d  5e                   pop esi
// 0089555e  c20c00               ret 0xc
// 00895561  8b06                 mov eax, dword ptr [esi]
// 00895563  8b9048010000         mov edx, dword ptr [eax + 0x148]
// 00895569  6a00                 push 0
// 0089556b  6a01                 push 1
// 0089556d  6a00                 push 0
// 0089556f  8bce                 mov ecx, esi
// 00895571  ffd2                 call edx
// 00895573  8b442410             mov eax, dword ptr [esp + 0x10]
// 00895577  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0089557b  50                   push eax
// 0089557c  51                   push ecx
// 0089557d  8bce                 mov ecx, esi
// 0089557f  e8acfbffff           call 0x895130
// 00895584  85c0                 test eax, eax
// 00895586  752f                 jne 0x8955b7
// 00895588  8b542410             mov edx, dword ptr [esp + 0x10]
// 0089558c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00895590  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 00895596  52                   push edx
// 00895597  50                   push eax
// 00895598  e88300fbff           call 0x845620
// 0089559d  85c0                 test eax, eax
// 0089559f  7416                 je 0x8955b7
// 008955a1  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008955a5  8b10                 mov edx, dword ptr [eax]
// 008955a7  8b92f0000000         mov edx, dword ptr [edx + 0xf0]
// 008955ad  51                   push ecx
// 008955ae  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008955b2  51                   push ecx
// 008955b3  8bc8                 mov ecx, eax
// 008955b5  ffd2                 call edx
// 008955b7  5e                   pop esi
// 008955b8  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnRButtonDown@CXTPRibbonBar@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonBar.cpp