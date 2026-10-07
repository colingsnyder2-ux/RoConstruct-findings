// roc 2007-08 006a4640  unit: CXTPShortcutManager  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a4640
//
// 006a4640  56                   push esi
// 006a4641  8b742408             mov esi, dword ptr [esp + 8]
// 006a4645  85f6                 test esi, esi
// 006a4647  57                   push edi
// 006a4648  8bf9                 mov edi, ecx
// 006a464a  7d05                 jge 0x6a4651
// 006a464c  e8cfb8f8ff           call 0x62ff20
// 006a4651  3b7708               cmp esi, dword ptr [edi + 8]
// 006a4654  7c0b                 jl 0x6a4661
// 006a4656  6aff                 push -1
// 006a4658  8d4601               lea eax, [esi + 1]
// 006a465b  50                   push eax
// 006a465c  e87ffeffff           call 0x6a44e0
// 006a4661  8b5704               mov edx, dword ptr [edi + 4]
// 006a4664  8d0c76               lea ecx, [esi + esi*2]
// 006a4667  8d044a               lea eax, [edx + ecx*2]
// 006a466a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006a466e  8b11                 mov edx, dword ptr [ecx]
// 006a4670  8910                 mov dword ptr [eax], edx
// 006a4672  668b4904             mov cx, word ptr [ecx + 4]
// 006a4676  5f                   pop edi
// 006a4677  66894804             mov word ptr [eax + 4], cx
// 006a467b  5e                   pop esi
// 006a467c  c20800               ret 8
// library xtp-11.2.2-vc8/Source\CommandBars\XTPShortcutManager.cpp (function ?SetAtGrow@?$CArray@UtagACCEL@@AAU1@@@QAEXHAAUtagACCEL@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPShortcutManager.cpp
