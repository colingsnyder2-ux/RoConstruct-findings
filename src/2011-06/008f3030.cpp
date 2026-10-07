// roc 2011-06 008f3030  unit: CXTCaptionButton  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f3030
//
// 008f3030  8b442404             mov eax, dword ptr [esp + 4]
// 008f3034  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008f3038  56                   push esi
// 008f3039  8bf1                 mov esi, ecx
// 008f303b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008f303f  898e90000000         mov dword ptr [esi + 0x90], ecx
// 008f3045  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008f3048  89868c000000         mov dword ptr [esi + 0x8c], eax
// 008f304e  8b442414             mov eax, dword ptr [esp + 0x14]
// 008f3052  51                   push ecx
// 008f3053  899694000000         mov dword ptr [esi + 0x94], edx
// 008f3059  898698000000         mov dword ptr [esi + 0x98], eax
// 008f305f  ff15ec1ba400         call dword ptr [0xa41bec]
// 008f3065  85c0                 test eax, eax
// 008f3067  7415                 je 0x8f307e
// 008f3069  837c241800           cmp dword ptr [esp + 0x18], 0
// 008f306e  740e                 je 0x8f307e
// 008f3070  8b5620               mov edx, dword ptr [esi + 0x20]
// 008f3073  6a01                 push 1
// 008f3075  6a00                 push 0
// 008f3077  52                   push edx
// 008f3078  ff15ec19a400         call dword ptr [0xa419ec]
// 008f307e  c7467801000000       mov dword ptr [esi + 0x78], 1
// 008f3085  b801000000           mov eax, 1
// 008f308a  5e                   pop esi
// 008f308b  c21400               ret 0x14
// library xtp-15.2.1/Source\Controls\Deprecated\XTButton.cpp (function ?SetTextAndImagePos@CXTButton@@UAEHVCPoint@@0H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Deprecated/XTButton.cpp
