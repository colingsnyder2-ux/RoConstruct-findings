// from server: 100% by auto
// roc 2008-06 00715b70  unit: CXTPPropertyGridView  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00715b70
//
// 00715b70  83ec08               sub esp, 8
// 00715b73  837c241001           cmp dword ptr [esp + 0x10], 1
// 00715b78  56                   push esi
// 00715b79  8bf1                 mov esi, ecx
// 00715b7b  754b                 jne 0x715bc8
// 00715b7d  8d442404             lea eax, [esp + 4]
// 00715b81  50                   push eax
// 00715b82  ff159c2d8000         call dword ptr [0x802d9c]
// 00715b88  8b5620               mov edx, dword ptr [esi + 0x20]
// 00715b8b  8d4c2404             lea ecx, [esp + 4]
// 00715b8f  51                   push ecx
// 00715b90  52                   push edx
// 00715b91  ff15a02d8000         call dword ptr [0x802da0]
// 00715b97  8b442408             mov eax, dword ptr [esp + 8]
// 00715b9b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00715b9f  50                   push eax
// 00715ba0  51                   push ecx
// 00715ba1  8bce                 mov ecx, esi
// 00715ba3  e878ffffff           call 0x715b20
// 00715ba8  3d00010000           cmp eax, 0x100
// 00715bad  7519                 jne 0x715bc8
// 00715baf  8b96d4000000         mov edx, dword ptr [esi + 0xd4]
// 00715bb5  52                   push edx
// 00715bb6  ff15042d8000         call dword ptr [0x802d04]
// 00715bbc  b801000000           mov eax, 1
// 00715bc1  5e                   pop esi
// 00715bc2  83c408               add esp, 8
// 00715bc5  c20c00               ret 0xc
// 00715bc8  8bce                 mov ecx, esi
// 00715bca  e899b0f8ff           call 0x6a0c68
// 00715bcf  5e                   pop esi
// 00715bd0  83c408               add esp, 8
// 00715bd3  c20c00               ret 0xc
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?OnSetCursor@CXTPPropertyGridView@@IAEHPAVCWnd@@II@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
