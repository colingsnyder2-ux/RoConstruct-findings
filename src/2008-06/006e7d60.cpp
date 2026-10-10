// roc 2008-06 006e7d60  unit: CXTPToolBar::CControlButtonExpand  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e7d60
//
// 006e7d60  83ec10               sub esp, 0x10
// 006e7d63  56                   push esi
// 006e7d64  8bf1                 mov esi, ecx
// 006e7d66  83be7801000000       cmp dword ptr [esi + 0x178], 0
// 006e7d6d  0f84d9000000         je 0x6e7e4c
// 006e7d73  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 006e7d79  83f8ff               cmp eax, -1
// 006e7d7c  750f                 jne 0x6e7d8d
// 006e7d7e  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 006e7d84  85c9                 test ecx, ecx
// 006e7d86  7405                 je 0x6e7d8d
// 006e7d88  e8333afcff           call 0x6ab7c0
// 006e7d8d  85c0                 test eax, eax
// 006e7d8f  0f84b7000000         je 0x6e7e4c
// 006e7d95  83befc00000004       cmp dword ptr [esi + 0xfc], 4
// 006e7d9c  0f85aa000000         jne 0x6e7e4c
// 006e7da2  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 006e7da8  83b8f800000002       cmp dword ptr [eax + 0xf8], 2
// 006e7daf  0f8497000000         je 0x6e7e4c
// 006e7db5  83bea400000000       cmp dword ptr [esi + 0xa4], 0
// 006e7dbc  0f848a000000         je 0x6e7e4c
// 006e7dc2  57                   push edi
// 006e7dc3  8bce                 mov ecx, esi
// 006e7dc5  e87634fcff           call 0x6ab240
// 006e7dca  8b10                 mov edx, dword ptr [eax]
// 006e7dcc  8b92c8000000         mov edx, dword ptr [edx + 0xc8]
// 006e7dd2  56                   push esi
// 006e7dd3  8d4c240c             lea ecx, [esp + 0xc]
// 006e7dd7  51                   push ecx
// 006e7dd8  8bc8                 mov ecx, eax
// 006e7dda  ffd2                 call edx
// 006e7ddc  8b442420             mov eax, dword ptr [esp + 0x20]
// 006e7de0  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006e7de4  8b3d2c2d8000         mov edi, dword ptr [0x802d2c]
// 006e7dea  50                   push eax
// 006e7deb  51                   push ecx
// 006e7dec  8d542410             lea edx, [esp + 0x10]
// 006e7df0  52                   push edx
// 006e7df1  ffd7                 call edi
// 006e7df3  85c0                 test eax, eax
// 006e7df5  7424                 je 0x6e7e1b
// 006e7df7  b803000000           mov eax, 3
// 006e7dfc  3986a4000000         cmp dword ptr [esi + 0xa4], eax
// 006e7e02  7417                 je 0x6e7e1b
// 006e7e04  6a00                 push 0
// 006e7e06  8bce                 mov ecx, esi
// 006e7e08  8986a4000000         mov dword ptr [esi + 0xa4], eax
// 006e7e0e  e8bd3afcff           call 0x6ab8d0
// 006e7e13  5f                   pop edi
// 006e7e14  5e                   pop esi
// 006e7e15  83c410               add esp, 0x10
// 006e7e18  c20800               ret 8
// 006e7e1b  8b442420             mov eax, dword ptr [esp + 0x20]
// 006e7e1f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006e7e23  50                   push eax
// 006e7e24  51                   push ecx
// 006e7e25  8d542410             lea edx, [esp + 0x10]
// 006e7e29  52                   push edx
// 006e7e2a  ffd7                 call edi
// 006e7e2c  85c0                 test eax, eax
// 006e7e2e  751b                 jne 0x6e7e4b
// 006e7e30  83bea400000004       cmp dword ptr [esi + 0xa4], 4
// 006e7e37  7412                 je 0x6e7e4b
// 006e7e39  50                   push eax
// 006e7e3a  8bce                 mov ecx, esi
// 006e7e3c  c786a400000004000000 mov dword ptr [esi + 0xa4], 4
// 006e7e46  e8853afcff           call 0x6ab8d0
// 006e7e4b  5f                   pop edi
// 006e7e4c  5e                   pop esi
// 006e7e4d  83c410               add esp, 0x10
// 006e7e50  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControlPopup.cpp (function ?OnMouseMove@CXTPControlPopup@@MAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlPopup.cpp
