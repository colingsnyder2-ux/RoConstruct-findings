// roc 2007-03 0066e6d0  unit: seg_00660000  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0066e6d0
//
// 0066e6d0  56                   push esi
// 0066e6d1  8bf1                 mov esi, ecx
// 0066e6d3  8b06                 mov eax, dword ptr [esi]
// 0066e6d5  8b5048               mov edx, dword ptr [eax + 0x48]
// 0066e6d8  ffd2                 call edx
// 0066e6da  83f802               cmp eax, 2
// 0066e6dd  740d                 je 0x66e6ec
// 0066e6df  8b06                 mov eax, dword ptr [esi]
// 0066e6e1  8b5048               mov edx, dword ptr [eax + 0x48]
// 0066e6e4  8bce                 mov ecx, esi
// 0066e6e6  ffd2                 call edx
// 0066e6e8  85c0                 test eax, eax
// 0066e6ea  750c                 jne 0x66e6f8
// 0066e6ec  8b442410             mov eax, dword ptr [esp + 0x10]
// 0066e6f0  2b442408             sub eax, dword ptr [esp + 8]
// 0066e6f4  5e                   pop esi
// 0066e6f5  c21000               ret 0x10
// 0066e6f8  8b442414             mov eax, dword ptr [esp + 0x14]
// 0066e6fc  2b44240c             sub eax, dword ptr [esp + 0xc]
// 0066e700  5e                   pop esi
// 0066e701  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?GetRectLength@CXTPTabManager@@QBEHVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
