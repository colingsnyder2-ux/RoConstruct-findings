// from server: 100% by auto
// roc 2008-06 00792cb0  unit: CXTCaptionButton  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00792cb0
//
// 00792cb0  8b442404             mov eax, dword ptr [esp + 4]
// 00792cb4  56                   push esi
// 00792cb5  8bf1                 mov esi, ecx
// 00792cb7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00792cbb  898e88000000         mov dword ptr [esi + 0x88], ecx
// 00792cc1  8b8e9c000000         mov ecx, dword ptr [esi + 0x9c]
// 00792cc7  898684000000         mov dword ptr [esi + 0x84], eax
// 00792ccd  85c9                 test ecx, ecx
// 00792ccf  740f                 je 0x792ce0
// 00792cd1  e80edff0ff           call 0x6a0be4
// 00792cd6  c7869c00000000000000 mov dword ptr [esi + 0x9c], 0
// 00792ce0  8b4620               mov eax, dword ptr [esi + 0x20]
// 00792ce3  8b542410             mov edx, dword ptr [esp + 0x10]
// 00792ce7  50                   push eax
// 00792ce8  89969c000000         mov dword ptr [esi + 0x9c], edx
// 00792cee  ff15502d8000         call dword ptr [0x802d50]
// 00792cf4  85c0                 test eax, eax
// 00792cf6  7415                 je 0x792d0d
// 00792cf8  837c241400           cmp dword ptr [esp + 0x14], 0
// 00792cfd  740e                 je 0x792d0d
// 00792cff  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00792d02  6a01                 push 1
// 00792d04  6a00                 push 0
// 00792d06  51                   push ecx
// 00792d07  ff15182e8000         call dword ptr [0x802e18]
// 00792d0d  b801000000           mov eax, 1
// 00792d12  5e                   pop esi
// 00792d13  c21000               ret 0x10
// library xtp-11.2.2/Source\Controls\XTButton.cpp (function ?SetIcon@CXTButton@@QAEHVCSize@@PAVCXTPImageManagerIcon@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButton.cpp
