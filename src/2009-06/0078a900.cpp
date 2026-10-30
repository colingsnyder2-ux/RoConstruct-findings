// roc 2009-06 0078a900  unit: CXTPPropertyGridItem  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0078a900
//
// 0078a900  83ec08               sub esp, 8
// 0078a903  56                   push esi
// 0078a904  57                   push edi
// 0078a905  6a0a                 push 0xa
// 0078a907  ff15dced8900         call dword ptr [0x89eddc]
// 0078a90d  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0078a911  8bf8                 mov edi, eax
// 0078a913  8d442408             lea eax, [esp + 8]
// 0078a917  83c620               add esi, 0x20
// 0078a91a  50                   push eax
// 0078a91b  8bce                 mov ecx, esi
// 0078a91d  ff1554fb8900         call dword ptr [0x89fb54]
// 0078a923  50                   push eax
// 0078a924  8bce                 mov ecx, esi
// 0078a926  ff15d0fc8900         call dword ptr [0x89fcd0]
// 0078a92c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0078a930  8b5108               mov edx, dword ptr [ecx + 8]
// 0078a933  50                   push eax
// 0078a934  52                   push edx
// 0078a935  ff1550e18900         call dword ptr [0x89e150]
// 0078a93b  8b442408             mov eax, dword ptr [esp + 8]
// 0078a93f  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0078a943  8d0c78               lea ecx, [eax + edi*2]
// 0078a946  8b442414             mov eax, dword ptr [esp + 0x14]
// 0078a94a  83c203               add edx, 3
// 0078a94d  5f                   pop edi
// 0078a94e  8908                 mov dword ptr [eax], ecx
// 0078a950  895004               mov dword ptr [eax + 4], edx
// 0078a953  5e                   pop esi
// 0078a954  83c408               add esp, 8
// 0078a957  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnMergeItemConstraint@CXTPPropertyGridItem@@UAE?AVCSize@@PAVCDC@@PAVCXTPPropertyGridItemConstraint@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridItem.cpp