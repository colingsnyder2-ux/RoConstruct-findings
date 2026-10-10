// roc 2008-06 006fb260  unit: CXTPPropertyGrid  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fb260
//
// 006fb260  83ec20               sub esp, 0x20
// 006fb263  56                   push esi
// 006fb264  8bf1                 mov esi, ecx
// 006fb266  837e2000             cmp dword ptr [esi + 0x20], 0
// 006fb26a  7459                 je 0x6fb2c5
// 006fb26c  56                   push esi
// 006fb26d  8d4c2418             lea ecx, [esp + 0x18]
// 006fb271  e8bac8ffff           call 0x6f7b30
// 006fb276  8b442414             mov eax, dword ptr [esp + 0x14]
// 006fb27a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006fb27e  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 006fb282  89442404             mov dword ptr [esp + 4], eax
// 006fb286  8b442420             mov eax, dword ptr [esp + 0x20]
// 006fb28a  89442410             mov dword ptr [esp + 0x10], eax
// 006fb28e  2b4654               sub eax, dword ptr [esi + 0x54]
// 006fb291  894c2408             mov dword ptr [esp + 8], ecx
// 006fb295  89442408             mov dword ptr [esp + 8], eax
// 006fb299  8b442428             mov eax, dword ptr [esp + 0x28]
// 006fb29d  8954240c             mov dword ptr [esp + 0xc], edx
// 006fb2a1  85c0                 test eax, eax
// 006fb2a3  740f                 je 0x6fb2b4
// 006fb2a5  8b16                 mov edx, dword ptr [esi]
// 006fb2a7  50                   push eax
// 006fb2a8  8b8254010000         mov eax, dword ptr [edx + 0x154]
// 006fb2ae  6a02                 push 2
// 006fb2b0  8bce                 mov ecx, esi
// 006fb2b2  ffd0                 call eax
// 006fb2b4  8b5620               mov edx, dword ptr [esi + 0x20]
// 006fb2b7  6a00                 push 0
// 006fb2b9  8d4c2408             lea ecx, [esp + 8]
// 006fb2bd  51                   push ecx
// 006fb2be  52                   push edx
// 006fb2bf  ff15182e8000         call dword ptr [0x802e18]
// 006fb2c5  5e                   pop esi
// 006fb2c6  83c420               add esp, 0x20
// 006fb2c9  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?OnSelectionChanged@CXTPPropertyGrid@@MAEXPAVCXTPPropertyGridItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGrid.cpp
