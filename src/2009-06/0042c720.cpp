// roc 2009-06 0042c720  unit: VCFrameWnd::?$CXTPFrameWndBase  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0042c720
//
// 0042c720  8b442410             mov eax, dword ptr [esp + 0x10]
// 0042c724  8b542408             mov edx, dword ptr [esp + 8]
// 0042c728  56                   push esi
// 0042c729  50                   push eax
// 0042c72a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0042c72e  8bf1                 mov esi, ecx
// 0042c730  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0042c734  51                   push ecx
// 0042c735  52                   push edx
// 0042c736  50                   push eax
// 0042c737  8bce                 mov ecx, esi
// 0042c739  e8cecd2e00           call 0x71950c
// 0042c73e  85c0                 test eax, eax
// 0042c740  7504                 jne 0x42c746
// 0042c742  5e                   pop esi
// 0042c743  c21000               ret 0x10
// 0042c746  8b8ee8000000         mov ecx, dword ptr [esi + 0xe8]
// 0042c74c  85c9                 test ecx, ecx
// 0042c74e  7412                 je 0x42c762
// 0042c750  e85b1f2500           call 0x67e6b0
// 0042c755  83783400             cmp dword ptr [eax + 0x34], 0
// 0042c759  7407                 je 0x42c762
// 0042c75b  c7466000000000       mov dword ptr [esi + 0x60], 0
// 0042c762  b801000000           mov eax, 1
// 0042c767  5e                   pop esi
// 0042c768  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPFrameWnd.cpp (function ?LoadFrame@?$CXTPFrameWndBase@VCFrameWnd@@@@UAEHIKPAVCWnd@@PAUCCreateContext@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPFrameWnd.cpp
