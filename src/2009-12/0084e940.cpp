// roc 2009-12 0084e940  unit: CXTPPropertyGrid  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084e940
//
// 0084e940  83ec20               sub esp, 0x20
// 0084e943  56                   push esi
// 0084e944  8bf1                 mov esi, ecx
// 0084e946  837e2000             cmp dword ptr [esi + 0x20], 0
// 0084e94a  7459                 je 0x84e9a5
// 0084e94c  56                   push esi
// 0084e94d  8d4c2418             lea ecx, [esp + 0x18]
// 0084e951  e87ac9ffff           call 0x84b2d0
// 0084e956  8b442414             mov eax, dword ptr [esp + 0x14]
// 0084e95a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0084e95e  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0084e962  89442404             mov dword ptr [esp + 4], eax
// 0084e966  8b442420             mov eax, dword ptr [esp + 0x20]
// 0084e96a  89442410             mov dword ptr [esp + 0x10], eax
// 0084e96e  2b4654               sub eax, dword ptr [esi + 0x54]
// 0084e971  894c2408             mov dword ptr [esp + 8], ecx
// 0084e975  89442408             mov dword ptr [esp + 8], eax
// 0084e979  8b442428             mov eax, dword ptr [esp + 0x28]
// 0084e97d  8954240c             mov dword ptr [esp + 0xc], edx
// 0084e981  85c0                 test eax, eax
// 0084e983  740f                 je 0x84e994
// 0084e985  8b16                 mov edx, dword ptr [esi]
// 0084e987  50                   push eax
// 0084e988  8b8254010000         mov eax, dword ptr [edx + 0x154]
// 0084e98e  6a02                 push 2
// 0084e990  8bce                 mov ecx, esi
// 0084e992  ffd0                 call eax
// 0084e994  8b5620               mov edx, dword ptr [esi + 0x20]
// 0084e997  6a00                 push 0
// 0084e999  8d4c2408             lea ecx, [esp + 8]
// 0084e99d  51                   push ecx
// 0084e99e  52                   push edx
// 0084e99f  ff15e8cb9800         call dword ptr [0x98cbe8]
// 0084e9a5  5e                   pop esi
// 0084e9a6  83c420               add esp, 0x20
// 0084e9a9  c20400               ret 4
// copied from an identical function in another client (function ?OnSelectionChanged@CXTPPropertyGrid@@MAEXPAVCXTPPropertyGridItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGrid.cpp