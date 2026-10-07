// roc 2012-06 00a6b390  unit: CXTCaptionButton  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6b390
//
// 00a6b390  8b442404             mov eax, dword ptr [esp + 4]
// 00a6b394  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00a6b398  56                   push esi
// 00a6b399  8bf1                 mov esi, ecx
// 00a6b39b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00a6b39f  898e90000000         mov dword ptr [esi + 0x90], ecx
// 00a6b3a5  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00a6b3a8  89868c000000         mov dword ptr [esi + 0x8c], eax
// 00a6b3ae  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a6b3b2  51                   push ecx
// 00a6b3b3  899694000000         mov dword ptr [esi + 0x94], edx
// 00a6b3b9  898698000000         mov dword ptr [esi + 0x98], eax
// 00a6b3bf  ff15143bb200         call dword ptr [0xb23b14]
// 00a6b3c5  85c0                 test eax, eax
// 00a6b3c7  7415                 je 0xa6b3de
// 00a6b3c9  837c241800           cmp dword ptr [esp + 0x18], 0
// 00a6b3ce  740e                 je 0xa6b3de
// 00a6b3d0  8b5620               mov edx, dword ptr [esi + 0x20]
// 00a6b3d3  6a01                 push 1
// 00a6b3d5  6a00                 push 0
// 00a6b3d7  52                   push edx
// 00a6b3d8  ff15ec3bb200         call dword ptr [0xb23bec]
// 00a6b3de  c7467801000000       mov dword ptr [esi + 0x78], 1
// 00a6b3e5  b801000000           mov eax, 1
// 00a6b3ea  5e                   pop esi
// 00a6b3eb  c21400               ret 0x14
// library xtp-15.2.1/Source\Controls\Deprecated\XTButton.cpp (function ?SetTextAndImagePos@CXTButton@@UAEHVCPoint@@0H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Deprecated/XTButton.cpp
