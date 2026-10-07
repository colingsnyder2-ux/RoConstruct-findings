// roc 2008-06 00795450  unit: CXTPRibbonGroup  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00795450
//
// 00795450  56                   push esi
// 00795451  8b7128               mov esi, dword ptr [ecx + 0x28]
// 00795454  33c0                 xor eax, eax
// 00795456  33d2                 xor edx, edx
// 00795458  85f6                 test esi, esi
// 0079545a  7e20                 jle 0x79547c
// 0079545c  53                   push ebx
// 0079545d  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00795461  57                   push edi
// 00795462  8d7eff               lea edi, [esi - 1]
// 00795465  8b0c93               mov ecx, dword ptr [ebx + edx*4]
// 00795468  03c1                 add eax, ecx
// 0079546a  3bd7                 cmp edx, edi
// 0079546c  7407                 je 0x795475
// 0079546e  85c9                 test ecx, ecx
// 00795470  7403                 je 0x795475
// 00795472  83c007               add eax, 7
// 00795475  42                   inc edx
// 00795476  3bd6                 cmp edx, esi
// 00795478  7ceb                 jl 0x795465
// 0079547a  5f                   pop edi
// 0079547b  5b                   pop ebx
// 0079547c  5e                   pop esi
// 0079547d  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonGroups.cpp (function ?_CalcSmartLayoutToolBar@CXTPRibbonGroups@@IAEHPAH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonGroups.cpp
