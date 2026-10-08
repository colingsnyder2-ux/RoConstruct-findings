// roc 2011-06 00433a10  unit: VCMDIFrameWnd::?$CXTPFrameWndBase  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00433a10
//
// 00433a10  8b442410             mov eax, dword ptr [esp + 0x10]
// 00433a14  8b542408             mov edx, dword ptr [esp + 8]
// 00433a18  56                   push esi
// 00433a19  50                   push eax
// 00433a1a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00433a1e  8bf1                 mov esi, ecx
// 00433a20  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00433a24  51                   push ecx
// 00433a25  52                   push edx
// 00433a26  50                   push eax
// 00433a27  8bce                 mov ecx, esi
// 00433a29  e862703d00           call 0x80aa90
// 00433a2e  85c0                 test eax, eax
// 00433a30  7504                 jne 0x433a36
// 00433a32  5e                   pop esi
// 00433a33  c21000               ret 0x10
// 00433a36  8b8eec000000         mov ecx, dword ptr [esi + 0xec]
// 00433a3c  85c9                 test ecx, ecx
// 00433a3e  7412                 je 0x433a52
// 00433a40  e8cbf52b00           call 0x6f3010
// 00433a45  83783400             cmp dword ptr [eax + 0x34], 0
// 00433a49  7407                 je 0x433a52
// 00433a4b  c7466000000000       mov dword ptr [esi + 0x60], 0
// 00433a52  b801000000           mov eax, 1
// 00433a57  5e                   pop esi
// 00433a58  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPFrameWnd.cpp (function ?LoadFrame@?$CXTPFrameWndBase@VCMDIFrameWnd@@@@UAEHIKPAVCWnd@@PAUCCreateContext@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPFrameWnd.cpp
