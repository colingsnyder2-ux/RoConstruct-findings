// roc 2009-12 00857380  unit: CXTPTabClientWnd  size: 436 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00857380
//
// 00857380  6aff                 push -1
// 00857382  689be09500           push 0x95e09b
// 00857387  64a100000000         mov eax, dword ptr fs:[0]
// 0085738d  50                   push eax
// 0085738e  83ec14               sub esp, 0x14
// 00857391  53                   push ebx
// 00857392  55                   push ebp
// 00857393  56                   push esi
// 00857394  57                   push edi
// 00857395  a10052b600           mov eax, dword ptr [0xb65200]
// 0085739a  33c4                 xor eax, esp
// 0085739c  50                   push eax
// 0085739d  8d442428             lea eax, [esp + 0x28]
// 008573a1  64a300000000         mov dword ptr fs:[0], eax
// 008573a7  8bf1                 mov esi, ecx
// 008573a9  8b8eec000000         mov ecx, dword ptr [esi + 0xec]
// 008573af  85c9                 test ecx, ecx
// 008573b1  7407                 je 0x8573ba
// 008573b3  8b01                 mov eax, dword ptr [ecx]
// 008573b5  8b5058               mov edx, dword ptr [eax + 0x58]
// 008573b8  ffd2                 call edx
// 008573ba  8b06                 mov eax, dword ptr [esi]
// 008573bc  8b9048010000         mov edx, dword ptr [eax + 0x148]
// 008573c2  8bce                 mov ecx, esi
// 008573c4  ffd2                 call edx
// 008573c6  8bf8                 mov edi, eax
// 008573c8  85ff                 test edi, edi
// 008573ca  0f844e010000         je 0x85751e
// 008573d0  83beb400000000       cmp dword ptr [esi + 0xb4], 0
// 008573d7  7419                 je 0x8573f2
// 008573d9  8b8eec000000         mov ecx, dword ptr [esi + 0xec]
// 008573df  85c9                 test ecx, ecx
// 008573e1  0f8493000000         je 0x85747a
// 008573e7  56                   push esi
// 008573e8  e813d3f9ff           call 0x7f4700
// 008573ed  e988000000           jmp 0x85747a
// 008573f2  83be8000000000       cmp dword ptr [esi + 0x80], 0
// 008573f9  757f                 jne 0x85747a
// 008573fb  8d5fa8               lea ebx, [edi - 0x58]
// 008573fe  e81bc7f9ff           call 0x7f3b1e
// 00857403  68007f0000           push 0x7f00
// 00857408  6a00                 push 0
// 0085740a  ff1548ca9800         call dword ptr [0x98ca48]
// 00857410  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 00857416  6a00                 push 0
// 00857418  6a00                 push 0
// 0085741a  8be8                 mov ebp, eax
// 0085741c  8b03                 mov eax, dword ptr [ebx]
// 0085741e  51                   push ecx
// 0085741f  8d4c2424             lea ecx, [esp + 0x24]
// 00857423  89442420             mov dword ptr [esp + 0x20], eax
// 00857427  e8043effff           call 0x84b230
// 0085742c  50                   push eax
// 0085742d  6800000056           push 0x56000000
// 00857432  6856fd9900           push 0x99fd56
// 00857437  6a00                 push 0
// 00857439  6a00                 push 0
// 0085743b  55                   push ebp
// 0085743c  6a08                 push 8
// 0085743e  e8e3cdf9ff           call 0x7f4226
// 00857443  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00857447  50                   push eax
// 00857448  8b425c               mov eax, dword ptr [edx + 0x5c]
// 0085744b  8bcb                 mov ecx, ebx
// 0085744d  ffd0                 call eax
// 0085744f  8b8eec000000         mov ecx, dword ptr [esi + 0xec]
// 00857455  85c9                 test ecx, ecx
// 00857457  7406                 je 0x85745f
// 00857459  53                   push ebx
// 0085745a  e8a1d2f9ff           call 0x7f4700
// 0085745f  8bce                 mov ecx, esi
// 00857461  e81adaffff           call 0x854e80
// 00857466  85c0                 test eax, eax
// 00857468  7410                 je 0x85747a
// 0085746a  6a00                 push 0
// 0085746c  6800004000           push 0x400000
// 00857471  6a00                 push 0
// 00857473  8bcb                 mov ecx, ebx
// 00857475  e886c9f9ff           call 0x7f3e00
// 0085747a  8b442438             mov eax, dword ptr [esp + 0x38]
// 0085747e  83f8ff               cmp eax, -1
// 00857481  7507                 jne 0x85748a
// 00857483  8bce                 mov ecx, esi
// 00857485  e8c6f1ffff           call 0x856650
// 0085748a  6a01                 push 1
// 0085748c  57                   push edi
// 0085748d  50                   push eax
// 0085748e  8d4e68               lea ecx, [esi + 0x68]
// 00857491  e8aa660900           call 0x8edb40
// 00857496  33db                 xor ebx, ebx
// 00857498  53                   push ebx
// 00857499  8bcf                 mov ecx, edi
// 0085749b  89b790000000         mov dword ptr [edi + 0x90], esi
// 008574a1  e8aa6d0700           call 0x8ce250
// 008574a6  33c9                 xor ecx, ecx
// 008574a8  51                   push ecx
// 008574a9  b8dc000000           mov eax, 0xdc
// 008574ae  50                   push eax
// 008574af  83ec08               sub esp, 8
// 008574b2  8bc4                 mov eax, esp
// 008574b4  89642448             mov dword ptr [esp + 0x48], esp
// 008574b8  b912000000           mov ecx, 0x12
// 008574bd  8918                 mov dword ptr [eax], ebx
// 008574bf  895804               mov dword ptr [eax + 4], ebx
// 008574c2  51                   push ecx
// 008574c3  b846000000           mov eax, 0x46
// 008574c8  50                   push eax
// 008574c9  8bcf                 mov ecx, edi
// 008574cb  e8106f0700           call 0x8ce3e0
// 008574d0  6a38                 push 0x38
// 008574d2  e889c3f9ff           call 0x7f3860
// 008574d7  83c404               add esp, 4
// 008574da  89442438             mov dword ptr [esp + 0x38], eax
// 008574de  895c2430             mov dword ptr [esp + 0x30], ebx
// 008574e2  3bc3                 cmp eax, ebx
// 008574e4  740b                 je 0x8574f1
// 008574e6  56                   push esi
// 008574e7  57                   push edi
// 008574e8  8bc8                 mov ecx, eax
// 008574ea  e8d1d3ffff           call 0x8548c0
// 008574ef  eb02                 jmp 0x8574f3
// 008574f1  33c0                 xor eax, eax
// 008574f3  6a01                 push 1
// 008574f5  50                   push eax
// 008574f6  6a02                 push 2
// 008574f8  8d4f68               lea ecx, [edi + 0x68]
// 008574fb  c744243cffffffff     mov dword ptr [esp + 0x3c], 0xffffffff
// 00857503  e838660900           call 0x8edb40
// 00857508  8b16                 mov edx, dword ptr [esi]
// 0085750a  8b8274010000         mov eax, dword ptr [edx + 0x174]
// 00857510  57                   push edi
// 00857511  8bce                 mov ecx, esi
// 00857513  ffd0                 call eax
// 00857515  c7466001000000       mov dword ptr [esi + 0x60], 1
// 0085751c  8bc7                 mov eax, edi
// 0085751e  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00857522  64890d00000000       mov dword ptr fs:[0], ecx
// 00857529  59                   pop ecx
// 0085752a  5f                   pop edi
// 0085752b  5e                   pop esi
// 0085752c  5d                   pop ebp
// 0085752d  5b                   pop ebx
// 0085752e  83c420               add esp, 0x20
// 00857531  c20400               ret 4
// copied from an identical function in another client (function ?AddWorkspace@CXTPTabClientWnd@@MAEPAVCWorkspace@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPTabClientWnd.cpp