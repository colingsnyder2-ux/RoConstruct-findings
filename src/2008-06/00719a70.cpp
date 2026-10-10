// roc 2008-06 00719a70  unit: CSelectionCaption  size: 205 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00719a70
//
// 00719a70  56                   push esi
// 00719a71  8bf1                 mov esi, ecx
// 00719a73  8b06                 mov eax, dword ptr [esi]
// 00719a75  8b9058010000         mov edx, dword ptr [eax + 0x158]
// 00719a7b  57                   push edi
// 00719a7c  ffd2                 call edx
// 00719a7e  8b8688000000         mov eax, dword ptr [esi + 0x88]
// 00719a84  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00719a87  8dbea8000000         lea edi, [esi + 0xa8]
// 00719a8d  57                   push edi
// 00719a8e  51                   push ecx
// 00719a8f  ff15842d8000         call dword ptr [0x802d84]
// 00719a95  8b17                 mov edx, dword ptr [edi]
// 00719a97  8b4704               mov eax, dword ptr [edi + 4]
// 00719a9a  8b4f08               mov ecx, dword ptr [edi + 8]
// 00719a9d  899698000000         mov dword ptr [esi + 0x98], edx
// 00719aa3  8b570c               mov edx, dword ptr [edi + 0xc]
// 00719aa6  89869c000000         mov dword ptr [esi + 0x9c], eax
// 00719aac  8b467c               mov eax, dword ptr [esi + 0x7c]
// 00719aaf  898ea0000000         mov dword ptr [esi + 0xa0], ecx
// 00719ab5  8996a4000000         mov dword ptr [esi + 0xa4], edx
// 00719abb  01869c000000         add dword ptr [esi + 0x9c], eax
// 00719ac1  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 00719ac7  8b96a4000000         mov edx, dword ptr [esi + 0xa4]
// 00719acd  8b8e98000000         mov ecx, dword ptr [esi + 0x98]
// 00719ad3  6a01                 push 1
// 00719ad5  2bd0                 sub edx, eax
// 00719ad7  52                   push edx
// 00719ad8  8b96a0000000         mov edx, dword ptr [esi + 0xa0]
// 00719ade  2bd1                 sub edx, ecx
// 00719ae0  52                   push edx
// 00719ae1  50                   push eax
// 00719ae2  51                   push ecx
// 00719ae3  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 00719ae9  e85e6ff8ff           call 0x6a0a4c
// 00719aee  8b4638               mov eax, dword ptr [esi + 0x38]
// 00719af1  85c0                 test eax, eax
// 00719af3  750a                 jne 0x719aff
// 00719af5  8b4620               mov eax, dword ptr [esi + 0x20]
// 00719af8  50                   push eax
// 00719af9  ff15f82d8000         call dword ptr [0x802df8]
// 00719aff  50                   push eax
// 00719b00  e8d970f8ff           call 0x6a0bde
// 00719b05  8bf8                 mov edi, eax
// 00719b07  85ff                 test edi, edi
// 00719b09  7403                 je 0x719b0e
// 00719b0b  8b4720               mov eax, dword ptr [edi + 0x20]
// 00719b0e  50                   push eax
// 00719b0f  ff15502d8000         call dword ptr [0x802d50]
// 00719b15  85c0                 test eax, eax
// 00719b17  7421                 je 0x719b3a
// 00719b19  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 00719b1c  6a00                 push 0
// 00719b1e  6a00                 push 0
// 00719b20  683e270000           push 0x273e
// 00719b25  51                   push ecx
// 00719b26  ff15142e8000         call dword ptr [0x802e14]
// 00719b2c  8b5620               mov edx, dword ptr [esi + 0x20]
// 00719b2f  6a01                 push 1
// 00719b31  6a00                 push 0
// 00719b33  52                   push edx
// 00719b34  ff15182e8000         call dword ptr [0x802e18]
// 00719b3a  5f                   pop edi
// 00719b3b  5e                   pop esi
// 00719b3c  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\Controls\XTCaption.cpp (function ?OnPushPinButton@CXTCaption@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Controls/XTCaption.cpp
