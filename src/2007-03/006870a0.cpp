// roc 2007-03 006870a0  unit: seg_00680000  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006870a0
//
// 006870a0  56                   push esi
// 006870a1  8b742408             mov esi, dword ptr [esp + 8]
// 006870a5  85f6                 test esi, esi
// 006870a7  57                   push edi
// 006870a8  8bf9                 mov edi, ecx
// 006870aa  7d05                 jge 0x6870b1
// 006870ac  e8fd72f9ff           call 0x61e3ae
// 006870b1  3b7708               cmp esi, dword ptr [edi + 8]
// 006870b4  7c0b                 jl 0x6870c1
// 006870b6  6aff                 push -1
// 006870b8  8d4601               lea eax, [esi + 1]
// 006870bb  50                   push eax
// 006870bc  e87ffeffff           call 0x686f40
// 006870c1  8b5704               mov edx, dword ptr [edi + 4]
// 006870c4  8d0cb6               lea ecx, [esi + esi*4]
// 006870c7  8d048a               lea eax, [edx + ecx*4]
// 006870ca  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006870ce  8b11                 mov edx, dword ptr [ecx]
// 006870d0  8910                 mov dword ptr [eax], edx
// 006870d2  8b5104               mov edx, dword ptr [ecx + 4]
// 006870d5  895004               mov dword ptr [eax + 4], edx
// 006870d8  8b5108               mov edx, dword ptr [ecx + 8]
// 006870db  895008               mov dword ptr [eax + 8], edx
// 006870de  8b510c               mov edx, dword ptr [ecx + 0xc]
// 006870e1  89500c               mov dword ptr [eax + 0xc], edx
// 006870e4  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 006870e7  5f                   pop edi
// 006870e8  894810               mov dword ptr [eax + 0x10], ecx
// 006870eb  5e                   pop esi
// 006870ec  c20800               ret 8
// library xtp-11.2.2-vc8/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?SetAtGrow@?$CArray@UWNDRECT@CXTPPropertyGridView@@AAU12@@@QAEXHAAUWNDRECT@CXTPPropertyGridView@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/PropertyGrid/XTPPropertyGridView.cpp
