// roc 2010-06 007abe70  unit: PAVCXTPControlAction::?$CArray  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007abe70
//
// 007abe70  56                   push esi
// 007abe71  8bf1                 mov esi, ecx
// 007abe73  33d2                 xor edx, edx
// 007abe75  395664               cmp dword ptr [esi + 0x64], edx
// 007abe78  7e20                 jle 0x7abe9a
// 007abe7a  8d9b00000000         lea ebx, [ebx]
// 007abe80  85d2                 test edx, edx
// 007abe82  7c18                 jl 0x7abe9c
// 007abe84  3b5664               cmp edx, dword ptr [esi + 0x64]
// 007abe87  7d13                 jge 0x7abe9c
// 007abe89  8b4660               mov eax, dword ptr [esi + 0x60]
// 007abe8c  8b0c90               mov ecx, dword ptr [eax + edx*4]
// 007abe8f  e86cdfffff           call 0x7a9e00
// 007abe94  42                   inc edx
// 007abe95  3b5664               cmp edx, dword ptr [esi + 0x64]
// 007abe98  7ce6                 jl 0x7abe80
// 007abe9a  5e                   pop esi
// 007abe9b  c3                   ret 
// 007abe9c  e8abbdffff           call 0x7a7c4c
// copied from an identical function in another client (function ?RepositionControls@CXTPControlAction@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControl.cpp