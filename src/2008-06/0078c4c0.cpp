// from server: 100% by auto
// roc 2008-06 0078c4c0  unit: CXTSplitterWndThemeFactory  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0078c4c0
//
// 0078c4c0  8b542404             mov edx, dword ptr [esp + 4]
// 0078c4c4  8bc1                 mov eax, ecx
// 0078c4c6  85d2                 test edx, edx
// 0078c4c8  7433                 je 0x78c4fd
// 0078c4ca  56                   push esi
// 0078c4cb  57                   push edi
// 0078c4cc  8d7828               lea edi, [eax + 0x28]
// 0078c4cf  b917000000           mov ecx, 0x17
// 0078c4d4  8bf2                 mov esi, edx
// 0078c4d6  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0078c4d8  8b4824               mov ecx, dword ptr [eax + 0x24]
// 0078c4db  85c9                 test ecx, ecx
// 0078c4dd  741c                 je 0x78c4fb
// 0078c4df  8d74240c             lea esi, [esp + 0xc]
// 0078c4e3  56                   push esi
// 0078c4e4  52                   push edx
// 0078c4e5  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0078c4ed  8b01                 mov eax, dword ptr [ecx]
// 0078c4ef  8b500c               mov edx, dword ptr [eax + 0xc]
// 0078c4f2  6a00                 push 0
// 0078c4f4  6844040000           push 0x444
// 0078c4f9  ffd2                 call edx
// 0078c4fb  5f                   pop edi
// 0078c4fc  5e                   pop esi
// 0078c4fd  c20400               ret 4
// library xtp-11.2.2/Source\Common\XTPRichRender.cpp (function ?SetDefaultCharFormat@CXTPRichRender@@QAEXPAU_charformatw@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPRichRender.cpp
