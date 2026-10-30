// roc 2009-12 00865910  unit: CXTPPropertyGridItem  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00865910
//
// 00865910  83ec08               sub esp, 8
// 00865913  56                   push esi
// 00865914  57                   push edi
// 00865915  6a0a                 push 0xa
// 00865917  ff15dccb9800         call dword ptr [0x98cbdc]
// 0086591d  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00865921  8bf8                 mov edi, eax
// 00865923  8d442408             lea eax, [esp + 8]
// 00865927  83c620               add esi, 0x20
// 0086592a  50                   push eax
// 0086592b  8bce                 mov ecx, esi
// 0086592d  ff15b4dd9800         call dword ptr [0x98ddb4]
// 00865933  50                   push eax
// 00865934  8bce                 mov ecx, esi
// 00865936  ff1580de9800         call dword ptr [0x98de80]
// 0086593c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00865940  8b5108               mov edx, dword ptr [ecx + 8]
// 00865943  50                   push eax
// 00865944  52                   push edx
// 00865945  ff156cb19800         call dword ptr [0x98b16c]
// 0086594b  8b442408             mov eax, dword ptr [esp + 8]
// 0086594f  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00865953  8d0c78               lea ecx, [eax + edi*2]
// 00865956  8b442414             mov eax, dword ptr [esp + 0x14]
// 0086595a  83c203               add edx, 3
// 0086595d  5f                   pop edi
// 0086595e  8908                 mov dword ptr [eax], ecx
// 00865960  895004               mov dword ptr [eax + 4], edx
// 00865963  5e                   pop esi
// 00865964  83c408               add esp, 8
// 00865967  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnMergeItemConstraint@CXTPPropertyGridItem@@UAE?AVCSize@@PAVCDC@@PAVCXTPPropertyGridItemConstraint@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridItem.cpp