// from server: 100% by auto
// roc 2011-06 0089f990  unit: CXTPShortcutManager  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0089f990
//
// 0089f990  56                   push esi
// 0089f991  8b742408             mov esi, dword ptr [esp + 8]
// 0089f995  57                   push edi
// 0089f996  8bf9                 mov edi, ecx
// 0089f998  85f6                 test esi, esi
// 0089f99a  7d05                 jge 0x89f9a1
// 0089f99c  e869a9f6ff           call 0x80a30a
// 0089f9a1  3b7708               cmp esi, dword ptr [edi + 8]
// 0089f9a4  7c0b                 jl 0x89f9b1
// 0089f9a6  6aff                 push -1
// 0089f9a8  8d4601               lea eax, [esi + 1]
// 0089f9ab  50                   push eax
// 0089f9ac  e87ffeffff           call 0x89f830
// 0089f9b1  8b5704               mov edx, dword ptr [edi + 4]
// 0089f9b4  8d0c76               lea ecx, [esi + esi*2]
// 0089f9b7  8d044a               lea eax, [edx + ecx*2]
// 0089f9ba  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0089f9be  8b11                 mov edx, dword ptr [ecx]
// 0089f9c0  8910                 mov dword ptr [eax], edx
// 0089f9c2  668b4904             mov cx, word ptr [ecx + 4]
// 0089f9c6  5f                   pop edi
// 0089f9c7  66894804             mov word ptr [eax + 4], cx
// 0089f9cb  5e                   pop esi
// 0089f9cc  c20800               ret 8
// library xtp-15.2.1/Source\CommandBars\XTPShortcutManager.cpp (function ?SetAtGrow@?$CArray@UtagACCEL@@AAU1@@@QAEXHAAUtagACCEL@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPShortcutManager.cpp
