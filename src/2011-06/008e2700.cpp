// roc 2011-06 008e2700  unit: CXTPPropertyGridPaintManager  size: 407 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008e2700
//
// 008e2700  6aff                 push -1
// 008e2702  6889dba000           push 0xa0db89
// 008e2707  64a100000000         mov eax, dword ptr fs:[0]
// 008e270d  50                   push eax
// 008e270e  83ec10               sub esp, 0x10
// 008e2711  53                   push ebx
// 008e2712  55                   push ebp
// 008e2713  56                   push esi
// 008e2714  57                   push edi
// 008e2715  a12058c900           mov eax, dword ptr [0xc95820]
// 008e271a  33c4                 xor eax, esp
// 008e271c  50                   push eax
// 008e271d  8d442424             lea eax, [esp + 0x24]
// 008e2721  64a300000000         mov dword ptr fs:[0], eax
// 008e2727  8bd9                 mov ebx, ecx
// 008e2729  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 008e272d  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 008e2731  8bbd98000000         mov edi, dword ptr [ebp + 0x98]
// 008e2737  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008e273b  8bb584000000         mov esi, dword ptr [ebp + 0x84]
// 008e2741  8b542448             mov edx, dword ptr [esp + 0x48]
// 008e2745  89442414             mov dword ptr [esp + 0x14], eax
// 008e2749  33c0                 xor eax, eax
// 008e274b  85ff                 test edi, edi
// 008e274d  0f95c0               setne al
// 008e2750  894c2418             mov dword ptr [esp + 0x18], ecx
// 008e2754  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008e2758  894c241c             mov dword ptr [esp + 0x1c], ecx
// 008e275c  49                   dec ecx
// 008e275d  6a00                 push 0
// 008e275f  894c2420             mov dword ptr [esp + 0x20], ecx
// 008e2763  03c6                 add eax, esi
// 008e2765  8d34c500000000       lea esi, [eax*8]
// 008e276c  2bf0                 sub esi, eax
// 008e276e  8d443603             lea eax, [esi + esi + 3]
// 008e2772  4a                   dec edx
// 008e2773  6a00                 push 0
// 008e2775  8bcd                 mov ecx, ebp
// 008e2777  8944241c             mov dword ptr [esp + 0x1c], eax
// 008e277b  89542428             mov dword ptr [esp + 0x28], edx
// 008e277f  e89c6ff9ff           call 0x879720
// 008e2784  8bf8                 mov edi, eax
// 008e2786  897c2438             mov dword ptr [esp + 0x38], edi
// 008e278a  85ff                 test edi, edi
// 008e278c  0f849d000000         je 0x8e282f
// 008e2792  8b4730               mov eax, dword ptr [edi + 0x30]
// 008e2795  83f8ff               cmp eax, -1
// 008e2798  0f8489000000         je 0x8e2827
// 008e279e  8b4b60               mov ecx, dword ptr [ebx + 0x60]
// 008e27a1  6a00                 push 0
// 008e27a3  50                   push eax
// 008e27a4  e8976bf8ff           call 0x869340
// 008e27a9  8bc8                 mov ecx, eax
// 008e27ab  e8e032f4ff           call 0x825a90
// 008e27b0  8bf0                 mov esi, eax
// 008e27b2  85f6                 test esi, esi
// 008e27b4  7471                 je 0x8e2827
// 008e27b6  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 008e27ba  2b7c2418             sub edi, dword ptr [esp + 0x18]
// 008e27be  8bce                 mov ecx, esi
// 008e27c0  e80b1afcff           call 0x8a41d0
// 008e27c5  3bc7                 cmp eax, edi
// 008e27c7  7d0b                 jge 0x8e27d4
// 008e27c9  8bce                 mov ecx, esi
// 008e27cb  e8001afcff           call 0x8a41d0
// 008e27d0  8bd8                 mov ebx, eax
// 008e27d2  eb08                 jmp 0x8e27dc
// 008e27d4  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 008e27d8  2b5c2418             sub ebx, dword ptr [esp + 0x18]
// 008e27dc  8bce                 mov ecx, esi
// 008e27de  e8ad6bf8ff           call 0x869390
// 008e27e3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008e27e7  8b542418             mov edx, dword ptr [esp + 0x18]
// 008e27eb  8bf8                 mov edi, eax
// 008e27ed  8d040a               lea eax, [edx + ecx]
// 008e27f0  99                   cdq 
// 008e27f1  2bc2                 sub eax, edx
// 008e27f3  8bc8                 mov ecx, eax
// 008e27f5  8bc3                 mov eax, ebx
// 008e27f7  99                   cdq 
// 008e27f8  2bc2                 sub eax, edx
// 008e27fa  d1f8                 sar eax, 1
// 008e27fc  53                   push ebx
// 008e27fd  d1f9                 sar ecx, 1
// 008e27ff  2bc8                 sub ecx, eax
// 008e2801  8b442418             mov eax, dword ptr [esp + 0x18]
// 008e2805  57                   push edi
// 008e2806  51                   push ecx
// 008e2807  83c0fe               add eax, -2
// 008e280a  50                   push eax
// 008e280b  8b442444             mov eax, dword ptr [esp + 0x44]
// 008e280f  50                   push eax
// 008e2810  8bce                 mov ecx, esi
// 008e2812  e83944f4ff           call 0x826c50
// 008e2817  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008e281b  8d543905             lea edx, [ecx + edi + 5]
// 008e281f  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 008e2823  89542414             mov dword ptr [esp + 0x14], edx
// 008e2827  8bb794000000         mov esi, dword ptr [edi + 0x94]
// 008e282d  eb05                 jmp 0x8e2834
// 008e282f  be24000000           mov esi, 0x24
// 008e2834  8d442438             lea eax, [esp + 0x38]
// 008e2838  50                   push eax
// 008e2839  8bcd                 mov ecx, ebp
// 008e283b  e88008b6ff           call 0x4430c0
// 008e2840  8bf8                 mov edi, eax
// 008e2842  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008e2846  8b19                 mov ebx, dword ptr [ecx]
// 008e2848  81ce00080000         or esi, 0x800
// 008e284e  56                   push esi
// 008e284f  8d542418             lea edx, [esp + 0x18]
// 008e2853  52                   push edx
// 008e2854  8bcf                 mov ecx, edi
// 008e2856  c744243400000000     mov dword ptr [esp + 0x34], 0
// 008e285e  ff15a826a400         call dword ptr [0xa426a8]
// 008e2864  50                   push eax
// 008e2865  8bcf                 mov ecx, edi
// 008e2867  ff15c82da400         call dword ptr [0xa42dc8]
// 008e286d  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008e2871  50                   push eax
// 008e2872  8b4370               mov eax, dword ptr [ebx + 0x70]
// 008e2875  ffd0                 call eax
// 008e2877  8d4c2438             lea ecx, [esp + 0x38]
// 008e287b  ff15082ea400         call dword ptr [0xa42e08]
// 008e2881  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008e2885  64890d00000000       mov dword ptr fs:[0], ecx
// 008e288c  59                   pop ecx
// 008e288d  5f                   pop edi
// 008e288e  5e                   pop esi
// 008e288f  5d                   pop ebp
// 008e2890  5b                   pop ebx
// 008e2891  83c41c               add esp, 0x1c
// 008e2894  c21800               ret 0x18
// copied from an identical function in another client (function ?DrawItemCaption@CXTPPropertyGridPaintManager@@UAEXPAVCDC@@PAVCXTPPropertyGridItem@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridPaintManager.cpp