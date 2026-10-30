// roc 2010-06 008198d0  unit: CXTPPropertyGridItem  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008198d0
//
// 008198d0  83ec08               sub esp, 8
// 008198d3  56                   push esi
// 008198d4  57                   push edi
// 008198d5  6a0a                 push 0xa
// 008198d7  ff156cba9e00         call dword ptr [0x9eba6c]
// 008198dd  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 008198e1  8bf8                 mov edi, eax
// 008198e3  8d442408             lea eax, [esp + 8]
// 008198e7  83c620               add esi, 0x20
// 008198ea  50                   push eax
// 008198eb  8bce                 mov ecx, esi
// 008198ed  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 008198f3  50                   push eax
// 008198f4  8bce                 mov ecx, esi
// 008198f6  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 008198fc  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00819900  8b5108               mov edx, dword ptr [ecx + 8]
// 00819903  50                   push eax
// 00819904  52                   push edx
// 00819905  ff1594a19e00         call dword ptr [0x9ea194]
// 0081990b  8b442408             mov eax, dword ptr [esp + 8]
// 0081990f  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00819913  8d0c78               lea ecx, [eax + edi*2]
// 00819916  8b442414             mov eax, dword ptr [esp + 0x14]
// 0081991a  83c203               add edx, 3
// 0081991d  5f                   pop edi
// 0081991e  8908                 mov dword ptr [eax], ecx
// 00819920  895004               mov dword ptr [eax + 4], edx
// 00819923  5e                   pop esi
// 00819924  83c408               add esp, 8
// 00819927  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnMergeItemConstraint@CXTPPropertyGridItem@@UAE?AVCSize@@PAVCDC@@PAVCXTPPropertyGridItemConstraint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridItem.cpp