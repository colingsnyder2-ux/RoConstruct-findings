// roc 2012-06 00986670  unit: IIHH::?$CMap  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00986670
//
// 00986670  56                   push esi
// 00986671  8bf1                 mov esi, ecx
// 00986673  33d2                 xor edx, edx
// 00986675  395664               cmp dword ptr [esi + 0x64], edx
// 00986678  7e20                 jle 0x98669a
// 0098667a  8d9b00000000         lea ebx, [ebx]
// 00986680  85d2                 test edx, edx
// 00986682  7c18                 jl 0x98669c
// 00986684  3b5664               cmp edx, dword ptr [esi + 0x64]
// 00986687  7d13                 jge 0x98669c
// 00986689  8b4660               mov eax, dword ptr [esi + 0x60]
// 0098668c  8b0c90               mov ecx, dword ptr [eax + edx*4]
// 0098668f  e8ece0ffff           call 0x984780
// 00986694  42                   inc edx
// 00986695  3b5664               cmp edx, dword ptr [esi + 0x64]
// 00986698  7ce6                 jl 0x986680
// 0098669a  5e                   pop esi
// 0098669b  c3                   ret 
// 0098669c  e81fbdffff           call 0x9823c0
// copied from an identical function in another client (function ?RepositionControls@CXTPControlAction@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControl.cpp