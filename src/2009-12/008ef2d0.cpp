// roc 2009-12 008ef2d0  unit: CXTPRibbonTabPopupToolBar  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ef2d0
//
// 008ef2d0  56                   push esi
// 008ef2d1  57                   push edi
// 008ef2d2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008ef2d6  83bf5801000000       cmp dword ptr [edi + 0x158], 0
// 008ef2dd  8bf1                 mov esi, ecx
// 008ef2df  7469                 je 0x8ef34a
// 008ef2e1  8b8e68020000         mov ecx, dword ptr [esi + 0x268]
// 008ef2e7  8b01                 mov eax, dword ptr [ecx]
// 008ef2e9  8b9080000000         mov edx, dword ptr [eax + 0x80]
// 008ef2ef  6a00                 push 0
// 008ef2f1  ffd2                 call edx
// 008ef2f3  85c0                 test eax, eax
// 008ef2f5  7516                 jne 0x8ef30d
// 008ef2f7  8b8e6c020000         mov ecx, dword ptr [esi + 0x26c]
// 008ef2fd  8b01                 mov eax, dword ptr [ecx]
// 008ef2ff  8b9080000000         mov edx, dword ptr [eax + 0x80]
// 008ef305  6a00                 push 0
// 008ef307  ffd2                 call edx
// 008ef309  85c0                 test eax, eax
// 008ef30b  743d                 je 0x8ef34a
// 008ef30d  8b97c0000000         mov edx, dword ptr [edi + 0xc0]
// 008ef313  8d87c0000000         lea eax, [edi + 0xc0]
// 008ef319  83ec10               sub esp, 0x10
// 008ef31c  8bcc                 mov ecx, esp
// 008ef31e  8911                 mov dword ptr [ecx], edx
// 008ef320  8b5004               mov edx, dword ptr [eax + 4]
// 008ef323  895104               mov dword ptr [ecx + 4], edx
// 008ef326  8b5008               mov edx, dword ptr [eax + 8]
// 008ef329  8b400c               mov eax, dword ptr [eax + 0xc]
// 008ef32c  895108               mov dword ptr [ecx + 8], edx
// 008ef32f  89410c               mov dword ptr [ecx + 0xc], eax
// 008ef332  8b8e74020000         mov ecx, dword ptr [esi + 0x274]
// 008ef338  8b9184000000         mov edx, dword ptr [ecx + 0x84]
// 008ef33e  52                   push edx
// 008ef33f  8d8e5c020000         lea ecx, [esi + 0x25c]
// 008ef345  e8a6fcffff           call 0x8eeff0
// 008ef34a  5f                   pop edi
// 008ef34b  5e                   pop esi
// 008ef34c  c20400               ret 4
// copied from an identical function in another client (function ?EnsureVisible@CXTPRibbonTabPopupToolBar@@UAEXPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonPopups.cpp