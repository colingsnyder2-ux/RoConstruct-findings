// roc 2009-06 00721550  unit: PAVCXTPControlAction::?$CArray  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00721550
//
// 00721550  56                   push esi
// 00721551  8bf1                 mov esi, ecx
// 00721553  33d2                 xor edx, edx
// 00721555  395664               cmp dword ptr [esi + 0x64], edx
// 00721558  7e20                 jle 0x72157a
// 0072155a  8d9b00000000         lea ebx, [ebx]
// 00721560  85d2                 test edx, edx
// 00721562  7c18                 jl 0x72157c
// 00721564  3b5664               cmp edx, dword ptr [esi + 0x64]
// 00721567  7d13                 jge 0x72157c
// 00721569  8b4660               mov eax, dword ptr [esi + 0x60]
// 0072156c  8b0c90               mov ecx, dword ptr [eax + edx*4]
// 0072156f  e82ce1ffff           call 0x71f6a0
// 00721574  42                   inc edx
// 00721575  3b5664               cmp edx, dword ptr [esi + 0x64]
// 00721578  7ce6                 jl 0x721560
// 0072157a  5e                   pop esi
// 0072157b  c3                   ret 
// 0072157c  e86377ffff           call 0x718ce4
// copied from an identical function in another client (function ?RepositionControls@CXTPControlAction@@QAEXXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPControl.cpp