// roc 2007-08 0070ecd0  unit: CXTSplitterWndThemeFactory  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0070ecd0
//
// 0070ecd0  8b542404             mov edx, dword ptr [esp + 4]
// 0070ecd4  85d2                 test edx, edx
// 0070ecd6  8bc1                 mov eax, ecx
// 0070ecd8  7433                 je 0x70ed0d
// 0070ecda  56                   push esi
// 0070ecdb  57                   push edi
// 0070ecdc  8d7828               lea edi, [eax + 0x28]
// 0070ecdf  b917000000           mov ecx, 0x17
// 0070ece4  8bf2                 mov esi, edx
// 0070ece6  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0070ece8  8b4824               mov ecx, dword ptr [eax + 0x24]
// 0070eceb  85c9                 test ecx, ecx
// 0070eced  741c                 je 0x70ed0b
// 0070ecef  8d74240c             lea esi, [esp + 0xc]
// 0070ecf3  56                   push esi
// 0070ecf4  52                   push edx
// 0070ecf5  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0070ecfd  8b01                 mov eax, dword ptr [ecx]
// 0070ecff  8b500c               mov edx, dword ptr [eax + 0xc]
// 0070ed02  6a00                 push 0
// 0070ed04  6844040000           push 0x444
// 0070ed09  ffd2                 call edx
// 0070ed0b  5f                   pop edi
// 0070ed0c  5e                   pop esi
// 0070ed0d  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Common\XTPRichRender.cpp (function ?SetDefaultCharFormat@CXTPRichRender@@QAEXPAU_charformatw@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPRichRender.cpp
