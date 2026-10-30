// roc 2012-06 009f2660  unit: CXTPPropertyGridItem  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f2660
//
// 009f2660  83ec08               sub esp, 8
// 009f2663  56                   push esi
// 009f2664  57                   push edi
// 009f2665  6a0a                 push 0xa
// 009f2667  ff15fc3bb200         call dword ptr [0xb23bfc]
// 009f266d  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 009f2671  8bf8                 mov edi, eax
// 009f2673  8d442408             lea eax, [esp + 8]
// 009f2677  83c620               add esi, 0x20
// 009f267a  50                   push eax
// 009f267b  8bce                 mov ecx, esi
// 009f267d  ff155846b200         call dword ptr [0xb24658]
// 009f2683  50                   push eax
// 009f2684  8bce                 mov ecx, esi
// 009f2686  ff159847b200         call dword ptr [0xb24798]
// 009f268c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 009f2690  8b5108               mov edx, dword ptr [ecx + 8]
// 009f2693  50                   push eax
// 009f2694  52                   push edx
// 009f2695  ff154021b200         call dword ptr [0xb22140]
// 009f269b  8b442408             mov eax, dword ptr [esp + 8]
// 009f269f  8b54240c             mov edx, dword ptr [esp + 0xc]
// 009f26a3  8d0c78               lea ecx, [eax + edi*2]
// 009f26a6  8b442414             mov eax, dword ptr [esp + 0x14]
// 009f26aa  83c203               add edx, 3
// 009f26ad  5f                   pop edi
// 009f26ae  8908                 mov dword ptr [eax], ecx
// 009f26b0  895004               mov dword ptr [eax + 4], edx
// 009f26b3  5e                   pop esi
// 009f26b4  83c408               add esp, 8
// 009f26b7  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnMergeItemConstraint@CXTPPropertyGridItem@@UAE?AVCSize@@PAVCDC@@PAVCXTPPropertyGridItemConstraint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridItem.cpp