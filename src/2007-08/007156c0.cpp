// from server: 100% by auto
// roc 2007-08 007156c0  unit: CXTCaptionButton  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007156c0
//
// 007156c0  8b442404             mov eax, dword ptr [esp + 4]
// 007156c4  8b54240c             mov edx, dword ptr [esp + 0xc]
// 007156c8  56                   push esi
// 007156c9  8bf1                 mov esi, ecx
// 007156cb  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007156cf  898e90000000         mov dword ptr [esi + 0x90], ecx
// 007156d5  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007156d8  89868c000000         mov dword ptr [esi + 0x8c], eax
// 007156de  8b442414             mov eax, dword ptr [esp + 0x14]
// 007156e2  51                   push ecx
// 007156e3  899694000000         mov dword ptr [esi + 0x94], edx
// 007156e9  898698000000         mov dword ptr [esi + 0x98], eax
// 007156ef  ff15bced7700         call dword ptr [0x77edbc]
// 007156f5  85c0                 test eax, eax
// 007156f7  7415                 je 0x71570e
// 007156f9  837c241800           cmp dword ptr [esp + 0x18], 0
// 007156fe  740e                 je 0x71570e
// 00715700  8b5620               mov edx, dword ptr [esi + 0x20]
// 00715703  6a01                 push 1
// 00715705  6a00                 push 0
// 00715707  52                   push edx
// 00715708  ff15dcec7700         call dword ptr [0x77ecdc]
// 0071570e  c7467801000000       mov dword ptr [esi + 0x78], 1
// 00715715  b801000000           mov eax, 1
// 0071571a  5e                   pop esi
// 0071571b  c21400               ret 0x14
// library xtp-11.2.2-vc8/Source\Controls\XTButton.cpp (function ?SetTextAndImagePos@CXTButton@@UAEHVCPoint@@0H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTButton.cpp
