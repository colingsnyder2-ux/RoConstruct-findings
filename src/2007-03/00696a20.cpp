// roc 2007-03 00696a20  unit: seg_00690000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00696a20
//
// 00696a20  56                   push esi
// 00696a21  8b742408             mov esi, dword ptr [esp + 8]
// 00696a25  85f6                 test esi, esi
// 00696a27  57                   push edi
// 00696a28  8bf9                 mov edi, ecx
// 00696a2a  7d05                 jge 0x696a31
// 00696a2c  e87d79f8ff           call 0x61e3ae
// 00696a31  3b7708               cmp esi, dword ptr [edi + 8]
// 00696a34  7c0b                 jl 0x696a41
// 00696a36  6aff                 push -1
// 00696a38  8d4601               lea eax, [esi + 1]
// 00696a3b  50                   push eax
// 00696a3c  e87ffeffff           call 0x6968c0
// 00696a41  8b5704               mov edx, dword ptr [edi + 4]
// 00696a44  8d0c76               lea ecx, [esi + esi*2]
// 00696a47  8d044a               lea eax, [edx + ecx*2]
// 00696a4a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00696a4e  8b11                 mov edx, dword ptr [ecx]
// 00696a50  8910                 mov dword ptr [eax], edx
// 00696a52  668b4904             mov cx, word ptr [ecx + 4]
// 00696a56  5f                   pop edi
// 00696a57  66894804             mov word ptr [eax + 4], cx
// 00696a5b  5e                   pop esi
// 00696a5c  c20800               ret 8
// library xtp-11.2.2-vc8/Source\CommandBars\XTPShortcutManager.cpp (function ?SetAtGrow@?$CArray@UtagACCEL@@AAU1@@@QAEXHAAUtagACCEL@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPShortcutManager.cpp
