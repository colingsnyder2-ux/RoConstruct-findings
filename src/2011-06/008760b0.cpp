// from server: 100% by auto
// roc 2011-06 008760b0  unit: CXTPPropertyGridView  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008760b0
//
// 008760b0  56                   push esi
// 008760b1  8b742408             mov esi, dword ptr [esp + 8]
// 008760b5  57                   push edi
// 008760b6  8bf9                 mov edi, ecx
// 008760b8  85f6                 test esi, esi
// 008760ba  7d05                 jge 0x8760c1
// 008760bc  e84942f9ff           call 0x80a30a
// 008760c1  3b7708               cmp esi, dword ptr [edi + 8]
// 008760c4  7c0b                 jl 0x8760d1
// 008760c6  6aff                 push -1
// 008760c8  8d4601               lea eax, [esi + 1]
// 008760cb  50                   push eax
// 008760cc  e87ffeffff           call 0x875f50
// 008760d1  8b5704               mov edx, dword ptr [edi + 4]
// 008760d4  8d0cb6               lea ecx, [esi + esi*4]
// 008760d7  8d048a               lea eax, [edx + ecx*4]
// 008760da  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008760de  8b11                 mov edx, dword ptr [ecx]
// 008760e0  8910                 mov dword ptr [eax], edx
// 008760e2  8b5104               mov edx, dword ptr [ecx + 4]
// 008760e5  895004               mov dword ptr [eax + 4], edx
// 008760e8  8b5108               mov edx, dword ptr [ecx + 8]
// 008760eb  895008               mov dword ptr [eax + 8], edx
// 008760ee  8b510c               mov edx, dword ptr [ecx + 0xc]
// 008760f1  89500c               mov dword ptr [eax + 0xc], edx
// 008760f4  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 008760f7  5f                   pop edi
// 008760f8  894810               mov dword ptr [eax + 0x10], ecx
// 008760fb  5e                   pop esi
// 008760fc  c20800               ret 8
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?SetAtGrow@?$CArray@UWNDRECT@CXTPPropertyGridView@@AAU12@@@QAEXHAAUWNDRECT@CXTPPropertyGridView@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGridView.cpp
