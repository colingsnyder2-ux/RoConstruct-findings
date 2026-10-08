// roc 2012-06 00439290  unit: VCMDIFrameWnd::?$CXTPFrameWndBase  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00439290
//
// 00439290  8b442410             mov eax, dword ptr [esp + 0x10]
// 00439294  8b542408             mov edx, dword ptr [esp + 8]
// 00439298  56                   push esi
// 00439299  50                   push eax
// 0043929a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0043929e  8bf1                 mov esi, ecx
// 004392a0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004392a4  51                   push ecx
// 004392a5  52                   push edx
// 004392a6  50                   push eax
// 004392a7  8bce                 mov ecx, esi
// 004392a9  e868985400           call 0x982b16
// 004392ae  85c0                 test eax, eax
// 004392b0  7504                 jne 0x4392b6
// 004392b2  5e                   pop esi
// 004392b3  c21000               ret 0x10
// 004392b6  8b8eec000000         mov ecx, dword ptr [esi + 0xec]
// 004392bc  85c9                 test ecx, ecx
// 004392be  7412                 je 0x4392d2
// 004392c0  e88b8f5600           call 0x9a2250
// 004392c5  83783400             cmp dword ptr [eax + 0x34], 0
// 004392c9  7407                 je 0x4392d2
// 004392cb  c7466000000000       mov dword ptr [esi + 0x60], 0
// 004392d2  b801000000           mov eax, 1
// 004392d7  5e                   pop esi
// 004392d8  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPFrameWnd.cpp (function ?LoadFrame@?$CXTPFrameWndBase@VCMDIFrameWnd@@@@UAEHIKPAVCWnd@@PAUCCreateContext@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPFrameWnd.cpp
