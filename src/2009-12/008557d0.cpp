// roc 2009-12 008557d0  unit: CXTPControlTabWorkspace  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008557d0
//
// 008557d0  56                   push esi
// 008557d1  8bf1                 mov esi, ecx
// 008557d3  8b06                 mov eax, dword ptr [esi]
// 008557d5  8b5048               mov edx, dword ptr [eax + 0x48]
// 008557d8  ffd2                 call edx
// 008557da  83f802               cmp eax, 2
// 008557dd  740d                 je 0x8557ec
// 008557df  8b06                 mov eax, dword ptr [esi]
// 008557e1  8b5048               mov edx, dword ptr [eax + 0x48]
// 008557e4  8bce                 mov ecx, esi
// 008557e6  ffd2                 call edx
// 008557e8  85c0                 test eax, eax
// 008557ea  750c                 jne 0x8557f8
// 008557ec  8b442410             mov eax, dword ptr [esp + 0x10]
// 008557f0  2b442408             sub eax, dword ptr [esp + 8]
// 008557f4  5e                   pop esi
// 008557f5  c21000               ret 0x10
// 008557f8  8b442414             mov eax, dword ptr [esp + 0x14]
// 008557fc  2b44240c             sub eax, dword ptr [esp + 0xc]
// 00855800  5e                   pop esi
// 00855801  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?GetRectLength@CXTPTabManager@@QBEHVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
