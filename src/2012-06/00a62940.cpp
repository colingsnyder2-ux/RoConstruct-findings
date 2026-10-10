// roc 2012-06 00a62940  unit: CXTColorBase  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a62940
//
// 00a62940  56                   push esi
// 00a62941  8bf1                 mov esi, ecx
// 00a62943  e896fdf1ff           call 0x9826de
// 00a62948  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a6294b  50                   push eax
// 00a6294c  ff15803ab200         call dword ptr [0xb23a80]
// 00a62952  50                   push eax
// 00a62953  e80efdf1ff           call 0x982666
// 00a62958  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a6295c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00a62960  8b16                 mov edx, dword ptr [esi]
// 00a62962  8b924c010000         mov edx, dword ptr [edx + 0x14c]
// 00a62968  50                   push eax
// 00a62969  51                   push ecx
// 00a6296a  8bce                 mov ecx, esi
// 00a6296c  ffd2                 call edx
// 00a6296e  ff15e83bb200         call dword ptr [0xb23be8]
// 00a62974  50                   push eax
// 00a62975  e8ecfcf1ff           call 0x982666
// 00a6297a  3bc6                 cmp eax, esi
// 00a6297c  7407                 je 0xa62985
// 00a6297e  8bce                 mov ecx, esi
// 00a62980  e81ffbf1ff           call 0x9824a4
// 00a62985  5e                   pop esi
// 00a62986  c20c00               ret 0xc
// library xtp-15.2.1-shared-mfc/Source\Controls\Dialog\XTPColorPageCustom.cpp (function ?OnLButtonDown@CXTPColorBase@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/Controls/Dialog/XTPColorPageCustom.cpp
