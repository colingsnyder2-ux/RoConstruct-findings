// roc 2007-03 00684110  unit: seg_00680000  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00684110
//
// 00684110  83ec08               sub esp, 8
// 00684113  56                   push esi
// 00684114  57                   push edi
// 00684115  6a0a                 push 0xa
// 00684117  ff15bced7700         call dword ptr [0x77edbc]
// 0068411d  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00684121  8bf8                 mov edi, eax
// 00684123  8d442408             lea eax, [esp + 8]
// 00684127  83c620               add esi, 0x20
// 0068412a  50                   push eax
// 0068412b  8bce                 mov ecx, esi
// 0068412d  ff1520db7700         call dword ptr [0x77db20]
// 00684133  50                   push eax
// 00684134  8bce                 mov ecx, esi
// 00684136  ff1554dd7700         call dword ptr [0x77dd54]
// 0068413c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00684140  8b5108               mov edx, dword ptr [ecx + 8]
// 00684143  50                   push eax
// 00684144  52                   push edx
// 00684145  ff15bcd07700         call dword ptr [0x77d0bc]
// 0068414b  8b442408             mov eax, dword ptr [esp + 8]
// 0068414f  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00684153  8d0c78               lea ecx, [eax + edi*2]
// 00684156  8b442414             mov eax, dword ptr [esp + 0x14]
// 0068415a  83c203               add edx, 3
// 0068415d  5f                   pop edi
// 0068415e  8908                 mov dword ptr [eax], ecx
// 00684160  895004               mov dword ptr [eax + 4], edx
// 00684163  5e                   pop esi
// 00684164  83c408               add esp, 8
// 00684167  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnMergeItemConstraint@CXTPPropertyGridItem@@UAE?AVCSize@@PAVCDC@@PAVCXTPPropertyGridItemConstraint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridItem.cpp