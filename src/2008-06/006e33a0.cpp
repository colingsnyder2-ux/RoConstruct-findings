// from server: 100% by auto
// roc 2008-06 006e33a0  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 227 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e33a0
//
// 006e33a0  56                   push esi
// 006e33a1  8b742408             mov esi, dword ptr [esp + 8]
// 006e33a5  57                   push edi
// 006e33a6  56                   push esi
// 006e33a7  8bf9                 mov edi, ecx
// 006e33a9  e852faffff           call 0x6e2e00
// 006e33ae  837e2c05             cmp dword ptr [esi + 0x2c], 5
// 006e33b2  762b                 jbe 0x6e33df
// 006e33b4  6a00                 push 0
// 006e33b6  8d8778010000         lea eax, [edi + 0x178]
// 006e33bc  50                   push eax
// 006e33bd  6874688500           push 0x856874
// 006e33c2  56                   push esi
// 006e33c3  e8d89f0100           call 0x6fd3a0
// 006e33c8  6a00                 push 0
// 006e33ca  8d8f60010000         lea ecx, [edi + 0x160]
// 006e33d0  51                   push ecx
// 006e33d1  68f4e48100           push 0x81e4f4
// 006e33d6  56                   push esi
// 006e33d7  e8349f0100           call 0x6fd310
// 006e33dc  83c420               add esp, 0x20
// 006e33df  837e2c07             cmp dword ptr [esi + 0x2c], 7
// 006e33e3  7617                 jbe 0x6e33fc
// 006e33e5  6a00                 push 0
// 006e33e7  8d977c010000         lea edx, [edi + 0x17c]
// 006e33ed  52                   push edx
// 006e33ee  6868688500           push 0x856868
// 006e33f3  56                   push esi
// 006e33f4  e8a79f0100           call 0x6fd3a0
// 006e33f9  83c410               add esp, 0x10
// 006e33fc  837e2c08             cmp dword ptr [esi + 0x2c], 8
// 006e3400  762e                 jbe 0x6e3430
// 006e3402  6816b78000           push 0x80b716
// 006e3407  8d878c010000         lea eax, [edi + 0x18c]
// 006e340d  50                   push eax
// 006e340e  6834688500           push 0x856834
// 006e3413  56                   push esi
// 006e3414  e8e79f0100           call 0x6fd400
// 006e3419  6a00                 push 0
// 006e341b  8d8fa4010000         lea ecx, [edi + 0x1a4]
// 006e3421  51                   push ecx
// 006e3422  681c688500           push 0x85681c
// 006e3427  56                   push esi
// 006e3428  e8e39e0100           call 0x6fd310
// 006e342d  83c420               add esp, 0x20
// 006e3430  837e2c10             cmp dword ptr [esi + 0x2c], 0x10
// 006e3434  7617                 jbe 0x6e344d
// 006e3436  6a00                 push 0
// 006e3438  8d97a8010000         lea edx, [edi + 0x1a8]
// 006e343e  52                   push edx
// 006e343f  68e0678500           push 0x8567e0
// 006e3444  56                   push esi
// 006e3445  e8c69e0100           call 0x6fd310
// 006e344a  83c410               add esp, 0x10
// 006e344d  837e2c12             cmp dword ptr [esi + 0x2c], 0x12
// 006e3451  7617                 jbe 0x6e346a
// 006e3453  6a00                 push 0
// 006e3455  8d87ac010000         lea eax, [edi + 0x1ac]
// 006e345b  50                   push eax
// 006e345c  6858688500           push 0x856858
// 006e3461  56                   push esi
// 006e3462  e8399f0100           call 0x6fd3a0
// 006e3467  83c410               add esp, 0x10
// 006e346a  837e2800             cmp dword ptr [esi + 0x28], 0
// 006e346e  740e                 je 0x6e347e
// 006e3470  8b8fa4010000         mov ecx, dword ptr [edi + 0x1a4]
// 006e3476  51                   push ecx
// 006e3477  8bcf                 mov ecx, edi
// 006e3479  e802ed0500           call 0x742180
// 006e347e  5f                   pop edi
// 006e347f  5e                   pop esi
// 006e3480  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPDockState.cpp (function ?DoPropExchange@CXTPControlEdit@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockState.cpp
