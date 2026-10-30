// roc 2012-06 009e25b0  unit: CXTPPropertyGrid  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e25b0
//
// 009e25b0  83ec20               sub esp, 0x20
// 009e25b3  56                   push esi
// 009e25b4  8bf1                 mov esi, ecx
// 009e25b6  837e2000             cmp dword ptr [esi + 0x20], 0
// 009e25ba  7459                 je 0x9e2615
// 009e25bc  56                   push esi
// 009e25bd  8d4c2418             lea ecx, [esp + 0x18]
// 009e25c1  e8da2bffff           call 0x9d51a0
// 009e25c6  8b442414             mov eax, dword ptr [esp + 0x14]
// 009e25ca  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 009e25ce  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 009e25d2  89442404             mov dword ptr [esp + 4], eax
// 009e25d6  8b442420             mov eax, dword ptr [esp + 0x20]
// 009e25da  89442410             mov dword ptr [esp + 0x10], eax
// 009e25de  2b4654               sub eax, dword ptr [esi + 0x54]
// 009e25e1  894c2408             mov dword ptr [esp + 8], ecx
// 009e25e5  89442408             mov dword ptr [esp + 8], eax
// 009e25e9  8b442428             mov eax, dword ptr [esp + 0x28]
// 009e25ed  8954240c             mov dword ptr [esp + 0xc], edx
// 009e25f1  85c0                 test eax, eax
// 009e25f3  740f                 je 0x9e2604
// 009e25f5  8b16                 mov edx, dword ptr [esi]
// 009e25f7  50                   push eax
// 009e25f8  8b8254010000         mov eax, dword ptr [edx + 0x154]
// 009e25fe  6a02                 push 2
// 009e2600  8bce                 mov ecx, esi
// 009e2602  ffd0                 call eax
// 009e2604  8b5620               mov edx, dword ptr [esi + 0x20]
// 009e2607  6a00                 push 0
// 009e2609  8d4c2408             lea ecx, [esp + 8]
// 009e260d  51                   push ecx
// 009e260e  52                   push edx
// 009e260f  ff15ec3bb200         call dword ptr [0xb23bec]
// 009e2615  5e                   pop esi
// 009e2616  83c420               add esp, 0x20
// 009e2619  c20400               ret 4
// library xtp-15.2.1-shared-mfc/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?OnSelectionChanged@CXTPPropertyGrid@@MAEXPAVCXTPPropertyGridItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/PropertyGrid/XTPPropertyGrid.cpp
