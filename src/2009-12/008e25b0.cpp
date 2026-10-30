// roc 2009-12 008e25b0  unit: CXTColorSelectorCtrl  size: 607 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e25b0
//
// 008e25b0  6aff                 push -1
// 008e25b2  68195e9600           push 0x965e19
// 008e25b7  64a100000000         mov eax, dword ptr fs:[0]
// 008e25bd  50                   push eax
// 008e25be  53                   push ebx
// 008e25bf  55                   push ebp
// 008e25c0  56                   push esi
// 008e25c1  57                   push edi
// 008e25c2  a10052b600           mov eax, dword ptr [0xb65200]
// 008e25c7  33c4                 xor eax, esp
// 008e25c9  50                   push eax
// 008e25ca  8d442414             lea eax, [esp + 0x14]
// 008e25ce  64a300000000         mov dword ptr fs:[0], eax
// 008e25d4  8bf1                 mov esi, ecx
// 008e25d6  8b442434             mov eax, dword ptr [esp + 0x34]
// 008e25da  894678               mov dword ptr [esi + 0x78], eax
// 008e25dd  85c0                 test eax, eax
// 008e25df  0f8470010000         je 0x8e2755
// 008e25e5  8b4020               mov eax, dword ptr [eax + 0x20]
// 008e25e8  50                   push eax
// 008e25e9  e872fdffff           call 0x8e2360
// 008e25ee  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008e25f2  8b542440             mov edx, dword ptr [esp + 0x40]
// 008e25f6  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 008e25fa  8d442424             lea eax, [esp + 0x24]
// 008e25fe  50                   push eax
// 008e25ff  8dbe84000000         lea edi, [esi + 0x84]
// 008e2605  57                   push edi
// 008e2606  89aea4000000         mov dword ptr [esi + 0xa4], ebp
// 008e260c  898eb0000000         mov dword ptr [esi + 0xb0], ecx
// 008e2612  8996b4000000         mov dword ptr [esi + 0xb4], edx
// 008e2618  ff1564cc9800         call dword ptr [0x98cc64]
// 008e261e  8b5e6c               mov ebx, dword ptr [esi + 0x6c]
// 008e2621  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 008e2624  8b8690000000         mov eax, dword ptr [esi + 0x90]
// 008e262a  0fafcb               imul ecx, ebx
// 008e262d  038e9c000000         add ecx, dword ptr [esi + 0x9c]
// 008e2633  8b96a0000000         mov edx, dword ptr [esi + 0xa0]
// 008e2639  038e94000000         add ecx, dword ptr [esi + 0x94]
// 008e263f  039698000000         add edx, dword ptr [esi + 0x98]
// 008e2645  030f                 add ecx, dword ptr [edi]
// 008e2647  898688000000         mov dword ptr [esi + 0x88], eax
// 008e264d  898e8c000000         mov dword ptr [esi + 0x8c], ecx
// 008e2653  8d0c02               lea ecx, [edx + eax]
// 008e2656  8b86a4000000         mov eax, dword ptr [esi + 0xa4]
// 008e265c  898e90000000         mov dword ptr [esi + 0x90], ecx
// 008e2662  a810                 test al, 0x10
// 008e2664  7509                 jne 0x8e266f
// 008e2666  83c11b               add ecx, 0x1b
// 008e2669  898e90000000         mov dword ptr [esi + 0x90], ecx
// 008e266f  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 008e2675  85c9                 test ecx, ecx
// 008e2677  7409                 je 0x8e2682
// 008e2679  83c802               or eax, 2
// 008e267c  8986a4000000         mov dword ptr [esi + 0xa4], eax
// 008e2682  f686a400000002       test byte ptr [esi + 0xa4], 2
// 008e2689  7425                 je 0x8e26b0
// 008e268b  b828000000           mov eax, 0x28
// 008e2690  85c9                 test ecx, ecx
// 008e2692  7406                 je 0x8e269a
// 008e2694  8b8660010000         mov eax, dword ptr [esi + 0x160]
// 008e269a  8d4403ff             lea eax, [ebx + eax - 1]
// 008e269e  99                   cdq 
// 008e269f  f7fb                 idiv ebx
// 008e26a1  0faf8680000000       imul eax, dword ptr [esi + 0x80]
// 008e26a8  018690000000         add dword ptr [esi + 0x90], eax
// 008e26ae  eb10                 jmp 0x8e26c0
// 008e26b0  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 008e26b6  8d4c0016             lea ecx, [eax + eax + 0x16]
// 008e26ba  018e90000000         add dword ptr [esi + 0x90], ecx
// 008e26c0  e85914f1ff           call 0x7f3b1e
// 008e26c5  68007f0000           push 0x7f00
// 008e26ca  6a00                 push 0
// 008e26cc  ff1548ca9800         call dword ptr [0x98ca48]
// 008e26d2  6a00                 push 0
// 008e26d4  6a00                 push 0
// 008e26d6  50                   push eax
// 008e26d7  6a00                 push 0
// 008e26d9  e8481bf1ff           call 0x7f4226
// 008e26de  50                   push eax
// 008e26df  8d4c2438             lea ecx, [esp + 0x38]
// 008e26e3  ff15b8de9800         call dword ptr [0x98deb8]
// 008e26e9  f686a400000004       test byte ptr [esi + 0xa4], 4
// 008e26f0  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 008e26f8  7426                 je 0x8e2720
// 008e26fa  8386900000001b       add dword ptr [esi + 0x90], 0x1b
// 008e2701  833d7cbfb90000       cmp dword ptr [0xb9bf7c], 0
// 008e2708  8b8690000000         mov eax, dword ptr [esi + 0x90]
// 008e270e  7e10                 jle 0x8e2720
// 008e2710  8b9680000000         mov edx, dword ptr [esi + 0x80]
// 008e2716  8d440204             lea eax, [edx + eax + 4]
// 008e271a  898690000000         mov dword ptr [esi + 0x90], eax
// 008e2720  8b4e78               mov ecx, dword ptr [esi + 0x78]
// 008e2723  6a00                 push 0
// 008e2725  6a00                 push 0
// 008e2727  51                   push ecx
// 008e2728  57                   push edi
// 008e2729  6800000040           push 0x40000000
// 008e272e  6856fd9900           push 0x99fd56
// 008e2733  8d4c244c             lea ecx, [esp + 0x4c]
// 008e2737  ff1580de9800         call dword ptr [0x98de80]
// 008e273d  50                   push eax
// 008e273e  6a00                 push 0
// 008e2740  8bce                 mov ecx, esi
// 008e2742  e88b11f1ff           call 0x7f38d2
// 008e2747  85c0                 test eax, eax
// 008e2749  7511                 jne 0x8e275c
// 008e274b  8d4c2434             lea ecx, [esp + 0x34]
// 008e274f  ff15c0de9800         call dword ptr [0x98dec0]
// 008e2755  33c0                 xor eax, eax
// 008e2757  e99d000000           jmp 0x8e27f9
// 008e275c  8bce                 mov ecx, esi
// 008e275e  85ed                 test ebp, ebp
// 008e2760  7963                 jns 0x8e27c5
// 008e2762  e89b14f1ff           call 0x7f3c02
// 008e2767  8b5620               mov edx, dword ptr [esi + 0x20]
// 008e276a  8b1dc0c99800         mov ebx, dword ptr [0x98c9c0]
// 008e2770  6a00                 push 0
// 008e2772  6af8                 push -8
// 008e2774  52                   push edx
// 008e2775  ffd3                 call ebx
// 008e2777  6a00                 push 0
// 008e2779  6800000080           push 0x80000000
// 008e277e  6800000040           push 0x40000000
// 008e2783  8bce                 mov ecx, esi
// 008e2785  e85018f1ff           call 0x7f3fda
// 008e278a  8b4678               mov eax, dword ptr [esi + 0x78]
// 008e278d  8b4820               mov ecx, dword ptr [eax + 0x20]
// 008e2790  8b5620               mov edx, dword ptr [esi + 0x20]
// 008e2793  51                   push ecx
// 008e2794  6af8                 push -8
// 008e2796  52                   push edx
// 008e2797  ffd3                 call ebx
// 008e2799  8b470c               mov eax, dword ptr [edi + 0xc]
// 008e279c  2b4704               sub eax, dword ptr [edi + 4]
// 008e279f  8b4f08               mov ecx, dword ptr [edi + 8]
// 008e27a2  2b0f                 sub ecx, dword ptr [edi]
// 008e27a4  8b9688000000         mov edx, dword ptr [esi + 0x88]
// 008e27aa  6850020000           push 0x250
// 008e27af  50                   push eax
// 008e27b0  8b07                 mov eax, dword ptr [edi]
// 008e27b2  51                   push ecx
// 008e27b3  8b0d80d79800         mov ecx, dword ptr [0x98d780]
// 008e27b9  52                   push edx
// 008e27ba  50                   push eax
// 008e27bb  51                   push ecx
// 008e27bc  8bce                 mov ecx, esi
// 008e27be  e86914f1ff           call 0x7f3c2c
// 008e27c3  eb07                 jmp 0x8e27cc
// 008e27c5  6a08                 push 8
// 008e27c7  e87c13f1ff           call 0x7f3b48
// 008e27cc  e80f1df8ff           call 0x8644e0
// 008e27d1  05dc000000           add eax, 0xdc
// 008e27d6  7403                 je 0x8e27db
// 008e27d8  8b4004               mov eax, dword ptr [eax + 4]
// 008e27db  8b5620               mov edx, dword ptr [esi + 0x20]
// 008e27de  6a01                 push 1
// 008e27e0  50                   push eax
// 008e27e1  6a30                 push 0x30
// 008e27e3  52                   push edx
// 008e27e4  ff15c4cb9800         call dword ptr [0x98cbc4]
// 008e27ea  8d4c2434             lea ecx, [esp + 0x34]
// 008e27ee  ff15c0de9800         call dword ptr [0x98dec0]
// 008e27f4  b801000000           mov eax, 1
// 008e27f9  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008e27fd  64890d00000000       mov dword ptr fs:[0], ecx
// 008e2804  59                   pop ecx
// 008e2805  5f                   pop edi
// 008e2806  5e                   pop esi
// 008e2807  5d                   pop ebp
// 008e2808  5b                   pop ebx
// 008e2809  83c40c               add esp, 0xc
// 008e280c  c22000               ret 0x20
// copied from an identical function in another client (function ?Create@CXTColorSelectorCtrl@@QAEHVCRect@@PAVCWnd@@KKK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorSelectorCtrl.cpp