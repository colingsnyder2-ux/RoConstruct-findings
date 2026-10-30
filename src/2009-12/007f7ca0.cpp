// roc 2009-12 007f7ca0  unit: IIHH::?$CMap  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f7ca0
//
// 007f7ca0  56                   push esi
// 007f7ca1  8bf1                 mov esi, ecx
// 007f7ca3  33d2                 xor edx, edx
// 007f7ca5  395664               cmp dword ptr [esi + 0x64], edx
// 007f7ca8  7e20                 jle 0x7f7cca
// 007f7caa  8d9b00000000         lea ebx, [ebx]
// 007f7cb0  85d2                 test edx, edx
// 007f7cb2  7c18                 jl 0x7f7ccc
// 007f7cb4  3b5664               cmp edx, dword ptr [esi + 0x64]
// 007f7cb7  7d13                 jge 0x7f7ccc
// 007f7cb9  8b4660               mov eax, dword ptr [esi + 0x60]
// 007f7cbc  8b0c90               mov ecx, dword ptr [eax + edx*4]
// 007f7cbf  e8fcdfffff           call 0x7f5cc0
// 007f7cc4  42                   inc edx
// 007f7cc5  3b5664               cmp edx, dword ptr [esi + 0x64]
// 007f7cc8  7ce6                 jl 0x7f7cb0
// 007f7cca  5e                   pop esi
// 007f7ccb  c3                   ret 
// 007f7ccc  e83bbeffff           call 0x7f3b0c
// copied from an identical function in another client (function ?RepositionControls@CXTPControlAction@@QAEXXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPControl.cpp