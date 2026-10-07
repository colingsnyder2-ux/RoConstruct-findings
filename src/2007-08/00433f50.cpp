// roc 2007-08 00433f50  unit: CBrowserFrameWnd  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00433f50
//
// 00433f50  8b442410             mov eax, dword ptr [esp + 0x10]
// 00433f54  8b542408             mov edx, dword ptr [esp + 8]
// 00433f58  56                   push esi
// 00433f59  50                   push eax
// 00433f5a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00433f5e  8bf1                 mov esi, ecx
// 00433f60  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00433f64  51                   push ecx
// 00433f65  52                   push edx
// 00433f66  50                   push eax
// 00433f67  8bce                 mov ecx, esi
// 00433f69  e890c61f00           call 0x6305fe
// 00433f6e  85c0                 test eax, eax
// 00433f70  7504                 jne 0x433f76
// 00433f72  5e                   pop esi
// 00433f73  c21000               ret 0x10
// 00433f76  8b8ed4000000         mov ecx, dword ptr [esi + 0xd4]
// 00433f7c  85c9                 test ecx, ecx
// 00433f7e  7412                 je 0x433f92
// 00433f80  e80bdd1f00           call 0x631c90
// 00433f85  83783400             cmp dword ptr [eax + 0x34], 0
// 00433f89  7407                 je 0x433f92
// 00433f8b  c7466000000000       mov dword ptr [esi + 0x60], 0
// 00433f92  b801000000           mov eax, 1
// 00433f97  5e                   pop esi
// 00433f98  c21000               ret 0x10
// library xtp-11.2.2-vc8/Source\CommandBars\XTPFrameWnd.cpp (function ?LoadFrame@?$CXTPFrameWndBase@VCFrameWnd@@@@UAEHIKPAVCWnd@@PAUCCreateContext@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPFrameWnd.cpp
