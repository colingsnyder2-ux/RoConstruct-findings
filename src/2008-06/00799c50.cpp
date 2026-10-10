// roc 2008-06 00799c50  unit: CXTPControlGallery  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00799c50
//
// 00799c50  8b41fc               mov eax, dword ptr [ecx - 4]
// 00799c53  83ec10               sub esp, 0x10
// 00799c56  50                   push eax
// 00799c57  8d4c2404             lea ecx, [esp + 4]
// 00799c5b  e8026df0ff           call 0x6a0962
// 00799c60  8b442404             mov eax, dword ptr [esp + 4]
// 00799c64  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00799c68  c70100000000         mov dword ptr [ecx], 0
// 00799c6e  85c0                 test eax, eax
// 00799c70  7406                 je 0x799c78
// 00799c72  8b1424               mov edx, dword ptr [esp]
// 00799c75  895004               mov dword ptr [eax + 4], edx
// 00799c78  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00799c7d  740c                 je 0x799c8b
// 00799c7f  8b442408             mov eax, dword ptr [esp + 8]
// 00799c83  50                   push eax
// 00799c84  6a00                 push 0
// 00799c86  e8d16cf0ff           call 0x6a095c
// 00799c8b  b801000000           mov eax, 1
// 00799c90  83c410               add esp, 0x10
// 00799c93  c21400               ret 0x14
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControlGallery.cpp (function ?GetAccessibleChild@CXTPControlGallery@@MAEJUtagVARIANT@@PAPAUIDispatch@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlGallery.cpp
