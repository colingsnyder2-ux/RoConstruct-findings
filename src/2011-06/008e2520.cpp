// roc 2011-06 008e2520  unit: CXTPPropertyGridPaintManager  size: 471 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008e2520
//
// 008e2520  6aff                 push -1
// 008e2522  6859dba000           push 0xa0db59
// 008e2527  64a100000000         mov eax, dword ptr fs:[0]
// 008e252d  50                   push eax
// 008e252e  53                   push ebx
// 008e252f  55                   push ebp
// 008e2530  56                   push esi
// 008e2531  57                   push edi
// 008e2532  a12058c900           mov eax, dword ptr [0xc95820]
// 008e2537  33c4                 xor eax, esp
// 008e2539  50                   push eax
// 008e253a  8d442414             lea eax, [esp + 0x14]
// 008e253e  64a300000000         mov dword ptr fs:[0], eax
// 008e2544  8bf9                 mov edi, ecx
// 008e2546  8b07                 mov eax, dword ptr [edi]
// 008e2548  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 008e254c  8b742424             mov esi, dword ptr [esp + 0x24]
// 008e2550  8b5004               mov edx, dword ptr [eax + 4]
// 008e2553  8b1e                 mov ebx, dword ptr [esi]
// 008e2555  6a01                 push 1
// 008e2557  55                   push ebp
// 008e2558  ffd2                 call edx
// 008e255a  50                   push eax
// 008e255b  8b4338               mov eax, dword ptr [ebx + 0x38]
// 008e255e  8bce                 mov ecx, esi
// 008e2560  ffd0                 call eax
// 008e2562  8b17                 mov edx, dword ptr [edi]
// 008e2564  8b4208               mov eax, dword ptr [edx + 8]
// 008e2567  6a01                 push 1
// 008e2569  55                   push ebp
// 008e256a  8bcf                 mov ecx, edi
// 008e256c  ffd0                 call eax
// 008e256e  50                   push eax
// 008e256f  8d4c2430             lea ecx, [esp + 0x30]
// 008e2573  51                   push ecx
// 008e2574  8bce                 mov ecx, esi
// 008e2576  e8a588f2ff           call 0x80ae20
// 008e257b  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008e257f  8b5500               mov edx, dword ptr [ebp]
// 008e2582  8b5268               mov edx, dword ptr [edx + 0x68]
// 008e2585  83c104               add ecx, 4
// 008e2588  83ec10               sub esp, 0x10
// 008e258b  8bc4                 mov eax, esp
// 008e258d  8908                 mov dword ptr [eax], ecx
// 008e258f  894c243c             mov dword ptr [esp + 0x3c], ecx
// 008e2593  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008e2597  894804               mov dword ptr [eax + 4], ecx
// 008e259a  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008e259e  894808               mov dword ptr [eax + 8], ecx
// 008e25a1  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008e25a5  89480c               mov dword ptr [eax + 0xc], ecx
// 008e25a8  56                   push esi
// 008e25a9  8bcd                 mov ecx, ebp
// 008e25ab  ffd2                 call edx
// 008e25ad  85c0                 test eax, eax
// 008e25af  0f852c010000         jne 0x8e26e1
// 008e25b5  50                   push eax
// 008e25b6  6a01                 push 1
// 008e25b8  8bcd                 mov ecx, ebp
// 008e25ba  e86171f9ff           call 0x879720
// 008e25bf  8bd8                 mov ebx, eax
// 008e25c1  895c2428             mov dword ptr [esp + 0x28], ebx
// 008e25c5  85db                 test ebx, ebx
// 008e25c7  0f8498000000         je 0x8e2665
// 008e25cd  8b4330               mov eax, dword ptr [ebx + 0x30]
// 008e25d0  83f8ff               cmp eax, -1
// 008e25d3  0f848c000000         je 0x8e2665
// 008e25d9  8b4f60               mov ecx, dword ptr [edi + 0x60]
// 008e25dc  6a00                 push 0
// 008e25de  50                   push eax
// 008e25df  e85c6df8ff           call 0x869340
// 008e25e4  8bc8                 mov ecx, eax
// 008e25e6  e8a534f4ff           call 0x825a90
// 008e25eb  8bf8                 mov edi, eax
// 008e25ed  85ff                 test edi, edi
// 008e25ef  7474                 je 0x8e2665
// 008e25f1  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 008e25f5  2b5c2430             sub ebx, dword ptr [esp + 0x30]
// 008e25f9  8bcf                 mov ecx, edi
// 008e25fb  e8d01bfcff           call 0x8a41d0
// 008e2600  3bc3                 cmp eax, ebx
// 008e2602  7d09                 jge 0x8e260d
// 008e2604  8bcf                 mov ecx, edi
// 008e2606  e8c51bfcff           call 0x8a41d0
// 008e260b  eb08                 jmp 0x8e2615
// 008e260d  8b442438             mov eax, dword ptr [esp + 0x38]
// 008e2611  2b442430             sub eax, dword ptr [esp + 0x30]
// 008e2615  8bcf                 mov ecx, edi
// 008e2617  89442424             mov dword ptr [esp + 0x24], eax
// 008e261b  e8706df8ff           call 0x869390
// 008e2620  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008e2624  8bd8                 mov ebx, eax
// 008e2626  8b442430             mov eax, dword ptr [esp + 0x30]
// 008e262a  03c1                 add eax, ecx
// 008e262c  99                   cdq 
// 008e262d  2bc2                 sub eax, edx
// 008e262f  8bc8                 mov ecx, eax
// 008e2631  8b442424             mov eax, dword ptr [esp + 0x24]
// 008e2635  99                   cdq 
// 008e2636  2bc2                 sub eax, edx
// 008e2638  8b542424             mov edx, dword ptr [esp + 0x24]
// 008e263c  d1f8                 sar eax, 1
// 008e263e  52                   push edx
// 008e263f  d1f9                 sar ecx, 1
// 008e2641  2bc8                 sub ecx, eax
// 008e2643  8b442430             mov eax, dword ptr [esp + 0x30]
// 008e2647  53                   push ebx
// 008e2648  51                   push ecx
// 008e2649  83c0fe               add eax, -2
// 008e264c  50                   push eax
// 008e264d  56                   push esi
// 008e264e  8bcf                 mov ecx, edi
// 008e2650  e8fb45f4ff           call 0x826c50
// 008e2655  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008e2659  8d4c1805             lea ecx, [eax + ebx + 5]
// 008e265d  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 008e2661  894c242c             mov dword ptr [esp + 0x2c], ecx
// 008e2665  6aff                 push -1
// 008e2667  6a00                 push 0
// 008e2669  8d542434             lea edx, [esp + 0x34]
// 008e266d  52                   push edx
// 008e266e  ff15e41ba400         call dword ptr [0xa41be4]
// 008e2674  85db                 test ebx, ebx
// 008e2676  7408                 je 0x8e2680
// 008e2678  8bbb94000000         mov edi, dword ptr [ebx + 0x94]
// 008e267e  eb05                 jmp 0x8e2685
// 008e2680  bf24000000           mov edi, 0x24
// 008e2685  83bd0401000001       cmp dword ptr [ebp + 0x104], 1
// 008e268c  7e06                 jle 0x8e2694
// 008e268e  83e7df               and edi, 0xffffffdf
// 008e2691  83cf10               or edi, 0x10
// 008e2694  8b4500               mov eax, dword ptr [ebp]
// 008e2697  8b9080000000         mov edx, dword ptr [eax + 0x80]
// 008e269d  8d4c2424             lea ecx, [esp + 0x24]
// 008e26a1  51                   push ecx
// 008e26a2  8bcd                 mov ecx, ebp
// 008e26a4  ffd2                 call edx
// 008e26a6  8bd8                 mov ebx, eax
// 008e26a8  8b2e                 mov ebp, dword ptr [esi]
// 008e26aa  81cf00080000         or edi, 0x800
// 008e26b0  57                   push edi
// 008e26b1  8d442430             lea eax, [esp + 0x30]
// 008e26b5  50                   push eax
// 008e26b6  8bcb                 mov ecx, ebx
// 008e26b8  c744242400000000     mov dword ptr [esp + 0x24], 0
// 008e26c0  ff15a826a400         call dword ptr [0xa426a8]
// 008e26c6  50                   push eax
// 008e26c7  8bcb                 mov ecx, ebx
// 008e26c9  ff15c82da400         call dword ptr [0xa42dc8]
// 008e26cf  8b5570               mov edx, dword ptr [ebp + 0x70]
// 008e26d2  50                   push eax
// 008e26d3  8bce                 mov ecx, esi
// 008e26d5  ffd2                 call edx
// 008e26d7  8d4c2424             lea ecx, [esp + 0x24]
// 008e26db  ff15082ea400         call dword ptr [0xa42e08]
// 008e26e1  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008e26e5  64890d00000000       mov dword ptr fs:[0], ecx
// 008e26ec  59                   pop ecx
// 008e26ed  5f                   pop edi
// 008e26ee  5e                   pop esi
// 008e26ef  5d                   pop ebp
// 008e26f0  5b                   pop ebx
// 008e26f1  83c40c               add esp, 0xc
// 008e26f4  c21800               ret 0x18
// copied from an identical function in another client (function ?DrawItemValue@CXTPPropertyGridPaintManager@@UAEXPAVCDC@@PAVCXTPPropertyGridItem@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridPaintManager.cpp