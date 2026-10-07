// roc 2007-08 0068a2e0  unit: CXTPControlTabWorkspace  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0068a2e0
//
// 0068a2e0  56                   push esi
// 0068a2e1  8bf1                 mov esi, ecx
// 0068a2e3  8b06                 mov eax, dword ptr [esi]
// 0068a2e5  8b5048               mov edx, dword ptr [eax + 0x48]
// 0068a2e8  ffd2                 call edx
// 0068a2ea  83f802               cmp eax, 2
// 0068a2ed  740d                 je 0x68a2fc
// 0068a2ef  8b06                 mov eax, dword ptr [esi]
// 0068a2f1  8b5048               mov edx, dword ptr [eax + 0x48]
// 0068a2f4  8bce                 mov ecx, esi
// 0068a2f6  ffd2                 call edx
// 0068a2f8  85c0                 test eax, eax
// 0068a2fa  750c                 jne 0x68a308
// 0068a2fc  8b442410             mov eax, dword ptr [esp + 0x10]
// 0068a300  2b442408             sub eax, dword ptr [esp + 8]
// 0068a304  5e                   pop esi
// 0068a305  c21000               ret 0x10
// 0068a308  8b442414             mov eax, dword ptr [esp + 0x14]
// 0068a30c  2b44240c             sub eax, dword ptr [esp + 0xc]
// 0068a310  5e                   pop esi
// 0068a311  c21000               ret 0x10
// library xtp-11.2.2-vc8/Source\CommandBars\XTPTabClientWnd.cpp (function ?GetRectLength@CXTPTabManager@@QBEHVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPTabClientWnd.cpp
