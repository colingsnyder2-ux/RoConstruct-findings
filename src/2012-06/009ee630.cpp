// roc 2012-06 009ee630  unit: CXTPPropertyGridView  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ee630
//
// 009ee630  56                   push esi
// 009ee631  8b742408             mov esi, dword ptr [esp + 8]
// 009ee635  57                   push edi
// 009ee636  8bf9                 mov edi, ecx
// 009ee638  85f6                 test esi, esi
// 009ee63a  7d05                 jge 0x9ee641
// 009ee63c  e87f3df9ff           call 0x9823c0
// 009ee641  3b7708               cmp esi, dword ptr [edi + 8]
// 009ee644  7c0b                 jl 0x9ee651
// 009ee646  6aff                 push -1
// 009ee648  8d4601               lea eax, [esi + 1]
// 009ee64b  50                   push eax
// 009ee64c  e87ffeffff           call 0x9ee4d0
// 009ee651  8b5704               mov edx, dword ptr [edi + 4]
// 009ee654  8d0cb6               lea ecx, [esi + esi*4]
// 009ee657  8d048a               lea eax, [edx + ecx*4]
// 009ee65a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 009ee65e  8b11                 mov edx, dword ptr [ecx]
// 009ee660  8910                 mov dword ptr [eax], edx
// 009ee662  8b5104               mov edx, dword ptr [ecx + 4]
// 009ee665  895004               mov dword ptr [eax + 4], edx
// 009ee668  8b5108               mov edx, dword ptr [ecx + 8]
// 009ee66b  895008               mov dword ptr [eax + 8], edx
// 009ee66e  8b510c               mov edx, dword ptr [ecx + 0xc]
// 009ee671  89500c               mov dword ptr [eax + 0xc], edx
// 009ee674  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 009ee677  5f                   pop edi
// 009ee678  894810               mov dword ptr [eax + 0x10], ecx
// 009ee67b  5e                   pop esi
// 009ee67c  c20800               ret 8
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?SetAtGrow@?$CArray@UWNDRECT@CXTPPropertyGridView@@AAU12@@@QAEXHAAUWNDRECT@CXTPPropertyGridView@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGridView.cpp
