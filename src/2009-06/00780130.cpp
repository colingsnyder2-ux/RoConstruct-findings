// roc 2009-06 00780130  unit: CXTPStatusBarPane  size: 332 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00780130
//
// 00780130  6aff                 push -1
// 00780132  68faa08700           push 0x87a0fa
// 00780137  64a100000000         mov eax, dword ptr fs:[0]
// 0078013d  50                   push eax
// 0078013e  81ec60010000         sub esp, 0x160
// 00780144  a1304fa200           mov eax, dword ptr [0xa24f30]
// 00780149  33c4                 xor eax, esp
// 0078014b  8984245c010000       mov dword ptr [esp + 0x15c], eax
// 00780152  53                   push ebx
// 00780153  55                   push ebp
// 00780154  56                   push esi
// 00780155  57                   push edi
// 00780156  a1304fa200           mov eax, dword ptr [0xa24f30]
// 0078015b  33c4                 xor eax, esp
// 0078015d  50                   push eax
// 0078015e  8d842474010000       lea eax, [esp + 0x174]
// 00780165  64a300000000         mov dword ptr fs:[0], eax
// 0078016b  8bf1                 mov esi, ecx
// 0078016d  89742418             mov dword ptr [esp + 0x18], esi
// 00780171  e83ec40c00           call 0x84c5b4
// 00780176  33ed                 xor ebp, ebp
// 00780178  8d8e98000000         lea ecx, [esi + 0x98]
// 0078017e  89ac247c010000       mov dword ptr [esp + 0x17c], ebp
// 00780185  c7066cce8f00         mov dword ptr [esi], 0x8fce6c
// 0078018b  e8c0feffff           call 0x780050
// 00780190  8dbeb0000000         lea edi, [esi + 0xb0]
// 00780196  896f04               mov dword ptr [edi + 4], ebp
// 00780199  c707e8bb8b00         mov dword ptr [edi], 0x8bbbe8
// 0078019f  bb02000000           mov ebx, 2
// 007801a4  8bce                 mov ecx, esi
// 007801a6  889c247c010000       mov byte ptr [esp + 0x17c], bl
// 007801ad  895e64               mov dword ptr [esi + 0x64], ebx
// 007801b0  e8cb07fdff           call 0x750980
// 007801b5  85c0                 test eax, eax
// 007801b7  8d4501               lea eax, [ebp + 1]
// 007801ba  740b                 je 0x7801c7
// 007801bc  896e5c               mov dword ptr [esi + 0x5c], ebp
// 007801bf  896e60               mov dword ptr [esi + 0x60], ebp
// 007801c2  896e68               mov dword ptr [esi + 0x68], ebp
// 007801c5  eb09                 jmp 0x7801d0
// 007801c7  895e5c               mov dword ptr [esi + 0x5c], ebx
// 007801ca  895e60               mov dword ptr [esi + 0x60], ebx
// 007801cd  894668               mov dword ptr [esi + 0x68], eax
// 007801d0  68a8000000           push 0xa8
// 007801d5  89aeac000000         mov dword ptr [esi + 0xac], ebp
// 007801db  89aec8000000         mov dword ptr [esi + 0xc8], ebp
// 007801e1  8986cc000000         mov dword ptr [esi + 0xcc], eax
// 007801e7  8986b8000000         mov dword ptr [esi + 0xb8], eax
// 007801ed  e84688f9ff           call 0x718a38
// 007801f2  83c404               add esp, 4
// 007801f5  89442414             mov dword ptr [esp + 0x14], eax
// 007801f9  c684247c01000003     mov byte ptr [esp + 0x17c], 3
// 00780201  3bc5                 cmp eax, ebp
// 00780203  7409                 je 0x78020e
// 00780205  8bc8                 mov ecx, eax
// 00780207  e8d4670000           call 0x7869e0
// 0078020c  eb02                 jmp 0x780210
// 0078020e  33c0                 xor eax, eax
// 00780210  8d4c241c             lea ecx, [esp + 0x1c]
// 00780214  889c247c010000       mov byte ptr [esp + 0x17c], bl
// 0078021b  8986d0000000         mov dword ptr [esi + 0xd0], eax
// 00780221  e8ea840000           call 0x788710
// 00780226  8d8424f8000000       lea eax, [esp + 0xf8]
// 0078022d  50                   push eax
// 0078022e  ff15ece08900         call dword ptr [0x89e0ec]
// 00780234  50                   push eax
// 00780235  8bcf                 mov ecx, edi
// 00780237  e8c68df9ff           call 0x719002
// 0078023c  89aebc000000         mov dword ptr [esi + 0xbc], ebp
// 00780242  c786c400000001000000 mov dword ptr [esi + 0xc4], 1
// 0078024c  89aec0000000         mov dword ptr [esi + 0xc0], ebp
// 00780252  8bc6                 mov eax, esi
// 00780254  8b8c2474010000       mov ecx, dword ptr [esp + 0x174]
// 0078025b  64890d00000000       mov dword ptr fs:[0], ecx
// 00780262  59                   pop ecx
// 00780263  5f                   pop edi
// 00780264  5e                   pop esi
// 00780265  5d                   pop ebp
// 00780266  5b                   pop ebx
// 00780267  8b8c245c010000       mov ecx, dword ptr [esp + 0x15c]
// 0078026e  33cc                 xor ecx, esp
// 00780270  e805a3f9ff           call 0x71a57a
// 00780275  81c46c010000         add esp, 0x16c
// 0078027b  c3                   ret 
// copied from an identical function in another client (function ??0CXTPStatusBar@@QAE@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPStatusBar.cpp