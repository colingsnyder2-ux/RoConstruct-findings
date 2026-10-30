// roc 2009-06 007c2810  unit: CXTPReportPaintManager  size: 644 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007c2810
//
// 007c2810  6aff                 push -1
// 007c2812  68c1db8700           push 0x87dbc1
// 007c2817  64a100000000         mov eax, dword ptr fs:[0]
// 007c281d  50                   push eax
// 007c281e  83ec44               sub esp, 0x44
// 007c2821  53                   push ebx
// 007c2822  55                   push ebp
// 007c2823  56                   push esi
// 007c2824  57                   push edi
// 007c2825  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007c282a  33c4                 xor eax, esp
// 007c282c  50                   push eax
// 007c282d  8d442458             lea eax, [esp + 0x58]
// 007c2831  64a300000000         mov dword ptr fs:[0], eax
// 007c2837  8bf9                 mov edi, ecx
// 007c2839  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 007c283d  8b465c               mov eax, dword ptr [esi + 0x5c]
// 007c2840  8d4c246c             lea ecx, [esp + 0x6c]
// 007c2844  51                   push ecx
// 007c2845  8bce                 mov ecx, esi
// 007c2847  89442418             mov dword ptr [esp + 0x18], eax
// 007c284b  e800c9f7ff           call 0x73f150
// 007c2850  8b6c2468             mov ebp, dword ptr [esp + 0x68]
// 007c2854  837d0c00             cmp dword ptr [ebp + 0xc], 0
// 007c2858  c744246000000000     mov dword ptr [esp + 0x60], 0
// 007c2860  8bce                 mov ecx, esi
// 007c2862  740c                 je 0x7c2870
// 007c2864  8b542470             mov edx, dword ptr [esp + 0x70]
// 007c2868  52                   push edx
// 007c2869  e882abf8ff           call 0x74d3f0
// 007c286e  eb05                 jmp 0x7c2875
// 007c2870  e84babf8ff           call 0x74d3c0
// 007c2875  8bd8                 mov ebx, eax
// 007c2877  8d442438             lea eax, [esp + 0x38]
// 007c287b  50                   push eax
// 007c287c  8bce                 mov ecx, esi
// 007c287e  e85da4f8ff           call 0x74cce0
// 007c2883  83bea800000000       cmp dword ptr [esi + 0xa8], 0
// 007c288a  8b442438             mov eax, dword ptr [esp + 0x38]
// 007c288e  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 007c2892  8d0c18               lea ecx, [eax + ebx]
// 007c2895  89442428             mov dword ptr [esp + 0x28], eax
// 007c2899  8b442444             mov eax, dword ptr [esp + 0x44]
// 007c289d  894c2440             mov dword ptr [esp + 0x40], ecx
// 007c28a1  8954242c             mov dword ptr [esp + 0x2c], edx
// 007c28a5  894c2430             mov dword ptr [esp + 0x30], ecx
// 007c28a9  89442434             mov dword ptr [esp + 0x34], eax
// 007c28ad  750b                 jne 0x7c28ba
// 007c28af  8bce                 mov ecx, esi
// 007c28b1  e8aaa8f8ff           call 0x74d160
// 007c28b6  01442428             add dword ptr [esp + 0x28], eax
// 007c28ba  8bce                 mov ecx, esi
// 007c28bc  e84fa5f8ff           call 0x74ce10
// 007c28c1  bb01000000           mov ebx, 1
// 007c28c6  85c0                 test eax, eax
// 007c28c8  740a                 je 0x7c28d4
// 007c28ca  837d0c00             cmp dword ptr [ebp + 0xc], 0
// 007c28ce  895c2468             mov dword ptr [esp + 0x68], ebx
// 007c28d2  7408                 je 0x7c28dc
// 007c28d4  c744246800000000     mov dword ptr [esp + 0x68], 0
// 007c28dc  8d4f30               lea ecx, [edi + 0x30]
// 007c28df  51                   push ecx
// 007c28e0  55                   push ebp
// 007c28e1  8d4c2450             lea ecx, [esp + 0x50]
// 007c28e5  e876dffaff           call 0x770860
// 007c28ea  8d542420             lea edx, [esp + 0x20]
// 007c28ee  52                   push edx
// 007c28ef  8d4c2470             lea ecx, [esp + 0x70]
// 007c28f3  885c2464             mov byte ptr [esp + 0x64], bl
// 007c28f7  ff1554fb8900         call dword ptr [0x89fb54]
// 007c28fd  50                   push eax
// 007c28fe  8d4c2474             lea ecx, [esp + 0x74]
// 007c2902  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007c2908  50                   push eax
// 007c2909  8b4508               mov eax, dword ptr [ebp + 8]
// 007c290c  50                   push eax
// 007c290d  ff1550e18900         call dword ptr [0x89e150]
// 007c2913  8b442414             mov eax, dword ptr [esp + 0x14]
// 007c2917  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 007c291b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007c291f  895c2418             mov dword ptr [esp + 0x18], ebx
// 007c2923  894c241c             mov dword ptr [esp + 0x1c], ecx
// 007c2927  83f8ff               cmp eax, -1
// 007c292a  7447                 je 0x7c2973
// 007c292c  8b542428             mov edx, dword ptr [esp + 0x28]
// 007c2930  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007c2934  8b1f                 mov ebx, dword ptr [edi]
// 007c2936  50                   push eax
// 007c2937  83ec10               sub esp, 0x10
// 007c293a  8bc4                 mov eax, esp
// 007c293c  8910                 mov dword ptr [eax], edx
// 007c293e  8b542444             mov edx, dword ptr [esp + 0x44]
// 007c2942  894804               mov dword ptr [eax + 4], ecx
// 007c2945  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 007c2949  895008               mov dword ptr [eax + 8], edx
// 007c294c  89480c               mov dword ptr [eax + 0xc], ecx
// 007c294f  8bce                 mov ecx, esi
// 007c2951  e87aa5f8ff           call 0x74ced0
// 007c2956  8b93a8000000         mov edx, dword ptr [ebx + 0xa8]
// 007c295c  50                   push eax
// 007c295d  6a00                 push 0
// 007c295f  8bcf                 mov ecx, edi
// 007c2961  ffd2                 call edx
// 007c2963  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007c2967  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 007c296b  8d540102             lea edx, [ecx + eax + 2]
// 007c296f  89542428             mov dword ptr [esp + 0x28], edx
// 007c2973  b803000000           mov eax, 3
// 007c2978  01442428             add dword ptr [esp + 0x28], eax
// 007c297c  29442430             sub dword ptr [esp + 0x30], eax
// 007c2980  8d4c246c             lea ecx, [esp + 0x6c]
// 007c2984  ff1554fb8900         call dword ptr [0x89fb54]
// 007c298a  85c0                 test eax, eax
// 007c298c  0f8ecf000000         jle 0x7c2a61
// 007c2992  8b542430             mov edx, dword ptr [esp + 0x30]
// 007c2996  8b442428             mov eax, dword ptr [esp + 0x28]
// 007c299a  3bd0                 cmp edx, eax
// 007c299c  0f8ebf000000         jle 0x7c2a61
// 007c29a2  83bf2802000000       cmp dword ptr [edi + 0x228], 0
// 007c29a9  7441                 je 0x7c29ec
// 007c29ab  837c246800           cmp dword ptr [esp + 0x68], 0
// 007c29b0  743a                 je 0x7c29ec
// 007c29b2  8bca                 mov ecx, edx
// 007c29b4  2bc8                 sub ecx, eax
// 007c29b6  8d41e5               lea eax, [ecx - 0x1b]
// 007c29b9  3bd8                 cmp ebx, eax
// 007c29bb  8bcb                 mov ecx, ebx
// 007c29bd  7c02                 jl 0x7c29c1
// 007c29bf  8bc8                 mov ecx, eax
// 007c29c1  83f9fb               cmp ecx, -5
// 007c29c4  7d0a                 jge 0x7c29d0
// 007c29c6  c7442418fbffffff     mov dword ptr [esp + 0x18], 0xfffffffb
// 007c29ce  eb08                 jmp 0x7c29d8
// 007c29d0  3bd8                 cmp ebx, eax
// 007c29d2  7c04                 jl 0x7c29d8
// 007c29d4  89442418             mov dword ptr [esp + 0x18], eax
// 007c29d8  8b442428             mov eax, dword ptr [esp + 0x28]
// 007c29dc  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007c29e0  8d440108             lea eax, [ecx + eax + 8]
// 007c29e4  3bd0                 cmp edx, eax
// 007c29e6  7c04                 jl 0x7c29ec
// 007c29e8  89442430             mov dword ptr [esp + 0x30], eax
// 007c29ec  8bce                 mov ecx, esi
// 007c29ee  e86da2f8ff           call 0x74cc60
// 007c29f3  8b7500               mov esi, dword ptr [ebp]
// 007c29f6  2410                 and al, 0x10
// 007c29f8  0fbec0               movsx eax, al
// 007c29fb  f7d8                 neg eax
// 007c29fd  1bc0                 sbb eax, eax
// 007c29ff  83e0f0               and eax, 0xfffffff0
// 007c2a02  83c020               add eax, 0x20
// 007c2a05  0d048c0000           or eax, 0x8c04
// 007c2a0a  50                   push eax
// 007c2a0b  8d54242c             lea edx, [esp + 0x2c]
// 007c2a0f  52                   push edx
// 007c2a10  8d4c2474             lea ecx, [esp + 0x74]
// 007c2a14  ff1554fb8900         call dword ptr [0x89fb54]
// 007c2a1a  50                   push eax
// 007c2a1b  8d4c2478             lea ecx, [esp + 0x78]
// 007c2a1f  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007c2a25  50                   push eax
// 007c2a26  8b4670               mov eax, dword ptr [esi + 0x70]
// 007c2a29  8bcd                 mov ecx, ebp
// 007c2a2b  ffd0                 call eax
// 007c2a2d  8b442434             mov eax, dword ptr [esp + 0x34]
// 007c2a31  2b44242c             sub eax, dword ptr [esp + 0x2c]
// 007c2a35  8b8fe4020000         mov ecx, dword ptr [edi + 0x2e4]
// 007c2a3b  8b11                 mov edx, dword ptr [ecx]
// 007c2a3d  50                   push eax
// 007c2a3e  8b4258               mov eax, dword ptr [edx + 0x58]
// 007c2a41  ffd0                 call eax
// 007c2a43  8d4c2448             lea ecx, [esp + 0x48]
// 007c2a47  8bf0                 mov esi, eax
// 007c2a49  c644246000           mov byte ptr [esp + 0x60], 0
// 007c2a4e  e88ddefaff           call 0x7708e0
// 007c2a53  8d4c246c             lea ecx, [esp + 0x6c]
// 007c2a57  ff1510fd8900         call dword ptr [0x89fd10]
// 007c2a5d  8bc6                 mov eax, esi
// 007c2a5f  eb1d                 jmp 0x7c2a7e
// 007c2a61  8d4c2448             lea ecx, [esp + 0x48]
// 007c2a65  c644246000           mov byte ptr [esp + 0x60], 0
// 007c2a6a  e871defaff           call 0x7708e0
// 007c2a6f  8d4c246c             lea ecx, [esp + 0x6c]
// 007c2a73  ff1510fd8900         call dword ptr [0x89fd10]
// 007c2a79  b808000000           mov eax, 8
// 007c2a7e  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 007c2a82  64890d00000000       mov dword ptr fs:[0], ecx
// 007c2a89  59                   pop ecx
// 007c2a8a  5f                   pop edi
// 007c2a8b  5e                   pop esi
// 007c2a8c  5d                   pop ebp
// 007c2a8d  5b                   pop ebx
// 007c2a8e  83c450               add esp, 0x50
// 007c2a91  c20c00               ret 0xc
// copied from an identical function in another client (function ?CalcColumnHeight@CXTPReportPaintManager@@MAEHPAVCDC@@PAVCXTPReportColumn@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/ReportControl/XTPReportPaintManager.cpp