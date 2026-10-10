// roc 2008-06 00794a60  unit: CXTPRibbonGroup  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00794a60
//
// 00794a60  8b442408             mov eax, dword ptr [esp + 8]
// 00794a64  83ec08               sub esp, 8
// 00794a67  56                   push esi
// 00794a68  8bf1                 mov esi, ecx
// 00794a6a  8d4e10               lea ecx, [esi + 0x10]
// 00794a6d  51                   push ecx
// 00794a6e  89463c               mov dword ptr [esi + 0x3c], eax
// 00794a71  ff157c2c8000         call dword ptr [0x802c7c]
// 00794a77  8b442410             mov eax, dword ptr [esp + 0x10]
// 00794a7b  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 00794a7e  8b11                 mov edx, dword ptr [ecx]
// 00794a80  8b929c000000         mov edx, dword ptr [edx + 0x9c]
// 00794a86  50                   push eax
// 00794a87  8d442408             lea eax, [esp + 8]
// 00794a8b  50                   push eax
// 00794a8c  ffd2                 call edx
// 00794a8e  8b08                 mov ecx, dword ptr [eax]
// 00794a90  894e20               mov dword ptr [esi + 0x20], ecx
// 00794a93  8b5004               mov edx, dword ptr [eax + 4]
// 00794a96  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 00794a99  895624               mov dword ptr [esi + 0x24], edx
// 00794a9c  8b81c0000000         mov eax, dword ptr [ecx + 0xc0]
// 00794aa2  8906                 mov dword ptr [esi], eax
// 00794aa4  8b91c4000000         mov edx, dword ptr [ecx + 0xc4]
// 00794aaa  895604               mov dword ptr [esi + 4], edx
// 00794aad  8b81c8000000         mov eax, dword ptr [ecx + 0xc8]
// 00794ab3  894608               mov dword ptr [esi + 8], eax
// 00794ab6  8b91cc000000         mov edx, dword ptr [ecx + 0xcc]
// 00794abc  89560c               mov dword ptr [esi + 0xc], edx
// 00794abf  8b8198000000         mov eax, dword ptr [ecx + 0x98]
// 00794ac5  894630               mov dword ptr [esi + 0x30], eax
// 00794ac8  85c0                 test eax, eax
// 00794aca  750d                 jne 0x794ad9
// 00794acc  e89f68f1ff           call 0x6ab370
// 00794ad1  84c0                 test al, al
// 00794ad3  7804                 js 0x794ad9
// 00794ad5  33c0                 xor eax, eax
// 00794ad7  eb05                 jmp 0x794ade
// 00794ad9  b801000000           mov eax, 1
// 00794ade  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 00794ae1  894634               mov dword ptr [esi + 0x34], eax
// 00794ae4  e8a764f1ff           call 0x6aaf90
// 00794ae9  894638               mov dword ptr [esi + 0x38], eax
// 00794aec  c7462800000000       mov dword ptr [esi + 0x28], 0
// 00794af3  c7462c00000000       mov dword ptr [esi + 0x2c], 0
// 00794afa  c7464000000000       mov dword ptr [esi + 0x40], 0
// 00794b01  5e                   pop esi
// 00794b02  83c408               add esp, 8
// 00794b05  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\Ribbon\XTPRibbonGroups.cpp (function ?Attach@CONTROLINFO@CXTPRibbonGroup@@QAEXPAVCDC@@PAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonGroups.cpp
