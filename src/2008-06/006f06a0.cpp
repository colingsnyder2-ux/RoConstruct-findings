// roc 2008-06 006f06a0  unit: CXTPPopupBar  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f06a0
//
// 006f06a0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006f06a4  53                   push ebx
// 006f06a5  8b5c2408             mov ebx, dword ptr [esp + 8]
// 006f06a9  56                   push esi
// 006f06aa  8bf1                 mov esi, ecx
// 006f06ac  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006f06b0  50                   push eax
// 006f06b1  51                   push ecx
// 006f06b2  53                   push ebx
// 006f06b3  8bce                 mov ecx, esi
// 006f06b5  e8f67bfcff           call 0x6b82b0
// 006f06ba  85c0                 test eax, eax
// 006f06bc  7505                 jne 0x6f06c3
// 006f06be  5e                   pop esi
// 006f06bf  5b                   pop ebx
// 006f06c0  c20c00               ret 0xc
// 006f06c3  57                   push edi
// 006f06c4  8bce                 mov ecx, esi
// 006f06c6  e8f572fcff           call 0x6b79c0
// 006f06cb  8b5620               mov edx, dword ptr [esi + 0x20]
// 006f06ce  6a00                 push 0
// 006f06d0  6afd                 push -3
// 006f06d2  85db                 test ebx, ebx
// 006f06d4  8b1d502d8000         mov ebx, dword ptr [0x802d50]
// 006f06da  8bf8                 mov edi, eax
// 006f06dc  8d4e5c               lea ecx, [esi + 0x5c]
// 006f06df  52                   push edx
// 006f06e0  755f                 jne 0x6f0741
// 006f06e2  6a07                 push 7
// 006f06e4  e8a77bffff           call 0x6e8290
// 006f06e9  8b06                 mov eax, dword ptr [esi]
// 006f06eb  8b5068               mov edx, dword ptr [eax + 0x68]
// 006f06ee  8bce                 mov ecx, esi
// 006f06f0  ffd2                 call edx
// 006f06f2  8b06                 mov eax, dword ptr [esi]
// 006f06f4  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 006f06fa  8bce                 mov ecx, esi
// 006f06fc  ffd2                 call edx
// 006f06fe  85c0                 test eax, eax
// 006f0700  740b                 je 0x6f070d
// 006f0702  6a00                 push 0
// 006f0704  6aff                 push -1
// 006f0706  8bc8                 mov ecx, eax
// 006f0708  e8c367fcff           call 0x6b6ed0
// 006f070d  85ff                 test edi, edi
// 006f070f  741c                 je 0x6f072d
// 006f0711  8b4720               mov eax, dword ptr [edi + 0x20]
// 006f0714  50                   push eax
// 006f0715  ffd3                 call ebx
// 006f0717  85c0                 test eax, eax
// 006f0719  7412                 je 0x6f072d
// 006f071b  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 006f071e  56                   push esi
// 006f071f  6a00                 push 0
// 006f0721  685d280000           push 0x285d
// 006f0726  51                   push ecx
// 006f0727  ff15142e8000         call dword ptr [0x802e14]
// 006f072d  6a01                 push 1
// 006f072f  ff1560228000         call dword ptr [0x802260]
// 006f0735  c7868001000000000000 mov dword ptr [esi + 0x180], 0
// 006f073f  eb07                 jmp 0x6f0748
// 006f0741  6a06                 push 6
// 006f0743  e8487bffff           call 0x6e8290
// 006f0748  85ff                 test edi, edi
// 006f074a  7414                 je 0x6f0760
// 006f074c  8b4720               mov eax, dword ptr [edi + 0x20]
// 006f074f  50                   push eax
// 006f0750  ffd3                 call ebx
// 006f0752  85c0                 test eax, eax
// 006f0754  740a                 je 0x6f0760
// 006f0756  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 006f0759  51                   push ecx
// 006f075a  ff15942c8000         call dword ptr [0x802c94]
// 006f0760  5f                   pop edi
// 006f0761  5e                   pop esi
// 006f0762  b801000000           mov eax, 1
// 006f0767  5b                   pop ebx
// 006f0768  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPPopupBar.cpp (function ?SetTrackingMode@CXTPPopupBar@@MAEHHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPPopupBar.cpp
