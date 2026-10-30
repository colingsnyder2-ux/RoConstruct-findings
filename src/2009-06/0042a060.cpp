// roc 2009-06 0042a060  unit: VCMDIFrameWnd::?$CXTPFrameWndBase  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0042a060
//
// 0042a060  8b442410             mov eax, dword ptr [esp + 0x10]
// 0042a064  8b542408             mov edx, dword ptr [esp + 8]
// 0042a068  56                   push esi
// 0042a069  50                   push eax
// 0042a06a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0042a06e  8bf1                 mov esi, ecx
// 0042a070  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0042a074  51                   push ecx
// 0042a075  52                   push edx
// 0042a076  50                   push eax
// 0042a077  8bce                 mov ecx, esi
// 0042a079  e8e0f32e00           call 0x71945e
// 0042a07e  85c0                 test eax, eax
// 0042a080  7504                 jne 0x42a086
// 0042a082  5e                   pop esi
// 0042a083  c21000               ret 0x10
// 0042a086  8b8eec000000         mov ecx, dword ptr [esi + 0xec]
// 0042a08c  85c9                 test ecx, ecx
// 0042a08e  7412                 je 0x42a0a2
// 0042a090  e81b462500           call 0x67e6b0
// 0042a095  83783400             cmp dword ptr [eax + 0x34], 0
// 0042a099  7407                 je 0x42a0a2
// 0042a09b  c7466000000000       mov dword ptr [esi + 0x60], 0
// 0042a0a2  b801000000           mov eax, 1
// 0042a0a7  5e                   pop esi
// 0042a0a8  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPFrameWnd.cpp (function ?LoadFrame@?$CXTPFrameWndBase@VCMDIFrameWnd@@@@UAEHIKPAVCWnd@@PAUCCreateContext@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPFrameWnd.cpp
