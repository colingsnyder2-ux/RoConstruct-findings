// roc 2008-06 007143e0  unit: CXTPPropertyGridView  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007143e0
//
// 007143e0  56                   push esi
// 007143e1  8b742408             mov esi, dword ptr [esp + 8]
// 007143e5  57                   push edi
// 007143e6  8bf9                 mov edi, ecx
// 007143e8  85f6                 test esi, esi
// 007143ea  7d05                 jge 0x7143f1
// 007143ec  e853c5f8ff           call 0x6a0944
// 007143f1  3b7708               cmp esi, dword ptr [edi + 8]
// 007143f4  7c0b                 jl 0x714401
// 007143f6  6aff                 push -1
// 007143f8  8d4601               lea eax, [esi + 1]
// 007143fb  50                   push eax
// 007143fc  e87ffeffff           call 0x714280
// 00714401  8b5704               mov edx, dword ptr [edi + 4]
// 00714404  8d0cb6               lea ecx, [esi + esi*4]
// 00714407  8d048a               lea eax, [edx + ecx*4]
// 0071440a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0071440e  8b11                 mov edx, dword ptr [ecx]
// 00714410  8910                 mov dword ptr [eax], edx
// 00714412  8b5104               mov edx, dword ptr [ecx + 4]
// 00714415  895004               mov dword ptr [eax + 4], edx
// 00714418  8b5108               mov edx, dword ptr [ecx + 8]
// 0071441b  895008               mov dword ptr [eax + 8], edx
// 0071441e  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00714421  89500c               mov dword ptr [eax + 0xc], edx
// 00714424  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 00714427  5f                   pop edi
// 00714428  894810               mov dword ptr [eax + 0x10], ecx
// 0071442b  5e                   pop esi
// 0071442c  c20800               ret 8
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?SetAtGrow@?$CArray@UWNDRECT@CXTPPropertyGridView@@AAU12@@@QAEXHAAUWNDRECT@CXTPPropertyGridView@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
