// roc 2010-06 0042b3e0  unit: VCMDIFrameWnd::?$CXTPFrameWndBase  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0042b3e0
//
// 0042b3e0  8b442410             mov eax, dword ptr [esp + 0x10]
// 0042b3e4  8b542408             mov edx, dword ptr [esp + 8]
// 0042b3e8  56                   push esi
// 0042b3e9  50                   push eax
// 0042b3ea  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0042b3ee  8bf1                 mov esi, ecx
// 0042b3f0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0042b3f4  51                   push ecx
// 0042b3f5  52                   push edx
// 0042b3f6  50                   push eax
// 0042b3f7  8bce                 mov ecx, esi
// 0042b3f9  e8cecf3700           call 0x7a83cc
// 0042b3fe  85c0                 test eax, eax
// 0042b400  7504                 jne 0x42b406
// 0042b402  5e                   pop esi
// 0042b403  c21000               ret 0x10
// 0042b406  8b8eec000000         mov ecx, dword ptr [esi + 0xec]
// 0042b40c  85c9                 test ecx, ecx
// 0042b40e  7412                 je 0x42b422
// 0042b410  e89bcd3900           call 0x7c81b0
// 0042b415  83783400             cmp dword ptr [eax + 0x34], 0
// 0042b419  7407                 je 0x42b422
// 0042b41b  c7466000000000       mov dword ptr [esi + 0x60], 0
// 0042b422  b801000000           mov eax, 1
// 0042b427  5e                   pop esi
// 0042b428  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPFrameWnd.cpp (function ?LoadFrame@?$CXTPFrameWndBase@VCMDIFrameWnd@@@@UAEHIKPAVCWnd@@PAUCCreateContext@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPFrameWnd.cpp
