// roc 2008-06 00796e00  unit: CXTPRibbonTabPopupToolBar  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00796e00
//
// 00796e00  56                   push esi
// 00796e01  57                   push edi
// 00796e02  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00796e06  83bf5801000000       cmp dword ptr [edi + 0x158], 0
// 00796e0d  8bf1                 mov esi, ecx
// 00796e0f  7469                 je 0x796e7a
// 00796e11  8b8e68020000         mov ecx, dword ptr [esi + 0x268]
// 00796e17  8b01                 mov eax, dword ptr [ecx]
// 00796e19  8b9080000000         mov edx, dword ptr [eax + 0x80]
// 00796e1f  6a00                 push 0
// 00796e21  ffd2                 call edx
// 00796e23  85c0                 test eax, eax
// 00796e25  7516                 jne 0x796e3d
// 00796e27  8b8e6c020000         mov ecx, dword ptr [esi + 0x26c]
// 00796e2d  8b01                 mov eax, dword ptr [ecx]
// 00796e2f  8b9080000000         mov edx, dword ptr [eax + 0x80]
// 00796e35  6a00                 push 0
// 00796e37  ffd2                 call edx
// 00796e39  85c0                 test eax, eax
// 00796e3b  743d                 je 0x796e7a
// 00796e3d  8b97c0000000         mov edx, dword ptr [edi + 0xc0]
// 00796e43  8d87c0000000         lea eax, [edi + 0xc0]
// 00796e49  83ec10               sub esp, 0x10
// 00796e4c  8bcc                 mov ecx, esp
// 00796e4e  8911                 mov dword ptr [ecx], edx
// 00796e50  8b5004               mov edx, dword ptr [eax + 4]
// 00796e53  895104               mov dword ptr [ecx + 4], edx
// 00796e56  8b5008               mov edx, dword ptr [eax + 8]
// 00796e59  8b400c               mov eax, dword ptr [eax + 0xc]
// 00796e5c  895108               mov dword ptr [ecx + 8], edx
// 00796e5f  89410c               mov dword ptr [ecx + 0xc], eax
// 00796e62  8b8e74020000         mov ecx, dword ptr [esi + 0x274]
// 00796e68  8b9184000000         mov edx, dword ptr [ecx + 0x84]
// 00796e6e  52                   push edx
// 00796e6f  8d8e5c020000         lea ecx, [esi + 0x25c]
// 00796e75  e8a6fcffff           call 0x796b20
// 00796e7a  5f                   pop edi
// 00796e7b  5e                   pop esi
// 00796e7c  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\Ribbon\XTPRibbonPopups.cpp (function ?EnsureVisible@CXTPRibbonTabPopupToolBar@@UAEXPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonPopups.cpp
