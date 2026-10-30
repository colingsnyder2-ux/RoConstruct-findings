// roc 2011-06 0087a0f0  unit: CXTPPropertyGridItem  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0087a0f0
//
// 0087a0f0  83ec08               sub esp, 8
// 0087a0f3  56                   push esi
// 0087a0f4  57                   push edi
// 0087a0f5  6a0a                 push 0xa
// 0087a0f7  ff15e019a400         call dword ptr [0xa419e0]
// 0087a0fd  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0087a101  8bf8                 mov edi, eax
// 0087a103  8d442408             lea eax, [esp + 8]
// 0087a107  83c620               add esi, 0x20
// 0087a10a  50                   push eax
// 0087a10b  8bce                 mov ecx, esi
// 0087a10d  ff15a826a400         call dword ptr [0xa426a8]
// 0087a113  50                   push eax
// 0087a114  8bce                 mov ecx, esi
// 0087a116  ff15c82da400         call dword ptr [0xa42dc8]
// 0087a11c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0087a120  8b5108               mov edx, dword ptr [ecx + 8]
// 0087a123  50                   push eax
// 0087a124  52                   push edx
// 0087a125  ff153801a400         call dword ptr [0xa40138]
// 0087a12b  8b442408             mov eax, dword ptr [esp + 8]
// 0087a12f  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0087a133  8d0c78               lea ecx, [eax + edi*2]
// 0087a136  8b442414             mov eax, dword ptr [esp + 0x14]
// 0087a13a  83c203               add edx, 3
// 0087a13d  5f                   pop edi
// 0087a13e  8908                 mov dword ptr [eax], ecx
// 0087a140  895004               mov dword ptr [eax + 4], edx
// 0087a143  5e                   pop esi
// 0087a144  83c408               add esp, 8
// 0087a147  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnMergeItemConstraint@CXTPPropertyGridItem@@UAE?AVCSize@@PAVCDC@@PAVCXTPPropertyGridItemConstraint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridItem.cpp