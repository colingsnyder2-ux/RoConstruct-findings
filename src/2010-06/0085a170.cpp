// roc 2010-06 0085a170  unit: CXTPReportTip  size: 455 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0085a170
//
// 0085a170  6aff                 push -1
// 0085a172  6829869b00           push 0x9b8629
// 0085a177  64a100000000         mov eax, dword ptr fs:[0]
// 0085a17d  50                   push eax
// 0085a17e  83ec4c               sub esp, 0x4c
// 0085a181  55                   push ebp
// 0085a182  56                   push esi
// 0085a183  57                   push edi
// 0085a184  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 0085a189  33c4                 xor eax, esp
// 0085a18b  50                   push eax
// 0085a18c  8d44245c             lea eax, [esp + 0x5c]
// 0085a190  64a300000000         mov dword ptr fs:[0], eax
// 0085a196  8bf1                 mov esi, ecx
// 0085a198  8b6c246c             mov ebp, dword ptr [esp + 0x6c]
// 0085a19c  85ed                 test ebp, ebp
// 0085a19e  0f8454010000         je 0x85a2f8
// 0085a1a4  8d4668               lea eax, [esi + 0x68]
// 0085a1a7  50                   push eax
// 0085a1a8  8d4c2470             lea ecx, [esp + 0x70]
// 0085a1ac  ff15c4ce9e00         call dword ptr [0x9ecec4]
// 0085a1b2  56                   push esi
// 0085a1b3  8d4c244c             lea ecx, [esp + 0x4c]
// 0085a1b7  c744246800000000     mov dword ptr [esp + 0x68], 0
// 0085a1bf  e8d82b1200           call 0x97cd9c
// 0085a1c4  8d4e74               lea ecx, [esi + 0x74]
// 0085a1c7  51                   push ecx
// 0085a1c8  8d54244c             lea edx, [esp + 0x4c]
// 0085a1cc  52                   push edx
// 0085a1cd  8d4c2440             lea ecx, [esp + 0x40]
// 0085a1d1  c644246c01           mov byte ptr [esp + 0x6c], 1
// 0085a1d6  e8c554faff           call 0x7ff6a0
// 0085a1db  56                   push esi
// 0085a1dc  8d4c241c             lea ecx, [esp + 0x1c]
// 0085a1e0  c644246802           mov byte ptr [esp + 0x68], 2
// 0085a1e5  e8c650faff           call 0x7ff2b0
// 0085a1ea  8d442410             lea eax, [esp + 0x10]
// 0085a1ee  50                   push eax
// 0085a1ef  8d4c2470             lea ecx, [esp + 0x70]
// 0085a1f3  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0085a1f9  50                   push eax
// 0085a1fa  8d4c2474             lea ecx, [esp + 0x74]
// 0085a1fe  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 0085a204  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0085a208  50                   push eax
// 0085a209  51                   push ecx
// 0085a20a  ff1594a19e00         call dword ptr [0x9ea194]
// 0085a210  8b542418             mov edx, dword ptr [esp + 0x18]
// 0085a214  8b442410             mov eax, dword ptr [esp + 0x10]
// 0085a218  8d4c1006             lea ecx, [eax + edx + 6]
// 0085a21c  894c2420             mov dword ptr [esp + 0x20], ecx
// 0085a220  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 0085a223  e8bc2b1200           call 0x97cde4
// 0085a228  8b3d40bc9e00         mov edi, dword ptr [0x9ebc40]
// 0085a22e  a900200000           test eax, 0x2000
// 0085a233  750f                 jne 0x85a244
// 0085a235  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 0085a238  e8a72b1200           call 0x97cde4
// 0085a23d  a900004000           test eax, 0x400000
// 0085a242  7412                 je 0x85a256
// 0085a244  8b465c               mov eax, dword ptr [esi + 0x5c]
// 0085a247  2b442420             sub eax, dword ptr [esp + 0x20]
// 0085a24b  6a00                 push 0
// 0085a24d  40                   inc eax
// 0085a24e  50                   push eax
// 0085a24f  8d542420             lea edx, [esp + 0x20]
// 0085a253  52                   push edx
// 0085a254  ffd7                 call edi
// 0085a256  8d442428             lea eax, [esp + 0x28]
// 0085a25a  50                   push eax
// 0085a25b  e87066f9ff           call 0x7f08d0
// 0085a260  8bc8                 mov ecx, eax
// 0085a262  e83962f9ff           call 0x7f04a0
// 0085a267  8b442420             mov eax, dword ptr [esp + 0x20]
// 0085a26b  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0085a26f  3bc1                 cmp eax, ecx
// 0085a271  7e10                 jle 0x85a283
// 0085a273  2bc8                 sub ecx, eax
// 0085a275  6a00                 push 0
// 0085a277  51                   push ecx
// 0085a278  8d4c2420             lea ecx, [esp + 0x20]
// 0085a27c  51                   push ecx
// 0085a27d  ffd7                 call edi
// 0085a27f  8b442420             mov eax, dword ptr [esp + 0x20]
// 0085a283  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0085a287  8b542428             mov edx, dword ptr [esp + 0x28]
// 0085a28b  3bca                 cmp ecx, edx
// 0085a28d  7d14                 jge 0x85a2a3
// 0085a28f  2bd1                 sub edx, ecx
// 0085a291  6a00                 push 0
// 0085a293  52                   push edx
// 0085a294  8d542420             lea edx, [esp + 0x20]
// 0085a298  52                   push edx
// 0085a299  ffd7                 call edi
// 0085a29b  8b442420             mov eax, dword ptr [esp + 0x20]
// 0085a29f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0085a2a3  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0085a2a7  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0085a2ab  6a01                 push 1
// 0085a2ad  2bfa                 sub edi, edx
// 0085a2af  57                   push edi
// 0085a2b0  2bc1                 sub eax, ecx
// 0085a2b2  50                   push eax
// 0085a2b3  52                   push edx
// 0085a2b4  51                   push ecx
// 0085a2b5  8bce                 mov ecx, esi
// 0085a2b7  e8b6daf4ff           call 0x7a7d72
// 0085a2bc  8b4620               mov eax, dword ptr [esi + 0x20]
// 0085a2bf  6a00                 push 0
// 0085a2c1  6a00                 push 0
// 0085a2c3  50                   push eax
// 0085a2c4  ff1578ba9e00         call dword ptr [0x9eba78]
// 0085a2ca  8d4c2438             lea ecx, [esp + 0x38]
// 0085a2ce  c644246401           mov byte ptr [esp + 0x64], 1
// 0085a2d3  e84854faff           call 0x7ff720
// 0085a2d8  8d4c2448             lea ecx, [esp + 0x48]
// 0085a2dc  c644246400           mov byte ptr [esp + 0x64], 0
// 0085a2e1  e8b02a1200           call 0x97cd96
// 0085a2e6  8d4c246c             lea ecx, [esp + 0x6c]
// 0085a2ea  c7442464ffffffff     mov dword ptr [esp + 0x64], 0xffffffff
// 0085a2f2  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 0085a2f8  8b0d78c79e00         mov ecx, dword ptr [0x9ec778]
// 0085a2fe  f7dd                 neg ebp
// 0085a300  1bed                 sbb ebp, ebp
// 0085a302  83e5bc               and ebp, 0xffffffbc
// 0085a305  81c584000000         add ebp, 0x84
// 0085a30b  81cd13020000         or ebp, 0x213
// 0085a311  55                   push ebp
// 0085a312  6a00                 push 0
// 0085a314  6a00                 push 0
// 0085a316  6a00                 push 0
// 0085a318  6a00                 push 0
// 0085a31a  51                   push ecx
// 0085a31b  8bce                 mov ecx, esi
// 0085a31d  e84adaf4ff           call 0x7a7d6c
// 0085a322  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0085a326  64890d00000000       mov dword ptr fs:[0], ecx
// 0085a32d  59                   pop ecx
// 0085a32e  5f                   pop edi
// 0085a32f  5e                   pop esi
// 0085a330  5d                   pop ebp
// 0085a331  83c458               add esp, 0x58
// 0085a334  c20400               ret 4
// copied from an identical function in another client (function ?Activate@CXTPReportTip@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportTip.cpp