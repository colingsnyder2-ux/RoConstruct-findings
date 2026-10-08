// roc 2012-06 00449030  unit: VCFrameWnd::?$CXTPFrameWndBase  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00449030
//
// 00449030  8b442410             mov eax, dword ptr [esp + 0x10]
// 00449034  8b542408             mov edx, dword ptr [esp + 8]
// 00449038  56                   push esi
// 00449039  50                   push eax
// 0044903a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0044903e  8bf1                 mov esi, ecx
// 00449040  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00449044  51                   push ecx
// 00449045  52                   push edx
// 00449046  50                   push eax
// 00449047  8bce                 mov ecx, esi
// 00449049  e8769b5300           call 0x982bc4
// 0044904e  85c0                 test eax, eax
// 00449050  7504                 jne 0x449056
// 00449052  5e                   pop esi
// 00449053  c21000               ret 0x10
// 00449056  8b8ee8000000         mov ecx, dword ptr [esi + 0xe8]
// 0044905c  85c9                 test ecx, ecx
// 0044905e  7412                 je 0x449072
// 00449060  e8eb915500           call 0x9a2250
// 00449065  83783400             cmp dword ptr [eax + 0x34], 0
// 00449069  7407                 je 0x449072
// 0044906b  c7466000000000       mov dword ptr [esi + 0x60], 0
// 00449072  b801000000           mov eax, 1
// 00449077  5e                   pop esi
// 00449078  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPFrameWnd.cpp (function ?LoadFrame@?$CXTPFrameWndBase@VCFrameWnd@@@@UAEHIKPAVCWnd@@PAUCCreateContext@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPFrameWnd.cpp
