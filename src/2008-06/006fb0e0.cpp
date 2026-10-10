// roc 2008-06 006fb0e0  unit: CXTPPropertyGrid  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fb0e0
//
// 006fb0e0  83ec08               sub esp, 8
// 006fb0e3  837c241001           cmp dword ptr [esp + 0x10], 1
// 006fb0e8  56                   push esi
// 006fb0e9  8bf1                 mov esi, ecx
// 006fb0eb  7576                 jne 0x6fb163
// 006fb0ed  8d442404             lea eax, [esp + 4]
// 006fb0f1  50                   push eax
// 006fb0f2  ff159c2d8000         call dword ptr [0x802d9c]
// 006fb0f8  8b5620               mov edx, dword ptr [esi + 0x20]
// 006fb0fb  8d4c2404             lea ecx, [esp + 4]
// 006fb0ff  51                   push ecx
// 006fb100  52                   push edx
// 006fb101  ff15a02d8000         call dword ptr [0x802da0]
// 006fb107  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006fb10b  8b06                 mov eax, dword ptr [esi]
// 006fb10d  8b542404             mov edx, dword ptr [esp + 4]
// 006fb111  8b805c010000         mov eax, dword ptr [eax + 0x15c]
// 006fb117  51                   push ecx
// 006fb118  52                   push edx
// 006fb119  8bce                 mov ecx, esi
// 006fb11b  ffd0                 call eax
// 006fb11d  83f801               cmp eax, 1
// 006fb120  7428                 je 0x6fb14a
// 006fb122  83f802               cmp eax, 2
// 006fb125  7423                 je 0x6fb14a
// 006fb127  83f8ff               cmp eax, -1
// 006fb12a  7437                 je 0x6fb163
// 006fb12c  83f803               cmp eax, 3
// 006fb12f  7c32                 jl 0x6fb163
// 006fb131  8b8e30010000         mov ecx, dword ptr [esi + 0x130]
// 006fb137  51                   push ecx
// 006fb138  ff15042d8000         call dword ptr [0x802d04]
// 006fb13e  b801000000           mov eax, 1
// 006fb143  5e                   pop esi
// 006fb144  83c408               add esp, 8
// 006fb147  c20c00               ret 0xc
// 006fb14a  8b962c010000         mov edx, dword ptr [esi + 0x12c]
// 006fb150  52                   push edx
// 006fb151  ff15042d8000         call dword ptr [0x802d04]
// 006fb157  b801000000           mov eax, 1
// 006fb15c  5e                   pop esi
// 006fb15d  83c408               add esp, 8
// 006fb160  c20c00               ret 0xc
// 006fb163  8bce                 mov ecx, esi
// 006fb165  e8fe5afaff           call 0x6a0c68
// 006fb16a  5e                   pop esi
// 006fb16b  83c408               add esp, 8
// 006fb16e  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?OnSetCursor@CXTPPropertyGrid@@IAEHPAVCWnd@@II@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGrid.cpp
