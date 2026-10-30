// roc 2007-03 0070f630  unit: seg_00700000  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0070f630
//
// 0070f630  56                   push esi
// 0070f631  8b7128               mov esi, dword ptr [ecx + 0x28]
// 0070f634  33c0                 xor eax, eax
// 0070f636  33d2                 xor edx, edx
// 0070f638  85f6                 test esi, esi
// 0070f63a  7e22                 jle 0x70f65e
// 0070f63c  53                   push ebx
// 0070f63d  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0070f641  57                   push edi
// 0070f642  8d7eff               lea edi, [esi - 1]
// 0070f645  8b0c93               mov ecx, dword ptr [ebx + edx*4]
// 0070f648  03c1                 add eax, ecx
// 0070f64a  3bd7                 cmp edx, edi
// 0070f64c  7407                 je 0x70f655
// 0070f64e  85c9                 test ecx, ecx
// 0070f650  7403                 je 0x70f655
// 0070f652  83c007               add eax, 7
// 0070f655  83c201               add edx, 1
// 0070f658  3bd6                 cmp edx, esi
// 0070f65a  7ce9                 jl 0x70f645
// 0070f65c  5f                   pop edi
// 0070f65d  5b                   pop ebx
// 0070f65e  5e                   pop esi
// 0070f65f  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Ribbon\XTPRibbonGroups.cpp (function ?_CalcSmartLayoutToolBar@CXTPRibbonGroups@@IAEHPAH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Ribbon/XTPRibbonGroups.cpp
