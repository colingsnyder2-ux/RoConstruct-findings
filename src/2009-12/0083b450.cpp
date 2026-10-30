// roc 2009-12 0083b450  unit: CXTPToolBar::CControlButtonExpand  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083b450
//
// 0083b450  83ec10               sub esp, 0x10
// 0083b453  56                   push esi
// 0083b454  8bf1                 mov esi, ecx
// 0083b456  83be7801000000       cmp dword ptr [esi + 0x178], 0
// 0083b45d  0f84d9000000         je 0x83b53c
// 0083b463  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 0083b469  83f8ff               cmp eax, -1
// 0083b46c  750f                 jne 0x83b47d
// 0083b46e  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 0083b474  85c9                 test ecx, ecx
// 0083b476  7405                 je 0x83b47d
// 0083b478  e833b1fbff           call 0x7f65b0
// 0083b47d  85c0                 test eax, eax
// 0083b47f  0f84b7000000         je 0x83b53c
// 0083b485  83befc00000004       cmp dword ptr [esi + 0xfc], 4
// 0083b48c  0f85aa000000         jne 0x83b53c
// 0083b492  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 0083b498  83b8f800000002       cmp dword ptr [eax + 0xf8], 2
// 0083b49f  0f8497000000         je 0x83b53c
// 0083b4a5  83bea400000000       cmp dword ptr [esi + 0xa4], 0
// 0083b4ac  0f848a000000         je 0x83b53c
// 0083b4b2  57                   push edi
// 0083b4b3  8bce                 mov ecx, esi
// 0083b4b5  e886aafbff           call 0x7f5f40
// 0083b4ba  8b10                 mov edx, dword ptr [eax]
// 0083b4bc  8b92c8000000         mov edx, dword ptr [edx + 0xc8]
// 0083b4c2  56                   push esi
// 0083b4c3  8d4c240c             lea ecx, [esp + 0xc]
// 0083b4c7  51                   push ecx
// 0083b4c8  8bc8                 mov ecx, eax
// 0083b4ca  ffd2                 call edx
// 0083b4cc  8b442420             mov eax, dword ptr [esp + 0x20]
// 0083b4d0  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0083b4d4  8b3d5cca9800         mov edi, dword ptr [0x98ca5c]
// 0083b4da  50                   push eax
// 0083b4db  51                   push ecx
// 0083b4dc  8d542410             lea edx, [esp + 0x10]
// 0083b4e0  52                   push edx
// 0083b4e1  ffd7                 call edi
// 0083b4e3  85c0                 test eax, eax
// 0083b4e5  7424                 je 0x83b50b
// 0083b4e7  b803000000           mov eax, 3
// 0083b4ec  3986a4000000         cmp dword ptr [esi + 0xa4], eax
// 0083b4f2  7417                 je 0x83b50b
// 0083b4f4  6a00                 push 0
// 0083b4f6  8bce                 mov ecx, esi
// 0083b4f8  8986a4000000         mov dword ptr [esi + 0xa4], eax
// 0083b4fe  e8bdb1fbff           call 0x7f66c0
// 0083b503  5f                   pop edi
// 0083b504  5e                   pop esi
// 0083b505  83c410               add esp, 0x10
// 0083b508  c20800               ret 8
// 0083b50b  8b442420             mov eax, dword ptr [esp + 0x20]
// 0083b50f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0083b513  50                   push eax
// 0083b514  51                   push ecx
// 0083b515  8d542410             lea edx, [esp + 0x10]
// 0083b519  52                   push edx
// 0083b51a  ffd7                 call edi
// 0083b51c  85c0                 test eax, eax
// 0083b51e  751b                 jne 0x83b53b
// 0083b520  83bea400000004       cmp dword ptr [esi + 0xa4], 4
// 0083b527  7412                 je 0x83b53b
// 0083b529  50                   push eax
// 0083b52a  8bce                 mov ecx, esi
// 0083b52c  c786a400000004000000 mov dword ptr [esi + 0xa4], 4
// 0083b536  e885b1fbff           call 0x7f66c0
// 0083b53b  5f                   pop edi
// 0083b53c  5e                   pop esi
// 0083b53d  83c410               add esp, 0x10
// 0083b540  c20800               ret 8
// copied from an identical function in another client (function ?OnMouseMove@CXTPControlPopup@@MAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlPopup.cpp