// from server: 100% by auto
// roc 2012-06 00997420  unit: CXTPCommandBar  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00997420
//
// 00997420  83ec2c               sub esp, 0x2c
// 00997423  6a2c                 push 0x2c
// 00997425  8d442404             lea eax, [esp + 4]
// 00997429  6a00                 push 0
// 0099742b  50                   push eax
// 0099742c  e843bffeff           call 0x983374
// 00997431  8b542444             mov edx, dword ptr [esp + 0x44]
// 00997435  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00997439  83c40c               add esp, 0xc
// 0099743c  6a00                 push 0
// 0099743e  6a00                 push 0
// 00997440  89542410             mov dword ptr [esp + 0x10], edx
// 00997444  8d54243c             lea edx, [esp + 0x3c]
// 00997448  52                   push edx
// 00997449  894c2410             mov dword ptr [esp + 0x10], ecx
// 0099744d  b801000000           mov eax, 1
// 00997452  6689442418           mov word ptr [esp + 0x18], ax
// 00997457  b920000000           mov ecx, 0x20
// 0099745c  6a00                 push 0
// 0099745e  8d442410             lea eax, [esp + 0x10]
// 00997462  66894c241e           mov word ptr [esp + 0x1e], cx
// 00997467  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0099746b  50                   push eax
// 0099746c  51                   push ecx
// 0099746d  c744241828000000     mov dword ptr [esp + 0x18], 0x28
// 00997475  c744242800000000     mov dword ptr [esp + 0x28], 0
// 0099747d  ff154c21b200         call dword ptr [0xb2214c]
// 00997483  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00997487  85c9                 test ecx, ecx
// 00997489  7406                 je 0x997491
// 0099748b  8b542434             mov edx, dword ptr [esp + 0x34]
// 0099748f  8911                 mov dword ptr [ecx], edx
// 00997491  83c42c               add esp, 0x2c
// 00997494  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPImageManager.cpp (function ?Create32BPPDIBSection@CXTPImageManager@@SAPAUHBITMAP__@@PAUHDC__@@HHPAPAE@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPImageManager.cpp
