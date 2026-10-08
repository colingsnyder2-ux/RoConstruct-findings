// from server: 100% by auto
// roc 2008-06 004331c0  unit: CBrowserFrameWnd  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004331c0
//
// 004331c0  8b442410             mov eax, dword ptr [esp + 0x10]
// 004331c4  8b542408             mov edx, dword ptr [esp + 8]
// 004331c8  56                   push esi
// 004331c9  50                   push eax
// 004331ca  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004331ce  8bf1                 mov esi, ecx
// 004331d0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004331d4  51                   push ecx
// 004331d5  52                   push edx
// 004331d6  50                   push eax
// 004331d7  8bce                 mov ecx, esi
// 004331d9  e8bcde2600           call 0x6a109a
// 004331de  85c0                 test eax, eax
// 004331e0  7504                 jne 0x4331e6
// 004331e2  5e                   pop esi
// 004331e3  c21000               ret 0x10
// 004331e6  8b8ee8000000         mov ecx, dword ptr [esi + 0xe8]
// 004331ec  85c9                 test ecx, ecx
// 004331ee  7412                 je 0x433202
// 004331f0  e84bf72600           call 0x6a2940
// 004331f5  83783400             cmp dword ptr [eax + 0x34], 0
// 004331f9  7407                 je 0x433202
// 004331fb  c7466000000000       mov dword ptr [esi + 0x60], 0
// 00433202  b801000000           mov eax, 1
// 00433207  5e                   pop esi
// 00433208  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPFrameWnd.cpp (function ?LoadFrame@?$CXTPFrameWndBase@VCFrameWnd@@@@UAEHIKPAVCWnd@@PAUCCreateContext@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPFrameWnd.cpp
