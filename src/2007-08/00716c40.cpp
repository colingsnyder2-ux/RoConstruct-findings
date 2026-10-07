// roc 2007-08 00716c40  unit: PAVCXTPRibbonTabContextHeader::?$CArray  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00716c40
//
// 00716c40  56                   push esi
// 00716c41  8b7128               mov esi, dword ptr [ecx + 0x28]
// 00716c44  33c0                 xor eax, eax
// 00716c46  33d2                 xor edx, edx
// 00716c48  85f6                 test esi, esi
// 00716c4a  7e22                 jle 0x716c6e
// 00716c4c  53                   push ebx
// 00716c4d  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00716c51  57                   push edi
// 00716c52  8d7eff               lea edi, [esi - 1]
// 00716c55  8b0c93               mov ecx, dword ptr [ebx + edx*4]
// 00716c58  03c1                 add eax, ecx
// 00716c5a  3bd7                 cmp edx, edi
// 00716c5c  7407                 je 0x716c65
// 00716c5e  85c9                 test ecx, ecx
// 00716c60  7403                 je 0x716c65
// 00716c62  83c007               add eax, 7
// 00716c65  83c201               add edx, 1
// 00716c68  3bd6                 cmp edx, esi
// 00716c6a  7ce9                 jl 0x716c55
// 00716c6c  5f                   pop edi
// 00716c6d  5b                   pop ebx
// 00716c6e  5e                   pop esi
// 00716c6f  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Ribbon\XTPRibbonGroups.cpp (function ?_CalcSmartLayoutToolBar@CXTPRibbonGroups@@IAEHPAH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Ribbon/XTPRibbonGroups.cpp
