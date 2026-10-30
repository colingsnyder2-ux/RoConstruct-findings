// roc 2009-12 007fa160  unit: CXTPEdit  size: 379 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007fa160
//
// 007fa160  6aff                 push -1
// 007fa162  687f8b9500           push 0x958b7f
// 007fa167  64a100000000         mov eax, dword ptr fs:[0]
// 007fa16d  50                   push eax
// 007fa16e  83ec08               sub esp, 8
// 007fa171  55                   push ebp
// 007fa172  56                   push esi
// 007fa173  57                   push edi
// 007fa174  a10052b600           mov eax, dword ptr [0xb65200]
// 007fa179  33c4                 xor eax, esp
// 007fa17b  50                   push eax
// 007fa17c  8d442418             lea eax, [esp + 0x18]
// 007fa180  64a300000000         mov dword ptr fs:[0], eax
// 007fa186  8bf1                 mov esi, ecx
// 007fa188  89742410             mov dword ptr [esp + 0x10], esi
// 007fa18c  e83f090400           call 0x83aad0
// 007fa191  33ff                 xor edi, edi
// 007fa193  8d8e94010000         lea ecx, [esi + 0x194]
// 007fa199  897c2420             mov dword ptr [esp + 0x20], edi
// 007fa19d  c706cc1b9f00         mov dword ptr [esi], 0x9f1bcc
// 007fa1a3  c746206c1b9f00       mov dword ptr [esi + 0x20], 0x9f1b6c
// 007fa1aa  ff1574de9800         call dword ptr [0x98de74]
// 007fa1b0  8d8ea8010000         lea ecx, [esi + 0x1a8]
// 007fa1b6  ff1574de9800         call dword ptr [0x98de74]
// 007fa1bc  8daec8010000         lea ebp, [esi + 0x1c8]
// 007fa1c2  8bcd                 mov ecx, ebp
// 007fa1c4  ff1574de9800         call dword ptr [0x98de74]
// 007fa1ca  8bce                 mov ecx, esi
// 007fa1cc  c644242003           mov byte ptr [esp + 0x20], 3
// 007fa1d1  e872c21200           call 0x926448
// 007fa1d6  6856fd9900           push 0x99fd56
// 007fa1db  8bcd                 mov ecx, ebp
// 007fa1dd  c786fc00000005000000 mov dword ptr [esi + 0xfc], 5
// 007fa1e7  89be88010000         mov dword ptr [esi + 0x188], edi
// 007fa1ed  89be8c010000         mov dword ptr [esi + 0x18c], edi
// 007fa1f3  c7866001000064000000 mov dword ptr [esi + 0x160], 0x64
// 007fa1fd  89bea0010000         mov dword ptr [esi + 0x1a0], edi
// 007fa203  89bea4010000         mov dword ptr [esi + 0x1a4], edi
// 007fa209  89be84010000         mov dword ptr [esi + 0x184], edi
// 007fa20f  ff155cde9800         call dword ptr [0x98de5c]
// 007fa215  83c8ff               or eax, 0xffffffff
// 007fa218  6860020000           push 0x260
// 007fa21d  898690010000         mov dword ptr [esi + 0x190], eax
// 007fa223  8986d8010000         mov dword ptr [esi + 0x1d8], eax
// 007fa229  89be9c010000         mov dword ptr [esi + 0x19c], edi
// 007fa22f  89be98010000         mov dword ptr [esi + 0x198], edi
// 007fa235  89beac010000         mov dword ptr [esi + 0x1ac], edi
// 007fa23b  89beb0010000         mov dword ptr [esi + 0x1b0], edi
// 007fa241  89beb8010000         mov dword ptr [esi + 0x1b8], edi
// 007fa247  c786c40100000c000000 mov dword ptr [esi + 0x1c4], 0xc
// 007fa251  89bedc010000         mov dword ptr [esi + 0x1dc], edi
// 007fa257  e80496ffff           call 0x7f3860
// 007fa25c  83c404               add esp, 4
// 007fa25f  89442414             mov dword ptr [esp + 0x14], eax
// 007fa263  c644242004           mov byte ptr [esp + 0x20], 4
// 007fa268  3bc7                 cmp eax, edi
// 007fa26a  7409                 je 0x7fa275
// 007fa26c  8bc8                 mov ecx, eax
// 007fa26e  e89df4ffff           call 0x7f9710
// 007fa273  eb02                 jmp 0x7fa277
// 007fa275  33c0                 xor eax, eax
// 007fa277  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007fa27b  898678010000         mov dword ptr [esi + 0x178], eax
// 007fa281  898804010000         mov dword ptr [eax + 0x104], ecx
// 007fa287  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 007fa28d  8b11                 mov edx, dword ptr [ecx]
// 007fa28f  8b822c020000         mov eax, dword ptr [edx + 0x22c]
// 007fa295  c644242003           mov byte ptr [esp + 0x20], 3
// 007fa29a  ffd0                 call eax
// 007fa29c  89beb4010000         mov dword ptr [esi + 0x1b4], edi
// 007fa2a2  89bed0010000         mov dword ptr [esi + 0x1d0], edi
// 007fa2a8  89bebc010000         mov dword ptr [esi + 0x1bc], edi
// 007fa2ae  89bec0010000         mov dword ptr [esi + 0x1c0], edi
// 007fa2b4  c786cc01000001000000 mov dword ptr [esi + 0x1cc], 1
// 007fa2be  89bed4010000         mov dword ptr [esi + 0x1d4], edi
// 007fa2c4  8bc6                 mov eax, esi
// 007fa2c6  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007fa2ca  64890d00000000       mov dword ptr fs:[0], ecx
// 007fa2d1  59                   pop ecx
// 007fa2d2  5f                   pop edi
// 007fa2d3  5e                   pop esi
// 007fa2d4  5d                   pop ebp
// 007fa2d5  83c414               add esp, 0x14
// 007fa2d8  c20400               ret 4
// copied from an identical function in another client (function ??0CXTPControlComboBox@@QAE@PAVCXTPCommandBars@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlComboBox.cpp