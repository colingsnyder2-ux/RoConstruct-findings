// roc 2009-12 008f0f60  unit: CXTPControlGallery  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f0f60
//
// 008f0f60  8b41fc               mov eax, dword ptr [ecx - 4]
// 008f0f63  83ec10               sub esp, 0x10
// 008f0f66  50                   push eax
// 008f0f67  8d4c2404             lea ecx, [esp + 4]
// 008f0f6b  e8c02bf0ff           call 0x7f3b30
// 008f0f70  8b442404             mov eax, dword ptr [esp + 4]
// 008f0f74  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008f0f78  c70100000000         mov dword ptr [ecx], 0
// 008f0f7e  85c0                 test eax, eax
// 008f0f80  7406                 je 0x8f0f88
// 008f0f82  8b1424               mov edx, dword ptr [esp]
// 008f0f85  895004               mov dword ptr [eax + 4], edx
// 008f0f88  837c240c00           cmp dword ptr [esp + 0xc], 0
// 008f0f8d  740c                 je 0x8f0f9b
// 008f0f8f  8b442408             mov eax, dword ptr [esp + 8]
// 008f0f93  50                   push eax
// 008f0f94  6a00                 push 0
// 008f0f96  e8892bf0ff           call 0x7f3b24
// 008f0f9b  b801000000           mov eax, 1
// 008f0fa0  83c410               add esp, 0x10
// 008f0fa3  c21400               ret 0x14
// copied from an identical function in another client (function ?GetAccessibleChild@CXTPControlGallery@@MAEJUtagVARIANT@@PAPAUIDispatch@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlGallery.cpp