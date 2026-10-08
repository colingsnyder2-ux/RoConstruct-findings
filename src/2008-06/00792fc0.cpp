// from server: 100% by auto
// roc 2008-06 00792fc0  unit: CXTCaptionButton  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00792fc0
//
// 00792fc0  8b442404             mov eax, dword ptr [esp + 4]
// 00792fc4  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00792fc8  56                   push esi
// 00792fc9  8bf1                 mov esi, ecx
// 00792fcb  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00792fcf  898e90000000         mov dword ptr [esi + 0x90], ecx
// 00792fd5  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00792fd8  89868c000000         mov dword ptr [esi + 0x8c], eax
// 00792fde  8b442414             mov eax, dword ptr [esp + 0x14]
// 00792fe2  51                   push ecx
// 00792fe3  899694000000         mov dword ptr [esi + 0x94], edx
// 00792fe9  898698000000         mov dword ptr [esi + 0x98], eax
// 00792fef  ff15502d8000         call dword ptr [0x802d50]
// 00792ff5  85c0                 test eax, eax
// 00792ff7  7415                 je 0x79300e
// 00792ff9  837c241800           cmp dword ptr [esp + 0x18], 0
// 00792ffe  740e                 je 0x79300e
// 00793000  8b5620               mov edx, dword ptr [esi + 0x20]
// 00793003  6a01                 push 1
// 00793005  6a00                 push 0
// 00793007  52                   push edx
// 00793008  ff15182e8000         call dword ptr [0x802e18]
// 0079300e  c7467801000000       mov dword ptr [esi + 0x78], 1
// 00793015  b801000000           mov eax, 1
// 0079301a  5e                   pop esi
// 0079301b  c21400               ret 0x14
// library xtp-11.2.2/Source\Controls\XTButton.cpp (function ?SetTextAndImagePos@CXTButton@@UAEHVCPoint@@0H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButton.cpp
