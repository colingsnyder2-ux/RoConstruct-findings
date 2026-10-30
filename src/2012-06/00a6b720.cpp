// roc 2012-06 00a6b720  unit: CXTCaptionButton  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6b720
//
// 00a6b720  6aff                 push -1
// 00a6b722  682d88ae00           push 0xae882d
// 00a6b727  64a100000000         mov eax, dword ptr fs:[0]
// 00a6b72d  50                   push eax
// 00a6b72e  51                   push ecx
// 00a6b72f  56                   push esi
// 00a6b730  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a6b735  33c4                 xor eax, esp
// 00a6b737  50                   push eax
// 00a6b738  8d44240c             lea eax, [esp + 0xc]
// 00a6b73c  64a300000000         mov dword ptr fs:[0], eax
// 00a6b742  8bf1                 mov esi, ecx
// 00a6b744  89742408             mov dword ptr [esp + 8], esi
// 00a6b748  c7067c5ec200         mov dword ptr [esi], 0xc25e7c
// 00a6b74e  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a6b751  50                   push eax
// 00a6b752  c744241804000000     mov dword ptr [esp + 0x18], 4
// 00a6b75a  ff15143bb200         call dword ptr [0xb23b14]
// 00a6b760  85c0                 test eax, eax
// 00a6b762  7407                 je 0xa6b76b
// 00a6b764  8bce                 mov ecx, esi
// 00a6b766  e82d6af1ff           call 0x982198
// 00a6b76b  8d8ea8020000         lea ecx, [esi + 0x2a8]
// 00a6b771  c644241403           mov byte ptr [esp + 0x14], 3
// 00a6b776  e8f5fb0000           call 0xa7b370
// 00a6b77b  8d8ea0020000         lea ecx, [esi + 0x2a0]
// 00a6b781  c644241402           mov byte ptr [esp + 0x14], 2
// 00a6b786  e8e5fb0000           call 0xa7b370
// 00a6b78b  8d8ef0010000         lea ecx, [esi + 0x1f0]
// 00a6b791  c644241401           mov byte ptr [esp + 0x14], 1
// 00a6b796  e895f3ffff           call 0xa6ab30
// 00a6b79b  8d4e60               lea ecx, [esi + 0x60]
// 00a6b79e  c644241400           mov byte ptr [esp + 0x14], 0
// 00a6b7a3  e878b3f8ff           call 0x9f6b20
// 00a6b7a8  8bce                 mov ecx, esi
// 00a6b7aa  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00a6b7b2  e8e973f1ff           call 0x982ba0
// 00a6b7b7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00a6b7bb  64890d00000000       mov dword ptr fs:[0], ecx
// 00a6b7c2  59                   pop ecx
// 00a6b7c3  5e                   pop esi
// 00a6b7c4  83c410               add esp, 0x10
// 00a6b7c7  c3                   ret 
// copied from an identical function in another client (function ??1CXTCaptionPopupWnd@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTCaptionPopupWnd.cpp