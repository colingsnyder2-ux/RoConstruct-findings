// roc 2012-06 00a729c0  unit: CXTPRibbonGroup  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a729c0
//
// 00a729c0  56                   push esi
// 00a729c1  8b7128               mov esi, dword ptr [ecx + 0x28]
// 00a729c4  33c0                 xor eax, eax
// 00a729c6  33d2                 xor edx, edx
// 00a729c8  85f6                 test esi, esi
// 00a729ca  7e20                 jle 0xa729ec
// 00a729cc  53                   push ebx
// 00a729cd  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00a729d1  57                   push edi
// 00a729d2  8d7eff               lea edi, [esi - 1]
// 00a729d5  8b0c93               mov ecx, dword ptr [ebx + edx*4]
// 00a729d8  03c1                 add eax, ecx
// 00a729da  3bd7                 cmp edx, edi
// 00a729dc  7407                 je 0xa729e5
// 00a729de  85c9                 test ecx, ecx
// 00a729e0  7403                 je 0xa729e5
// 00a729e2  83c007               add eax, 7
// 00a729e5  42                   inc edx
// 00a729e6  3bd6                 cmp edx, esi
// 00a729e8  7ceb                 jl 0xa729d5
// 00a729ea  5f                   pop edi
// 00a729eb  5b                   pop ebx
// 00a729ec  5e                   pop esi
// 00a729ed  c20400               ret 4
// library xtp-15.2.1/Source\Ribbon\XTPRibbonGroups.cpp (function ?_CalcSmartLayoutToolBar@CXTPRibbonGroups@@IAEHPAH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Ribbon/XTPRibbonGroups.cpp
