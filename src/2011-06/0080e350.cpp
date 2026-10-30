// roc 2011-06 0080e350  unit: PAVCXTPControlAction::?$CArray  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0080e350
//
// 0080e350  56                   push esi
// 0080e351  8bf1                 mov esi, ecx
// 0080e353  33d2                 xor edx, edx
// 0080e355  395664               cmp dword ptr [esi + 0x64], edx
// 0080e358  7e20                 jle 0x80e37a
// 0080e35a  8d9b00000000         lea ebx, [ebx]
// 0080e360  85d2                 test edx, edx
// 0080e362  7c18                 jl 0x80e37c
// 0080e364  3b5664               cmp edx, dword ptr [esi + 0x64]
// 0080e367  7d13                 jge 0x80e37c
// 0080e369  8b4660               mov eax, dword ptr [esi + 0x60]
// 0080e36c  8b0c90               mov ecx, dword ptr [eax + edx*4]
// 0080e36f  e87ce1ffff           call 0x80c4f0
// 0080e374  42                   inc edx
// 0080e375  3b5664               cmp edx, dword ptr [esi + 0x64]
// 0080e378  7ce6                 jl 0x80e360
// 0080e37a  5e                   pop esi
// 0080e37b  c3                   ret 
// 0080e37c  e889bfffff           call 0x80a30a
// copied from an identical function in another client (function ?RepositionControls@CXTPControlAction@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControl.cpp