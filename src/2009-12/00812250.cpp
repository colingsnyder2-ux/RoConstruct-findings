// roc 2009-12 00812250  unit: CXTPCommandBar  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00812250
//
// 00812250  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00812254  56                   push esi
// 00812255  8bf1                 mov esi, ecx
// 00812257  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0081225b  50                   push eax
// 0081225c  51                   push ecx
// 0081225d  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 00812263  e8b8330300           call 0x845620
// 00812268  85c0                 test eax, eax
// 0081226a  741e                 je 0x81228a
// 0081226c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00812270  8b10                 mov edx, dword ptr [eax]
// 00812272  8b92f0000000         mov edx, dword ptr [edx + 0xf0]
// 00812278  51                   push ecx
// 00812279  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0081227d  51                   push ecx
// 0081227e  8bc8                 mov ecx, eax
// 00812280  ffd2                 call edx
// 00812282  85c0                 test eax, eax
// 00812284  0f858a000000         jne 0x812314
// 0081228a  57                   push edi
// 0081228b  8bce                 mov ecx, esi
// 0081228d  e83e22ffff           call 0x8044d0
// 00812292  8bf8                 mov edi, eax
// 00812294  85ff                 test edi, edi
// 00812296  747b                 je 0x812313
// 00812298  8bce                 mov ecx, esi
// 0081229a  e86122ffff           call 0x804500
// 0081229f  85c0                 test eax, eax
// 008122a1  741b                 je 0x8122be
// 008122a3  8b442414             mov eax, dword ptr [esp + 0x14]
// 008122a7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008122ab  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008122af  50                   push eax
// 008122b0  51                   push ecx
// 008122b1  52                   push edx
// 008122b2  8bce                 mov ecx, esi
// 008122b4  e81751ffff           call 0x8073d0
// 008122b9  5f                   pop edi
// 008122ba  5e                   pop esi
// 008122bb  c20c00               ret 0xc
// 008122be  8b06                 mov eax, dword ptr [esi]
// 008122c0  8b9048010000         mov edx, dword ptr [eax + 0x148]
// 008122c6  6a00                 push 0
// 008122c8  6a01                 push 1
// 008122ca  6a00                 push 0
// 008122cc  8bce                 mov ecx, esi
// 008122ce  ffd2                 call edx
// 008122d0  8b06                 mov eax, dword ptr [esi]
// 008122d2  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 008122d8  6a00                 push 0
// 008122da  6aff                 push -1
// 008122dc  8bce                 mov ecx, esi
// 008122de  ffd2                 call edx
// 008122e0  8b06                 mov eax, dword ptr [esi]
// 008122e2  8b90ac010000         mov edx, dword ptr [eax + 0x1ac]
// 008122e8  6a01                 push 1
// 008122ea  6a00                 push 0
// 008122ec  8bce                 mov ecx, esi
// 008122ee  ffd2                 call edx
// 008122f0  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008122f3  8d442410             lea eax, [esp + 0x10]
// 008122f7  50                   push eax
// 008122f8  51                   push ecx
// 008122f9  ff1554cc9800         call dword ptr [0x98cc54]
// 008122ff  8b442414             mov eax, dword ptr [esp + 0x14]
// 00812303  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00812307  8b17                 mov edx, dword ptr [edi]
// 00812309  8b5268               mov edx, dword ptr [edx + 0x68]
// 0081230c  50                   push eax
// 0081230d  51                   push ecx
// 0081230e  56                   push esi
// 0081230f  8bcf                 mov ecx, edi
// 00812311  ffd2                 call edx
// 00812313  5f                   pop edi
// 00812314  5e                   pop esi
// 00812315  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnRButtonDown@CXTPToolBar@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPToolBar.cpp