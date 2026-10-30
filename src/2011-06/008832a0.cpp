// from server: 100% by auto
// roc 2011-06 008832a0  unit: CXTPControlGalleryPaintManager  size: 302 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008832a0
//
// 008832a0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008832a4  8b442410             mov eax, dword ptr [esp + 0x10]
// 008832a8  83ec08               sub esp, 8
// 008832ab  53                   push ebx
// 008832ac  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 008832b0  56                   push esi
// 008832b1  57                   push edi
// 008832b2  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 008832b6  2bc3                 sub eax, ebx
// 008832b8  2bcf                 sub ecx, edi
// 008832ba  3bc1                 cmp eax, ecx
// 008832bc  8bf0                 mov esi, eax
// 008832be  7c02                 jl 0x8832c2
// 008832c0  8bf1                 mov esi, ecx
// 008832c2  83fe06               cmp esi, 6
// 008832c5  0f8cfc000000         jl 0x8833c7
// 008832cb  2bc6                 sub eax, esi
// 008832cd  99                   cdq 
// 008832ce  2bc2                 sub eax, edx
// 008832d0  d1f8                 sar eax, 1
// 008832d2  55                   push ebp
// 008832d3  8d6c1802             lea ebp, [eax + ebx + 2]
// 008832d7  8bc1                 mov eax, ecx
// 008832d9  2bc6                 sub eax, esi
// 008832db  99                   cdq 
// 008832dc  2bc2                 sub eax, edx
// 008832de  d1f8                 sar eax, 1
// 008832e0  8d443802             lea eax, [eax + edi + 2]
// 008832e4  83ee04               sub esi, 4
// 008832e7  837c243800           cmp dword ptr [esp + 0x38], 0
// 008832ec  89442410             mov dword ptr [esp + 0x10], eax
// 008832f0  7404                 je 0x8832f6
// 008832f2  33ff                 xor edi, edi
// 008832f4  eb0a                 jmp 0x883300
// 008832f6  6a10                 push 0x10
// 008832f8  ff15181ba400         call dword ptr [0xa41b18]
// 008832fe  8bf8                 mov edi, eax
// 00883300  68e8ffac00           push 0xacffe8
// 00883305  6a00                 push 0
// 00883307  6a00                 push 0
// 00883309  6a00                 push 0
// 0088330b  6a00                 push 0
// 0088330d  6a02                 push 2
// 0088330f  6a00                 push 0
// 00883311  6a00                 push 0
// 00883313  6a00                 push 0
// 00883315  6890010000           push 0x190
// 0088331a  6a00                 push 0
// 0088331c  6a00                 push 0
// 0088331e  6a00                 push 0
// 00883320  56                   push esi
// 00883321  ff153401a400         call dword ptr [0xa40134]
// 00883327  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0088332b  8bd8                 mov ebx, eax
// 0088332d  85f6                 test esi, esi
// 0088332f  7504                 jne 0x883335
// 00883331  33c0                 xor eax, eax
// 00883333  eb03                 jmp 0x883338
// 00883335  8b4604               mov eax, dword ptr [esi + 4]
// 00883338  53                   push ebx
// 00883339  50                   push eax
// 0088333a  ff158c01a400         call dword ptr [0xa4018c]
// 00883340  89442414             mov dword ptr [esp + 0x14], eax
// 00883344  85f6                 test esi, esi
// 00883346  7504                 jne 0x88334c
// 00883348  33c0                 xor eax, eax
// 0088334a  eb03                 jmp 0x88334f
// 0088334c  8b4604               mov eax, dword ptr [esi + 4]
// 0088334f  57                   push edi
// 00883350  50                   push eax
// 00883351  ff15f800a400         call dword ptr [0xa400f8]
// 00883357  6a01                 push 1
// 00883359  8bce                 mov ecx, esi
// 0088335b  e88e921400           call 0x9cc5ee
// 00883360  837c243000           cmp dword ptr [esp + 0x30], 0
// 00883365  7415                 je 0x88337c
// 00883367  837c243400           cmp dword ptr [esp + 0x34], 0
// 0088336c  7407                 je 0x883375
// 0088336e  b92897a700           mov ecx, 0xa79728
// 00883373  eb18                 jmp 0x88338d
// 00883375  b9d8cda600           mov ecx, 0xa6cdd8
// 0088337a  eb11                 jmp 0x88338d
// 0088337c  837c243400           cmp dword ptr [esp + 0x34], 0
// 00883381  b9a452ab00           mov ecx, 0xab52a4
// 00883386  7505                 jne 0x88338d
// 00883388  b9a052ab00           mov ecx, 0xab52a0
// 0088338d  85f6                 test esi, esi
// 0088338f  7504                 jne 0x883395
// 00883391  33c0                 xor eax, eax
// 00883393  eb03                 jmp 0x883398
// 00883395  8b4604               mov eax, dword ptr [esi + 4]
// 00883398  6a01                 push 1
// 0088339a  51                   push ecx
// 0088339b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0088339f  51                   push ecx
// 008833a0  55                   push ebp
// 008833a1  50                   push eax
// 008833a2  ff157001a400         call dword ptr [0xa40170]
// 008833a8  5d                   pop ebp
// 008833a9  85f6                 test esi, esi
// 008833ab  7504                 jne 0x8833b1
// 008833ad  33f6                 xor esi, esi
// 008833af  eb03                 jmp 0x8833b4
// 008833b1  8b7604               mov esi, dword ptr [esi + 4]
// 008833b4  8b542410             mov edx, dword ptr [esp + 0x10]
// 008833b8  52                   push edx
// 008833b9  56                   push esi
// 008833ba  ff158c01a400         call dword ptr [0xa4018c]
// 008833c0  53                   push ebx
// 008833c1  ff159c01a400         call dword ptr [0xa4019c]
// 008833c7  5f                   pop edi
// 008833c8  5e                   pop esi
// 008833c9  5b                   pop ebx
// 008833ca  83c408               add esp, 8
// 008833cd  c3                   ret 
// library xtp-15.2.1/Source\Controls\Scroll\XTPScrollBar.cpp (function ?DrawArrowGlyph@@YAXPAVCDC@@VCRect@@HHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Scroll/XTPScrollBar.cpp
