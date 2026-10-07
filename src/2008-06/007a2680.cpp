// roc 2008-06 007a2680  unit: CXTCaptionButtonTheme  size: 293 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a2680
//
// 007a2680  83ec10               sub esp, 0x10
// 007a2683  55                   push ebp
// 007a2684  56                   push esi
// 007a2685  8b742428             mov esi, dword ptr [esp + 0x28]
// 007a2689  8be9                 mov ebp, ecx
// 007a268b  85f6                 test esi, esi
// 007a268d  0f840a010000         je 0x7a279d
// 007a2693  837d1400             cmp dword ptr [ebp + 0x14], 0
// 007a2697  0f8400010000         je 0x7a279d
// 007a269d  57                   push edi
// 007a269e  8bce                 mov ecx, esi
// 007a26a0  e8abfdfeff           call 0x792450
// 007a26a5  8bf8                 mov edi, eax
// 007a26a7  85ff                 test edi, edi
// 007a26a9  0f84ed000000         je 0x7a279c
// 007a26af  53                   push ebx
// 007a26b0  8b5d00               mov ebx, dword ptr [ebp]
// 007a26b3  56                   push esi
// 007a26b4  8bce                 mov ecx, esi
// 007a26b6  e845fbfeff           call 0x792200
// 007a26bb  8b542430             mov edx, dword ptr [esp + 0x30]
// 007a26bf  85c0                 test eax, eax
// 007a26c1  0f95c0               setne al
// 007a26c4  0fb6c8               movzx ecx, al
// 007a26c7  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007a26cb  51                   push ecx
// 007a26cc  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007a26d0  52                   push edx
// 007a26d1  50                   push eax
// 007a26d2  8b4350               mov eax, dword ptr [ebx + 0x50]
// 007a26d5  51                   push ecx
// 007a26d6  8d542424             lea edx, [esp + 0x24]
// 007a26da  52                   push edx
// 007a26db  8bcd                 mov ecx, ebp
// 007a26dd  ffd0                 call eax
// 007a26df  837e7c00             cmp dword ptr [esi + 0x7c], 0
// 007a26e3  8a5c2428             mov bl, byte ptr [esp + 0x28]
// 007a26e7  7509                 jne 0x7a26f2
// 007a26e9  f6c301               test bl, 1
// 007a26ec  7504                 jne 0x7a26f2
// 007a26ee  33ed                 xor ebp, ebp
// 007a26f0  eb0d                 jmp 0x7a26ff
// 007a26f2  bd01000000           mov ebp, 1
// 007a26f7  016c2410             add dword ptr [esp + 0x10], ebp
// 007a26fb  016c2414             add dword ptr [esp + 0x14], ebp
// 007a26ff  f6c304               test bl, 4
// 007a2702  741f                 je 0x7a2723
// 007a2704  8d4c2418             lea ecx, [esp + 0x18]
// 007a2708  51                   push ecx
// 007a2709  8bce                 mov ecx, esi
// 007a270b  e8e004ffff           call 0x792bf0
// 007a2710  8b5004               mov edx, dword ptr [eax + 4]
// 007a2713  8b00                 mov eax, dword ptr [eax]
// 007a2715  52                   push edx
// 007a2716  50                   push eax
// 007a2717  6a01                 push 1
// 007a2719  8bcf                 mov ecx, edi
// 007a271b  e850e4f1ff           call 0x6c0b70
// 007a2720  50                   push eax
// 007a2721  eb62                 jmp 0x7a2785
// 007a2723  8bce                 mov ecx, esi
// 007a2725  e8f6ebfeff           call 0x791320
// 007a272a  85c0                 test eax, eax
// 007a272c  7521                 jne 0x7a274f
// 007a272e  85ed                 test ebp, ebp
// 007a2730  751d                 jne 0x7a274f
// 007a2732  8d4c2418             lea ecx, [esp + 0x18]
// 007a2736  51                   push ecx
// 007a2737  8bce                 mov ecx, esi
// 007a2739  e8b204ffff           call 0x792bf0
// 007a273e  8b5004               mov edx, dword ptr [eax + 4]
// 007a2741  8b00                 mov eax, dword ptr [eax]
// 007a2743  52                   push edx
// 007a2744  50                   push eax
// 007a2745  8bcf                 mov ecx, edi
// 007a2747  e82473f1ff           call 0x6b9a70
// 007a274c  50                   push eax
// 007a274d  eb36                 jmp 0x7a2785
// 007a274f  837e7c00             cmp dword ptr [esi + 0x7c], 0
// 007a2753  8bcf                 mov ecx, edi
// 007a2755  7407                 je 0x7a275e
// 007a2757  e8348ef1ff           call 0x6bb590
// 007a275c  eb11                 jmp 0x7a276f
// 007a275e  f6c301               test bl, 1
// 007a2761  7407                 je 0x7a276a
// 007a2763  e8488ef1ff           call 0x6bb5b0
// 007a2768  eb05                 jmp 0x7a276f
// 007a276a  e8018ef1ff           call 0x6bb570
// 007a276f  8d4c2418             lea ecx, [esp + 0x18]
// 007a2773  51                   push ecx
// 007a2774  8bce                 mov ecx, esi
// 007a2776  8bd8                 mov ebx, eax
// 007a2778  e87304ffff           call 0x792bf0
// 007a277d  8b5004               mov edx, dword ptr [eax + 4]
// 007a2780  8b00                 mov eax, dword ptr [eax]
// 007a2782  52                   push edx
// 007a2783  50                   push eax
// 007a2784  53                   push ebx
// 007a2785  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007a2789  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007a278d  8b442430             mov eax, dword ptr [esp + 0x30]
// 007a2791  51                   push ecx
// 007a2792  52                   push edx
// 007a2793  50                   push eax
// 007a2794  8bcf                 mov ecx, edi
// 007a2796  e8e5f0f1ff           call 0x6c1880
// 007a279b  5b                   pop ebx
// 007a279c  5f                   pop edi
// 007a279d  5e                   pop esi
// 007a279e  5d                   pop ebp
// 007a279f  83c410               add esp, 0x10
// 007a27a2  c21000               ret 0x10
// library xtp-11.2.2/Source\Controls\XTButtonTheme.cpp (function ?DrawButtonIcon@CXTButtonTheme@@MAEXPAVCDC@@IAAVCRect@@PAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButtonTheme.cpp
