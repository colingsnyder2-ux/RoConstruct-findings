// from server: 100% by auto
// roc 2012-06 00a17dd0  unit: CXTPShortcutManager  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a17dd0
//
// 00a17dd0  56                   push esi
// 00a17dd1  8b742408             mov esi, dword ptr [esp + 8]
// 00a17dd5  57                   push edi
// 00a17dd6  8bf9                 mov edi, ecx
// 00a17dd8  85f6                 test esi, esi
// 00a17dda  7d05                 jge 0xa17de1
// 00a17ddc  e8dfa5f6ff           call 0x9823c0
// 00a17de1  3b7708               cmp esi, dword ptr [edi + 8]
// 00a17de4  7c0b                 jl 0xa17df1
// 00a17de6  6aff                 push -1
// 00a17de8  8d4601               lea eax, [esi + 1]
// 00a17deb  50                   push eax
// 00a17dec  e87ffeffff           call 0xa17c70
// 00a17df1  8b5704               mov edx, dword ptr [edi + 4]
// 00a17df4  8d0c76               lea ecx, [esi + esi*2]
// 00a17df7  8d044a               lea eax, [edx + ecx*2]
// 00a17dfa  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a17dfe  8b11                 mov edx, dword ptr [ecx]
// 00a17e00  8910                 mov dword ptr [eax], edx
// 00a17e02  668b4904             mov cx, word ptr [ecx + 4]
// 00a17e06  5f                   pop edi
// 00a17e07  66894804             mov word ptr [eax + 4], cx
// 00a17e0b  5e                   pop esi
// 00a17e0c  c20800               ret 8
// library xtp-15.2.1/Source\CommandBars\XTPShortcutManager.cpp (function ?SetAtGrow@?$CArray@UtagACCEL@@AAU1@@@QAEXHAAUtagACCEL@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPShortcutManager.cpp
