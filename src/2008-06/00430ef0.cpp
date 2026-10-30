// from server: 100% by auto
// roc 2008-06 00430ef0  unit: VCMDIFrameWnd::?$CXTPFrameWndBase  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00430ef0
//
// 00430ef0  8b442410             mov eax, dword ptr [esp + 0x10]
// 00430ef4  8b542408             mov edx, dword ptr [esp + 8]
// 00430ef8  56                   push esi
// 00430ef9  50                   push eax
// 00430efa  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00430efe  8bf1                 mov esi, ecx
// 00430f00  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00430f04  51                   push ecx
// 00430f05  52                   push edx
// 00430f06  50                   push eax
// 00430f07  8bce                 mov ecx, esi
// 00430f09  e8de002700           call 0x6a0fec
// 00430f0e  85c0                 test eax, eax
// 00430f10  7504                 jne 0x430f16
// 00430f12  5e                   pop esi
// 00430f13  c21000               ret 0x10
// 00430f16  8b8eec000000         mov ecx, dword ptr [esi + 0xec]
// 00430f1c  85c9                 test ecx, ecx
// 00430f1e  7412                 je 0x430f32
// 00430f20  e81b1a2700           call 0x6a2940
// 00430f25  83783400             cmp dword ptr [eax + 0x34], 0
// 00430f29  7407                 je 0x430f32
// 00430f2b  c7466000000000       mov dword ptr [esi + 0x60], 0
// 00430f32  b801000000           mov eax, 1
// 00430f37  5e                   pop esi
// 00430f38  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPFrameWnd.cpp (function ?LoadFrame@?$CXTPFrameWndBase@VCMDIFrameWnd@@@@UAEHIKPAVCWnd@@PAUCCreateContext@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPFrameWnd.cpp
