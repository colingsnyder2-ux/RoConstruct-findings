// roc 2007-03 00688550  unit: seg_00680000  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00688550
//
// 00688550  83ec08               sub esp, 8
// 00688553  837c241001           cmp dword ptr [esp + 0x10], 1
// 00688558  56                   push esi
// 00688559  8bf1                 mov esi, ecx
// 0068855b  754b                 jne 0x6885a8
// 0068855d  8d442404             lea eax, [esp + 4]
// 00688561  50                   push eax
// 00688562  ff1524ed7700         call dword ptr [0x77ed24]
// 00688568  8b5620               mov edx, dword ptr [esi + 0x20]
// 0068856b  8d4c2404             lea ecx, [esp + 4]
// 0068856f  51                   push ecx
// 00688570  52                   push edx
// 00688571  ff1520ed7700         call dword ptr [0x77ed20]
// 00688577  8b442408             mov eax, dword ptr [esp + 8]
// 0068857b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0068857f  50                   push eax
// 00688580  51                   push ecx
// 00688581  8bce                 mov ecx, esi
// 00688583  e878ffffff           call 0x688500
// 00688588  3d00010000           cmp eax, 0x100
// 0068858d  7519                 jne 0x6885a8
// 0068858f  8b96d4000000         mov edx, dword ptr [esi + 0xd4]
// 00688595  52                   push edx
// 00688596  ff15d0ed7700         call dword ptr [0x77edd0]
// 0068859c  b801000000           mov eax, 1
// 006885a1  5e                   pop esi
// 006885a2  83c408               add esp, 8
// 006885a5  c20c00               ret 0xc
// 006885a8  8bce                 mov ecx, esi
// 006885aa  e82361f9ff           call 0x61e6d2
// 006885af  5e                   pop esi
// 006885b0  83c408               add esp, 8
// 006885b3  c20c00               ret 0xc
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?OnSetCursor@CXTPPropertyGridView@@IAEHPAVCWnd@@II@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
