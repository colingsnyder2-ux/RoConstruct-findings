// roc 2007-03 0066e640  unit: seg_00660000  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0066e640
//
// 0066e640  56                   push esi
// 0066e641  8b742408             mov esi, dword ptr [esp + 8]
// 0066e645  85f6                 test esi, esi
// 0066e647  57                   push edi
// 0066e648  8bf9                 mov edi, ecx
// 0066e64a  7d05                 jge 0x66e651
// 0066e64c  e85dfdfaff           call 0x61e3ae
// 0066e651  3b7708               cmp esi, dword ptr [edi + 8]
// 0066e654  7c0b                 jl 0x66e661
// 0066e656  6aff                 push -1
// 0066e658  8d4601               lea eax, [esi + 1]
// 0066e65b  50                   push eax
// 0066e65c  e88ffeffff           call 0x66e4f0
// 0066e661  8b442410             mov eax, dword ptr [esp + 0x10]
// 0066e665  8b08                 mov ecx, dword ptr [eax]
// 0066e667  c1e604               shl esi, 4
// 0066e66a  037704               add esi, dword ptr [edi + 4]
// 0066e66d  5f                   pop edi
// 0066e66e  890e                 mov dword ptr [esi], ecx
// 0066e670  8b5004               mov edx, dword ptr [eax + 4]
// 0066e673  895604               mov dword ptr [esi + 4], edx
// 0066e676  8b4808               mov ecx, dword ptr [eax + 8]
// 0066e679  894e08               mov dword ptr [esi + 8], ecx
// 0066e67c  8b500c               mov edx, dword ptr [eax + 0xc]
// 0066e67f  89560c               mov dword ptr [esi + 0xc], edx
// 0066e682  5e                   pop esi
// 0066e683  c20800               ret 8
// library xtp-11.2.2-vc8/Source\CommandBars\XTPCommandBarAnimation.cpp (function ?SetAtGrow@?$CArray@UtagRECT@@AAU1@@@QAEXHAAUtagRECT@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPCommandBarAnimation.cpp
