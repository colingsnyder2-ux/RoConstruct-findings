// roc 2011-06 0043d620  unit: VCFrameWnd::?$CXTPFrameWndBase  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0043d620
//
// 0043d620  8b442410             mov eax, dword ptr [esp + 0x10]
// 0043d624  8b542408             mov edx, dword ptr [esp + 8]
// 0043d628  56                   push esi
// 0043d629  50                   push eax
// 0043d62a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0043d62e  8bf1                 mov esi, ecx
// 0043d630  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0043d634  51                   push ecx
// 0043d635  52                   push edx
// 0043d636  50                   push eax
// 0043d637  8bce                 mov ecx, esi
// 0043d639  e800d53c00           call 0x80ab3e
// 0043d63e  85c0                 test eax, eax
// 0043d640  7504                 jne 0x43d646
// 0043d642  5e                   pop esi
// 0043d643  c21000               ret 0x10
// 0043d646  8b8ee8000000         mov ecx, dword ptr [esi + 0xe8]
// 0043d64c  85c9                 test ecx, ecx
// 0043d64e  7412                 je 0x43d662
// 0043d650  e8bb592b00           call 0x6f3010
// 0043d655  83783400             cmp dword ptr [eax + 0x34], 0
// 0043d659  7407                 je 0x43d662
// 0043d65b  c7466000000000       mov dword ptr [esi + 0x60], 0
// 0043d662  b801000000           mov eax, 1
// 0043d667  5e                   pop esi
// 0043d668  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPFrameWnd.cpp (function ?LoadFrame@?$CXTPFrameWndBase@VCFrameWnd@@@@UAEHIKPAVCWnd@@PAUCCreateContext@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPFrameWnd.cpp
