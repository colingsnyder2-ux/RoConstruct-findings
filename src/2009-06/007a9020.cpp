// roc 2009-06 007a9020  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 669 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007a9020
//
// 007a9020  6aff                 push -1
// 007a9022  68f8c68700           push 0x87c6f8
// 007a9027  64a100000000         mov eax, dword ptr fs:[0]
// 007a902d  50                   push eax
// 007a902e  83ec48               sub esp, 0x48
// 007a9031  53                   push ebx
// 007a9032  55                   push ebp
// 007a9033  56                   push esi
// 007a9034  57                   push edi
// 007a9035  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007a903a  33c4                 xor eax, esp
// 007a903c  50                   push eax
// 007a903d  8d44245c             lea eax, [esp + 0x5c]
// 007a9041  64a300000000         mov dword ptr fs:[0], eax
// 007a9047  8bf1                 mov esi, ecx
// 007a9049  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 007a904d  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 007a9053  83f804               cmp eax, 4
// 007a9056  7511                 jne 0x7a9069
// 007a9058  83b9f800000002       cmp dword ptr [ecx + 0xf8], 2
// 007a905f  c744241401000000     mov dword ptr [esp + 0x14], 1
// 007a9067  7508                 jne 0x7a9071
// 007a9069  c744241400000000     mov dword ptr [esp + 0x14], 0
// 007a9071  33ed                 xor ebp, ebp
// 007a9073  396c247c             cmp dword ptr [esp + 0x7c], ebp
// 007a9077  7537                 jne 0x7a90b0
// 007a9079  396c2414             cmp dword ptr [esp + 0x14], ebp
// 007a907d  7412                 je 0x7a9091
// 007a907f  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 007a9083  c70006000000         mov dword ptr [eax], 6
// 007a9089  896804               mov dword ptr [eax + 4], ebp
// 007a908c  e916020000           jmp 0x7a92a7
// 007a9091  8b442478             mov eax, dword ptr [esp + 0x78]
// 007a9095  8b7c246c             mov edi, dword ptr [esp + 0x6c]
// 007a9099  55                   push ebp
// 007a909a  50                   push eax
// 007a909b  51                   push ecx
// 007a909c  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 007a90a0  51                   push ecx
// 007a90a1  57                   push edi
// 007a90a2  8bce                 mov ecx, esi
// 007a90a4  e8f75c0000           call 0x7aeda0
// 007a90a9  8bc7                 mov eax, edi
// 007a90ab  e9f7010000           jmp 0x7a92a7
// 007a90b0  8b4120               mov eax, dword ptr [ecx + 0x20]
// 007a90b3  8d542438             lea edx, [esp + 0x38]
// 007a90b7  52                   push edx
// 007a90b8  50                   push eax
// 007a90b9  ff1514ee8900         call dword ptr [0x89ee14]
// 007a90bf  8b7c2478             mov edi, dword ptr [esp + 0x78]
// 007a90c3  8b8fc0000000         mov ecx, dword ptr [edi + 0xc0]
// 007a90c9  8b5c2470             mov ebx, dword ptr [esp + 0x70]
// 007a90cd  8b97c4000000         mov edx, dword ptr [edi + 0xc4]
// 007a90d3  8b87c8000000         mov eax, dword ptr [edi + 0xc8]
// 007a90d9  894c2428             mov dword ptr [esp + 0x28], ecx
// 007a90dd  8b8fcc000000         mov ecx, dword ptr [edi + 0xcc]
// 007a90e3  8954242c             mov dword ptr [esp + 0x2c], edx
// 007a90e7  89442430             mov dword ptr [esp + 0x30], eax
// 007a90eb  894c2434             mov dword ptr [esp + 0x34], ecx
// 007a90ef  3bdd                 cmp ebx, ebp
// 007a90f1  7403                 je 0x7a90f6
// 007a90f3  8b6b04               mov ebp, dword ptr [ebx + 4]
// 007a90f6  6a27                 push 0x27
// 007a90f8  8bce                 mov ecx, esi
// 007a90fa  e88196f7ff           call 0x722780
// 007a90ff  50                   push eax
// 007a9100  55                   push ebp
// 007a9101  8d4c2450             lea ecx, [esp + 0x50]
// 007a9105  e8f677fcff           call 0x770900
// 007a910a  8b97b0000000         mov edx, dword ptr [edi + 0xb0]
// 007a9110  8b442474             mov eax, dword ptr [esp + 0x74]
// 007a9114  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 007a911a  8b8fb8000000         mov ecx, dword ptr [edi + 0xb8]
// 007a9120  8bafb4000000         mov ebp, dword ptr [edi + 0xb4]
// 007a9126  89542418             mov dword ptr [esp + 0x18], edx
// 007a912a  8b97bc000000         mov edx, dword ptr [edi + 0xbc]
// 007a9130  c744246400000000     mov dword ptr [esp + 0x64], 0
// 007a9138  894c2420             mov dword ptr [esp + 0x20], ecx
// 007a913c  89542424             mov dword ptr [esp + 0x24], edx
// 007a9140  83f803               cmp eax, 3
// 007a9143  0f84c2000000         je 0x7a920b
// 007a9149  83f802               cmp eax, 2
// 007a914c  0f84b9000000         je 0x7a920b
// 007a9152  85c0                 test eax, eax
// 007a9154  743c                 je 0x7a9192
// 007a9156  83f801               cmp eax, 1
// 007a9159  7437                 je 0x7a9192
// 007a915b  837c241400           cmp dword ptr [esp + 0x14], 0
// 007a9160  7530                 jne 0x7a9192
// 007a9162  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 007a9166  8b542474             mov edx, dword ptr [esp + 0x74]
// 007a916a  51                   push ecx
// 007a916b  57                   push edi
// 007a916c  8b7c2474             mov edi, dword ptr [esp + 0x74]
// 007a9170  52                   push edx
// 007a9171  53                   push ebx
// 007a9172  57                   push edi
// 007a9173  8bce                 mov ecx, esi
// 007a9175  e8265c0000           call 0x7aeda0
// 007a917a  8d4c2448             lea ecx, [esp + 0x48]
// 007a917e  c7442464ffffffff     mov dword ptr [esp + 0x64], 0xffffffff
// 007a9186  e80578fcff           call 0x770990
// 007a918b  8bc7                 mov eax, edi
// 007a918d  e915010000           jmp 0x7a92a7
// 007a9192  83bf9400000000       cmp dword ptr [edi + 0x94], 0
// 007a9199  7537                 jne 0x7a91d2
// 007a919b  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 007a919f  6a27                 push 0x27
// 007a91a1  83c2fc               add edx, -4
// 007a91a4  52                   push edx
// 007a91a5  8d47fc               lea eax, [edi - 4]
// 007a91a8  50                   push eax
// 007a91a9  8d4d04               lea ecx, [ebp + 4]
// 007a91ac  51                   push ecx
// 007a91ad  50                   push eax
// 007a91ae  53                   push ebx
// 007a91af  8bce                 mov ecx, esi
// 007a91b1  e87aaaf7ff           call 0x723c30
// 007a91b6  83be4405000000       cmp dword ptr [esi + 0x544], 0
// 007a91bd  0f85c0000000         jne 0x7a9283
// 007a91c3  8b542424             mov edx, dword ptr [esp + 0x24]
// 007a91c7  8d47fd               lea eax, [edi - 3]
// 007a91ca  83c2fd               add edx, -3
// 007a91cd  e9a0000000           jmp 0x7a9272
// 007a91d2  837c241400           cmp dword ptr [esp + 0x14], 0
// 007a91d7  0f85a6000000         jne 0x7a9283
// 007a91dd  6a27                 push 0x27
// 007a91df  8d45fc               lea eax, [ebp - 4]
// 007a91e2  50                   push eax
// 007a91e3  51                   push ecx
// 007a91e4  50                   push eax
// 007a91e5  8b442428             mov eax, dword ptr [esp + 0x28]
// 007a91e9  83c004               add eax, 4
// 007a91ec  50                   push eax
// 007a91ed  53                   push ebx
// 007a91ee  8bce                 mov ecx, esi
// 007a91f0  e83baaf7ff           call 0x723c30
// 007a91f5  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007a91f9  8b542418             mov edx, dword ptr [esp + 0x18]
// 007a91fd  6a14                 push 0x14
// 007a91ff  83c5fd               add ebp, -3
// 007a9202  55                   push ebp
// 007a9203  51                   push ecx
// 007a9204  55                   push ebp
// 007a9205  83c205               add edx, 5
// 007a9208  52                   push edx
// 007a9209  eb70                 jmp 0x7a927b
// 007a920b  83bf9400000000       cmp dword ptr [edi + 0x94], 0
// 007a9212  6a27                 push 0x27
// 007a9214  753f                 jne 0x7a9255
// 007a9216  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 007a921a  8d47fc               lea eax, [edi - 4]
// 007a921d  50                   push eax
// 007a921e  83c1fc               add ecx, -4
// 007a9221  51                   push ecx
// 007a9222  50                   push eax
// 007a9223  8b442428             mov eax, dword ptr [esp + 0x28]
// 007a9227  83c004               add eax, 4
// 007a922a  50                   push eax
// 007a922b  53                   push ebx
// 007a922c  8bce                 mov ecx, esi
// 007a922e  e8fda9f7ff           call 0x723c30
// 007a9233  83be4405000000       cmp dword ptr [esi + 0x544], 0
// 007a923a  7547                 jne 0x7a9283
// 007a923c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007a9240  8b542418             mov edx, dword ptr [esp + 0x18]
// 007a9244  6a14                 push 0x14
// 007a9246  8d47fd               lea eax, [edi - 3]
// 007a9249  50                   push eax
// 007a924a  83c1fd               add ecx, -3
// 007a924d  51                   push ecx
// 007a924e  50                   push eax
// 007a924f  83c205               add edx, 5
// 007a9252  52                   push edx
// 007a9253  eb26                 jmp 0x7a927b
// 007a9255  8d4102               lea eax, [ecx + 2]
// 007a9258  52                   push edx
// 007a9259  50                   push eax
// 007a925a  8d4d04               lea ecx, [ebp + 4]
// 007a925d  51                   push ecx
// 007a925e  50                   push eax
// 007a925f  53                   push ebx
// 007a9260  8bce                 mov ecx, esi
// 007a9262  e8c9a9f7ff           call 0x723c30
// 007a9267  8b442420             mov eax, dword ptr [esp + 0x20]
// 007a926b  8b542424             mov edx, dword ptr [esp + 0x24]
// 007a926f  83c003               add eax, 3
// 007a9272  6a14                 push 0x14
// 007a9274  52                   push edx
// 007a9275  50                   push eax
// 007a9276  83c505               add ebp, 5
// 007a9279  55                   push ebp
// 007a927a  50                   push eax
// 007a927b  53                   push ebx
// 007a927c  8bce                 mov ecx, esi
// 007a927e  e8ada9f7ff           call 0x723c30
// 007a9283  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 007a9287  8d4c2448             lea ecx, [esp + 0x48]
// 007a928b  c70600000000         mov dword ptr [esi], 0
// 007a9291  c7460400000000       mov dword ptr [esi + 4], 0
// 007a9298  c7442464ffffffff     mov dword ptr [esp + 0x64], 0xffffffff
// 007a92a0  e8eb76fcff           call 0x770990
// 007a92a5  8bc6                 mov eax, esi
// 007a92a7  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 007a92ab  64890d00000000       mov dword ptr fs:[0], ecx
// 007a92b2  59                   pop ecx
// 007a92b3  5f                   pop edi
// 007a92b4  5e                   pop esi
// 007a92b5  5d                   pop ebp
// 007a92b6  5b                   pop ebx
// 007a92b7  83c454               add esp, 0x54
// 007a92ba  c21400               ret 0x14
// copied from an identical function in another client (function ?DrawCommandBarSeparator@CXTPOffice2003Theme@XTPPaintThemes@@MAE?AVCSize@@PAVCDC@@PAVCXTPCommandBar@@PAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPOffice2003Theme.cpp