// roc 2009-12 00840630  unit: CXTPCustomizeOptionsPage  size: 201 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00840630
//
// 00840630  56                   push esi
// 00840631  8bf1                 mov esi, ecx
// 00840633  e84c3bfbff           call 0x7f4184
// 00840638  33c0                 xor eax, eax
// 0084063a  398688000000         cmp dword ptr [esi + 0x88], eax
// 00840640  8bce                 mov ecx, esi
// 00840642  0f94c0               sete al
// 00840645  50                   push eax
// 00840646  6a65                 push 0x65
// 00840648  e8e340fbff           call 0x7f4730
// 0084064d  8bc8                 mov ecx, eax
// 0084064f  e88a38fbff           call 0x7f3ede
// 00840654  8b8e94000000         mov ecx, dword ptr [esi + 0x94]
// 0084065a  51                   push ecx
// 0084065b  6a69                 push 0x69
// 0084065d  8bce                 mov ecx, esi
// 0084065f  e8cc40fbff           call 0x7f4730
// 00840664  8bc8                 mov ecx, eax
// 00840666  e87338fbff           call 0x7f3ede
// 0084066b  6a6c                 push 0x6c
// 0084066d  8bce                 mov ecx, esi
// 0084066f  e8bc40fbff           call 0x7f4730
// 00840674  85c0                 test eax, eax
// 00840676  740e                 je 0x840686
// 00840678  56                   push esi
// 00840679  6a6c                 push 0x6c
// 0084067b  8d8ef4000000         lea ecx, [esi + 0xf4]
// 00840681  e8b45f0e00           call 0x92663a
// 00840686  6a6b                 push 0x6b
// 00840688  8bce                 mov ecx, esi
// 0084068a  e8a140fbff           call 0x7f4730
// 0084068f  85c0                 test eax, eax
// 00840691  740e                 je 0x8406a1
// 00840693  56                   push esi
// 00840694  6a6b                 push 0x6b
// 00840696  8d8e54010000         lea ecx, [esi + 0x154]
// 0084069c  e8995f0e00           call 0x92663a
// 008406a1  68db230000           push 0x23db
// 008406a6  8bce                 mov ecx, esi
// 008406a8  e8f3feffff           call 0x8405a0
// 008406ad  68dc230000           push 0x23dc
// 008406b2  8bce                 mov ecx, esi
// 008406b4  e8e7feffff           call 0x8405a0
// 008406b9  68dd230000           push 0x23dd
// 008406be  8bce                 mov ecx, esi
// 008406c0  e8dbfeffff           call 0x8405a0
// 008406c5  68de230000           push 0x23de
// 008406ca  8bce                 mov ecx, esi
// 008406cc  e8cffeffff           call 0x8405a0
// 008406d1  68df230000           push 0x23df
// 008406d6  8bce                 mov ecx, esi
// 008406d8  e8c3feffff           call 0x8405a0
// 008406dd  68e0230000           push 0x23e0
// 008406e2  8bce                 mov ecx, esi
// 008406e4  e8b7feffff           call 0x8405a0
// 008406e9  6a00                 push 0
// 008406eb  8bce                 mov ecx, esi
// 008406ed  e8f633fbff           call 0x7f3ae8
// 008406f2  b801000000           mov eax, 1
// 008406f7  5e                   pop esi
// 008406f8  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPCustomizeOptionsPage.cpp (function ?OnInitDialog@CXTPCustomizeOptionsPage@@MAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCustomizeOptionsPage.cpp
