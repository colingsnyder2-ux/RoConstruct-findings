// roc 2009-12 00832960  unit: CRobloxTreeCtrl  size: 506 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00832960
//
// 00832960  81ec88000000         sub esp, 0x88
// 00832966  53                   push ebx
// 00832967  55                   push ebp
// 00832968  56                   push esi
// 00832969  8bf1                 mov esi, ecx
// 0083296b  8b4634               mov eax, dword ptr [esi + 0x34]
// 0083296e  c6463800             mov byte ptr [esi + 0x38], 0
// 00832972  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00832975  57                   push edi
// 00832976  51                   push ecx
// 00832977  ff152ccc9800         call dword ptr [0x98cc2c]
// 0083297d  8b3ddccb9800         mov edi, dword ptr [0x98cbdc]
// 00832983  6a45                 push 0x45
// 00832985  33ed                 xor ebp, ebp
// 00832987  ffd7                 call edi
// 00832989  6a44                 push 0x44
// 0083298b  89442414             mov dword ptr [esp + 0x14], eax
// 0083298f  ffd7                 call edi
// 00832991  8b1db0ca9800         mov ebx, dword ptr [0x98cab0]
// 00832997  8bf8                 mov edi, eax
// 00832999  8da42400000000       lea esp, [esp]
// 008329a0  6a00                 push 0
// 008329a2  6a00                 push 0
// 008329a4  6a00                 push 0
// 008329a6  8d542420             lea edx, [esp + 0x20]
// 008329aa  52                   push edx
// 008329ab  ffd3                 call ebx
// 008329ad  85c0                 test eax, eax
// 008329af  746e                 je 0x832a1f
// 008329b1  ff1528cc9800         call dword ptr [0x98cc28]
// 008329b7  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 008329ba  3b4120               cmp eax, dword ptr [ecx + 0x20]
// 008329bd  7560                 jne 0x832a1f
// 008329bf  8b442418             mov eax, dword ptr [esp + 0x18]
// 008329c3  2d00020000           sub eax, 0x200
// 008329c8  741f                 je 0x8329e9
// 008329ca  83e802               sub eax, 2
// 008329cd  0f84d0000000         je 0x832aa3
// 008329d3  83e803               sub eax, 3
// 008329d6  0f84c7000000         je 0x832aa3
// 008329dc  8d542414             lea edx, [esp + 0x14]
// 008329e0  52                   push edx
// 008329e1  ff1594ca9800         call dword ptr [0x98ca94]
// 008329e7  ebb7                 jmp 0x8329a0
// 008329e9  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008329ed  0fbfc1               movsx eax, cx
// 008329f0  2b8424a8000000       sub eax, dword ptr [esp + 0xa8]
// 008329f7  c1e910               shr ecx, 0x10
// 008329fa  99                   cdq 
// 008329fb  33c2                 xor eax, edx
// 008329fd  2bc2                 sub eax, edx
// 008329ff  3bc7                 cmp eax, edi
// 00832a01  0fbfc9               movsx ecx, cx
// 00832a04  7f14                 jg 0x832a1a
// 00832a06  8bc1                 mov eax, ecx
// 00832a08  2b8424ac000000       sub eax, dword ptr [esp + 0xac]
// 00832a0f  99                   cdq 
// 00832a10  33c2                 xor eax, edx
// 00832a12  2bc2                 sub eax, edx
// 00832a14  3b442410             cmp eax, dword ptr [esp + 0x10]
// 00832a18  7e86                 jle 0x8329a0
// 00832a1a  bd02000000           mov ebp, 2
// 00832a1f  ff1520cc9800         call dword ptr [0x98cc20]
// 00832a25  8b4634               mov eax, dword ptr [esi + 0x34]
// 00832a28  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00832a2b  894c2430             mov dword ptr [esp + 0x30], ecx
// 00832a2f  8b5020               mov edx, dword ptr [eax + 0x20]
// 00832a32  52                   push edx
// 00832a33  ff15e8ca9800         call dword ptr [0x98cae8]
// 00832a39  8bbc249c000000       mov edi, dword ptr [esp + 0x9c]
// 00832a40  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00832a43  57                   push edi
// 00832a44  89442438             mov dword ptr [esp + 0x38], eax
// 00832a48  c744246c14000000     mov dword ptr [esp + 0x6c], 0x14
// 00832a50  897c2470             mov dword ptr [esp + 0x70], edi
// 00832a54  e8b517fcff           call 0x7f420e
// 00832a59  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00832a5c  8984248c000000       mov dword ptr [esp + 0x8c], eax
// 00832a63  e80a3a0f00           call 0x926472
// 00832a68  8bd8                 mov ebx, eax
// 00832a6a  83fd01               cmp ebp, 1
// 00832a6d  0f8581000000         jne 0x832af4
// 00832a73  8a8424a4000000       mov al, byte ptr [esp + 0xa4]
// 00832a7a  8b9c24a0000000       mov ebx, dword ptr [esp + 0xa0]
// 00832a81  a804                 test al, 4
// 00832a83  753e                 jne 0x832ac3
// 00832a85  85db                 test ebx, ebx
// 00832a87  743a                 je 0x832ac3
// 00832a89  8bce                 mov ecx, esi
// 00832a8b  a808                 test al, 8
// 00832a8d  741e                 je 0x832aad
// 00832a8f  6a02                 push 2
// 00832a91  57                   push edi
// 00832a92  e8e9f9ffff           call 0x832480
// 00832a97  f7d0                 not eax
// 00832a99  83e002               and eax, 2
// 00832a9c  6a03                 push 3
// 00832a9e  0bc5                 or eax, ebp
// 00832aa0  50                   push eax
// 00832aa1  eb18                 jmp 0x832abb
// 00832aa3  bd01000000           mov ebp, 1
// 00832aa8  e972ffffff           jmp 0x832a1f
// 00832aad  8b06                 mov eax, dword ptr [esi]
// 00832aaf  8b5050               mov edx, dword ptr [eax + 0x50]
// 00832ab2  57                   push edi
// 00832ab3  6a00                 push 0
// 00832ab5  ffd2                 call edx
// 00832ab7  6a03                 push 3
// 00832ab9  6a03                 push 3
// 00832abb  57                   push edi
// 00832abc  8bce                 mov ecx, esi
// 00832abe  e88df6ffff           call 0x832150
// 00832ac3  8b4634               mov eax, dword ptr [esi + 0x34]
// 00832ac6  8b7820               mov edi, dword ptr [eax + 0x20]
// 00832ac9  ff15eccb9800         call dword ptr [0x98cbec]
// 00832acf  3bc7                 cmp eax, edi
// 00832ad1  7407                 je 0x832ada
// 00832ad3  57                   push edi
// 00832ad4  ff15c8cb9800         call dword ptr [0x98cbc8]
// 00832ada  8b16                 mov edx, dword ptr [esi]
// 00832adc  8b524c               mov edx, dword ptr [edx + 0x4c]
// 00832adf  f7db                 neg ebx
// 00832ae1  1bdb                 sbb ebx, ebx
// 00832ae3  83e303               and ebx, 3
// 00832ae6  83c3fb               add ebx, -5
// 00832ae9  8d442430             lea eax, [esp + 0x30]
// 00832aed  895c2438             mov dword ptr [esp + 0x38], ebx
// 00832af1  50                   push eax
// 00832af2  eb51                 jmp 0x832b45
// 00832af4  83fd02               cmp ebp, 2
// 00832af7  7554                 jne 0x832b4d
// 00832af9  6a03                 push 3
// 00832afb  6a03                 push 3
// 00832afd  57                   push edi
// 00832afe  8bce                 mov ecx, esi
// 00832b00  e84bf6ffff           call 0x832150
// 00832b05  f6c310               test bl, 0x10
// 00832b08  753f                 jne 0x832b49
// 00832b0a  8b8c24a8000000       mov ecx, dword ptr [esp + 0xa8]
// 00832b11  8b9424ac000000       mov edx, dword ptr [esp + 0xac]
// 00832b18  33c0                 xor eax, eax
// 00832b1a  398424a0000000       cmp dword ptr [esp + 0xa0], eax
// 00832b21  898c2490000000       mov dword ptr [esp + 0x90], ecx
// 00832b28  0f95c0               setne al
// 00832b2b  8d4c2430             lea ecx, [esp + 0x30]
// 00832b2f  89942494000000       mov dword ptr [esp + 0x94], edx
// 00832b36  51                   push ecx
// 00832b37  0568feffff           add eax, 0xfffffe68
// 00832b3c  8944243c             mov dword ptr [esp + 0x3c], eax
// 00832b40  8b06                 mov eax, dword ptr [esi]
// 00832b42  8b504c               mov edx, dword ptr [eax + 0x4c]
// 00832b45  8bce                 mov ecx, esi
// 00832b47  ffd2                 call edx
// 00832b49  c6463801             mov byte ptr [esi + 0x38], 1
// 00832b4d  5f                   pop edi
// 00832b4e  5e                   pop esi
// 00832b4f  5d                   pop ebp
// 00832b50  5b                   pop ebx
// 00832b51  81c488000000         add esp, 0x88
// 00832b57  c21400               ret 0x14
// library xtp-11.2.2/Source\Controls\XTTreeBase.cpp (function ?DoAction@CXTTreeBase@@MAEXPAU_TREEITEM@@HIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTTreeBase.cpp
