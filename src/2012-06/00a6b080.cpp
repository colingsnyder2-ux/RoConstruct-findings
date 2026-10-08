// from server: 100% by auto
// roc 2012-06 00a6b080  unit: CXTCaptionButton  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6b080
//
// 00a6b080  8b442404             mov eax, dword ptr [esp + 4]
// 00a6b084  56                   push esi
// 00a6b085  8bf1                 mov esi, ecx
// 00a6b087  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00a6b08b  898e88000000         mov dword ptr [esi + 0x88], ecx
// 00a6b091  8b8e9c000000         mov ecx, dword ptr [esi + 0x9c]
// 00a6b097  898684000000         mov dword ptr [esi + 0x84], eax
// 00a6b09d  85c9                 test ecx, ecx
// 00a6b09f  740f                 je 0xa6b0b0
// 00a6b0a1  e8e475f1ff           call 0x98268a
// 00a6b0a6  c7869c00000000000000 mov dword ptr [esi + 0x9c], 0
// 00a6b0b0  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a6b0b3  8b542410             mov edx, dword ptr [esp + 0x10]
// 00a6b0b7  50                   push eax
// 00a6b0b8  89969c000000         mov dword ptr [esi + 0x9c], edx
// 00a6b0be  ff15143bb200         call dword ptr [0xb23b14]
// 00a6b0c4  85c0                 test eax, eax
// 00a6b0c6  7415                 je 0xa6b0dd
// 00a6b0c8  837c241400           cmp dword ptr [esp + 0x14], 0
// 00a6b0cd  740e                 je 0xa6b0dd
// 00a6b0cf  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00a6b0d2  6a01                 push 1
// 00a6b0d4  6a00                 push 0
// 00a6b0d6  51                   push ecx
// 00a6b0d7  ff15ec3bb200         call dword ptr [0xb23bec]
// 00a6b0dd  b801000000           mov eax, 1
// 00a6b0e2  5e                   pop esi
// 00a6b0e3  c21000               ret 0x10
// library xtp-15.2.1/Source\Controls\Deprecated\XTButton.cpp (function ?SetIcon@CXTButton@@QAEHVCSize@@PAVCXTPImageManagerIcon@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Deprecated/XTButton.cpp
