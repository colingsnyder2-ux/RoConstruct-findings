// roc 2007-03 00433f10  unit: seg_00430000  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00433f10
//
// 00433f10  8b442410             mov eax, dword ptr [esp + 0x10]
// 00433f14  8b542408             mov edx, dword ptr [esp + 8]
// 00433f18  56                   push esi
// 00433f19  50                   push eax
// 00433f1a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00433f1e  8bf1                 mov esi, ecx
// 00433f20  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00433f24  51                   push ecx
// 00433f25  52                   push edx
// 00433f26  50                   push eax
// 00433f27  8bce                 mov ecx, esi
// 00433f29  e870ab1e00           call 0x61ea9e
// 00433f2e  85c0                 test eax, eax
// 00433f30  7504                 jne 0x433f36
// 00433f32  5e                   pop esi
// 00433f33  c21000               ret 0x10
// 00433f36  8b8ed4000000         mov ecx, dword ptr [esi + 0xd4]
// 00433f3c  85c9                 test ecx, ecx
// 00433f3e  7412                 je 0x433f52
// 00433f40  e80b751f00           call 0x62b450
// 00433f45  83783400             cmp dword ptr [eax + 0x34], 0
// 00433f49  7407                 je 0x433f52
// 00433f4b  c7466000000000       mov dword ptr [esi + 0x60], 0
// 00433f52  b801000000           mov eax, 1
// 00433f57  5e                   pop esi
// 00433f58  c21000               ret 0x10
// library xtp-11.2.2-vc8/Source\CommandBars\XTPFrameWnd.cpp (function ?LoadFrame@?$CXTPFrameWndBase@VCFrameWnd@@@@UAEHIKPAVCWnd@@PAUCCreateContext@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPFrameWnd.cpp
