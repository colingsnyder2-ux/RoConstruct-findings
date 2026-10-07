// roc 2007-08 00431740  unit: VCMDIFrameWnd::?$CXTPFrameWndBase  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00431740
//
// 00431740  8b442410             mov eax, dword ptr [esp + 0x10]
// 00431744  8b542408             mov edx, dword ptr [esp + 8]
// 00431748  56                   push esi
// 00431749  50                   push eax
// 0043174a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0043174e  8bf1                 mov esi, ecx
// 00431750  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00431754  51                   push ecx
// 00431755  52                   push edx
// 00431756  50                   push eax
// 00431757  8bce                 mov ecx, esi
// 00431759  e8f8ed1f00           call 0x630556
// 0043175e  85c0                 test eax, eax
// 00431760  7504                 jne 0x431766
// 00431762  5e                   pop esi
// 00431763  c21000               ret 0x10
// 00431766  8b8ed8000000         mov ecx, dword ptr [esi + 0xd8]
// 0043176c  85c9                 test ecx, ecx
// 0043176e  7412                 je 0x431782
// 00431770  e81b052000           call 0x631c90
// 00431775  83783400             cmp dword ptr [eax + 0x34], 0
// 00431779  7407                 je 0x431782
// 0043177b  c7466000000000       mov dword ptr [esi + 0x60], 0
// 00431782  b801000000           mov eax, 1
// 00431787  5e                   pop esi
// 00431788  c21000               ret 0x10
// library xtp-11.2.2-vc8/Source\CommandBars\XTPFrameWnd.cpp (function ?LoadFrame@?$CXTPFrameWndBase@VCMDIFrameWnd@@@@UAEHIKPAVCWnd@@PAUCCreateContext@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPFrameWnd.cpp
