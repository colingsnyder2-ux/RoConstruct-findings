// roc 2008-06 007258c0  unit: CXTPRibbonBar  size: 420 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007258c0
//
// 007258c0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007258c4  83ec10               sub esp, 0x10
// 007258c7  56                   push esi
// 007258c8  57                   push edi
// 007258c9  8bf1                 mov esi, ecx
// 007258cb  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007258cf  50                   push eax
// 007258d0  51                   push ecx
// 007258d1  8bce                 mov ecx, esi
// 007258d3  e8a8ccffff           call 0x722580
// 007258d8  8bce                 mov ecx, esi
// 007258da  83f802               cmp eax, 2
// 007258dd  7561                 jne 0x725940
// 007258df  e82cf5f8ff           call 0x6b4e10
// 007258e4  8bc8                 mov ecx, eax
// 007258e6  e865f0f7ff           call 0x6a4950
// 007258eb  8b5620               mov edx, dword ptr [esi + 0x20]
// 007258ee  52                   push edx
// 007258ef  ff15942c8000         call dword ptr [0x802c94]
// 007258f5  8bce                 mov ecx, esi
// 007258f7  e8c420f9ff           call 0x6b79c0
// 007258fc  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007258ff  8bf8                 mov edi, eax
// 00725901  8d442420             lea eax, [esp + 0x20]
// 00725905  50                   push eax
// 00725906  51                   push ecx
// 00725907  ff15802d8000         call dword ptr [0x802d80]
// 0072590d  85ff                 test edi, edi
// 0072590f  7504                 jne 0x725915
// 00725911  33c0                 xor eax, eax
// 00725913  eb03                 jmp 0x725918
// 00725915  8b4720               mov eax, dword ptr [edi + 0x20]
// 00725918  0fb7542424           movzx edx, word ptr [esp + 0x24]
// 0072591d  0fb74c2420           movzx ecx, word ptr [esp + 0x20]
// 00725922  c1e210               shl edx, 0x10
// 00725925  0bd1                 or edx, ecx
// 00725927  52                   push edx
// 00725928  8b5720               mov edx, dword ptr [edi + 0x20]
// 0072592b  50                   push eax
// 0072592c  6813030000           push 0x313
// 00725931  52                   push edx
// 00725932  ff15142e8000         call dword ptr [0x802e14]
// 00725938  5f                   pop edi
// 00725939  5e                   pop esi
// 0072593a  83c410               add esp, 0x10
// 0072593d  c20c00               ret 0xc
// 00725940  e8fbf4f8ff           call 0x6b4e40
// 00725945  85c0                 test eax, eax
// 00725947  0f850f010000         jne 0x725a5c
// 0072594d  8b442424             mov eax, dword ptr [esp + 0x24]
// 00725951  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00725955  50                   push eax
// 00725956  51                   push ecx
// 00725957  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 0072595d  e89ec5fcff           call 0x6f1f00
// 00725962  8bf8                 mov edi, eax
// 00725964  85ff                 test edi, edi
// 00725966  745d                 je 0x7259c5
// 00725968  8bce                 mov ecx, esi
// 0072596a  e85120f9ff           call 0x6b79c0
// 0072596f  8b4020               mov eax, dword ptr [eax + 0x20]
// 00725972  57                   push edi
// 00725973  8d542424             lea edx, [esp + 0x24]
// 00725977  52                   push edx
// 00725978  6859280000           push 0x2859
// 0072597d  50                   push eax
// 0072597e  ff15142e8000         call dword ptr [0x802e14]
// 00725984  83f801               cmp eax, 1
// 00725987  0f84cf000000         je 0x725a5c
// 0072598d  8b442424             mov eax, dword ptr [esp + 0x24]
// 00725991  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00725995  8b17                 mov edx, dword ptr [edi]
// 00725997  8b92f4000000         mov edx, dword ptr [edx + 0xf4]
// 0072599d  50                   push eax
// 0072599e  51                   push ecx
// 0072599f  8bcf                 mov ecx, edi
// 007259a1  ffd2                 call edx
// 007259a3  85c0                 test eax, eax
// 007259a5  0f85b1000000         jne 0x725a5c
// 007259ab  57                   push edi
// 007259ac  8b442428             mov eax, dword ptr [esp + 0x28]
// 007259b0  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007259b4  50                   push eax
// 007259b5  51                   push ecx
// 007259b6  8bce                 mov ecx, esi
// 007259b8  e843eeffff           call 0x724800
// 007259bd  5f                   pop edi
// 007259be  5e                   pop esi
// 007259bf  83c410               add esp, 0x10
// 007259c2  c20c00               ret 0xc
// 007259c5  8b442424             mov eax, dword ptr [esp + 0x24]
// 007259c9  8b96c4010000         mov edx, dword ptr [esi + 0x1c4]
// 007259cf  8b5208               mov edx, dword ptr [edx + 8]
// 007259d2  8d8ec4010000         lea ecx, [esi + 0x1c4]
// 007259d8  50                   push eax
// 007259d9  8b442424             mov eax, dword ptr [esp + 0x24]
// 007259dd  50                   push eax
// 007259de  ffd2                 call edx
// 007259e0  8bf8                 mov edi, eax
// 007259e2  85ff                 test edi, edi
// 007259e4  7448                 je 0x725a2e
// 007259e6  8b4f38               mov ecx, dword ptr [edi + 0x38]
// 007259e9  8b4734               mov eax, dword ptr [edi + 0x34]
// 007259ec  8b573c               mov edx, dword ptr [edi + 0x3c]
// 007259ef  894c240c             mov dword ptr [esp + 0xc], ecx
// 007259f3  53                   push ebx
// 007259f4  8b5f40               mov ebx, dword ptr [edi + 0x40]
// 007259f7  8bce                 mov ecx, esi
// 007259f9  8944240c             mov dword ptr [esp + 0xc], eax
// 007259fd  89542414             mov dword ptr [esp + 0x14], edx
// 00725a01  e8bac6ffff           call 0x7220c0
// 00725a06  2b9860060000         sub ebx, dword ptr [eax + 0x660]
// 00725a0c  8b442428             mov eax, dword ptr [esp + 0x28]
// 00725a10  3bd8                 cmp ebx, eax
// 00725a12  5b                   pop ebx
// 00725a13  7d1d                 jge 0x725a32
// 00725a15  8b4f6c               mov ecx, dword ptr [edi + 0x6c]
// 00725a18  8b542420             mov edx, dword ptr [esp + 0x20]
// 00725a1c  51                   push ecx
// 00725a1d  50                   push eax
// 00725a1e  52                   push edx
// 00725a1f  8bce                 mov ecx, esi
// 00725a21  e8daedffff           call 0x724800
// 00725a26  5f                   pop edi
// 00725a27  5e                   pop esi
// 00725a28  83c410               add esp, 0x10
// 00725a2b  c20c00               ret 0xc
// 00725a2e  8b442424             mov eax, dword ptr [esp + 0x24]
// 00725a32  50                   push eax
// 00725a33  8b442424             mov eax, dword ptr [esp + 0x24]
// 00725a37  50                   push eax
// 00725a38  8d8e2c020000         lea ecx, [esi + 0x22c]
// 00725a3e  51                   push ecx
// 00725a3f  ff152c2d8000         call dword ptr [0x802d2c]
// 00725a45  85c0                 test eax, eax
// 00725a47  740c                 je 0x725a55
// 00725a49  8b9668020000         mov edx, dword ptr [esi + 0x268]
// 00725a4f  52                   push edx
// 00725a50  e957ffffff           jmp 0x7259ac
// 00725a55  8bce                 mov ecx, esi
// 00725a57  e80cb2f7ff           call 0x6a0c68
// 00725a5c  5f                   pop edi
// 00725a5d  5e                   pop esi
// 00725a5e  83c410               add esp, 0x10
// 00725a61  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\Ribbon\XTPRibbonBar.cpp (function ?OnRButtonUp@CXTPRibbonBar@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonBar.cpp
