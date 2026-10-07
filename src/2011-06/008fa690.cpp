// roc 2011-06 008fa690  unit: CXTPRibbonGroup  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008fa690
//
// 008fa690  56                   push esi
// 008fa691  8b7128               mov esi, dword ptr [ecx + 0x28]
// 008fa694  33c0                 xor eax, eax
// 008fa696  33d2                 xor edx, edx
// 008fa698  85f6                 test esi, esi
// 008fa69a  7e20                 jle 0x8fa6bc
// 008fa69c  53                   push ebx
// 008fa69d  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 008fa6a1  57                   push edi
// 008fa6a2  8d7eff               lea edi, [esi - 1]
// 008fa6a5  8b0c93               mov ecx, dword ptr [ebx + edx*4]
// 008fa6a8  03c1                 add eax, ecx
// 008fa6aa  3bd7                 cmp edx, edi
// 008fa6ac  7407                 je 0x8fa6b5
// 008fa6ae  85c9                 test ecx, ecx
// 008fa6b0  7403                 je 0x8fa6b5
// 008fa6b2  83c007               add eax, 7
// 008fa6b5  42                   inc edx
// 008fa6b6  3bd6                 cmp edx, esi
// 008fa6b8  7ceb                 jl 0x8fa6a5
// 008fa6ba  5f                   pop edi
// 008fa6bb  5b                   pop ebx
// 008fa6bc  5e                   pop esi
// 008fa6bd  c20400               ret 4
// library xtp-15.2.1/Source\Ribbon\XTPRibbonGroups.cpp (function ?_CalcSmartLayoutToolBar@CXTPRibbonGroups@@IAEHPAH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Ribbon/XTPRibbonGroups.cpp
