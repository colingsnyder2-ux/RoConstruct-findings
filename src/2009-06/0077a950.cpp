// roc 2009-06 0077a950  unit: CXTPTabClientWnd::CWorkspace  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0077a950
//
// 0077a950  56                   push esi
// 0077a951  8bf1                 mov esi, ecx
// 0077a953  8b06                 mov eax, dword ptr [esi]
// 0077a955  8b502c               mov edx, dword ptr [eax + 0x2c]
// 0077a958  ffd2                 call edx
// 0077a95a  83782400             cmp dword ptr [eax + 0x24], 0
// 0077a95e  7506                 jne 0x77a966
// 0077a960  33c0                 xor eax, eax
// 0077a962  5e                   pop esi
// 0077a963  c21800               ret 0x18
// 0077a966  837c241800           cmp dword ptr [esp + 0x18], 0
// 0077a96b  7444                 je 0x77a9b1
// 0077a96d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0077a971  8b06                 mov eax, dword ptr [esi]
// 0077a973  8b5010               mov edx, dword ptr [eax + 0x10]
// 0077a976  51                   push ecx
// 0077a977  8bce                 mov ecx, esi
// 0077a979  ffd2                 call edx
// 0077a97b  85c0                 test eax, eax
// 0077a97d  7432                 je 0x77a9b1
// 0077a97f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0077a983  85c9                 test ecx, ecx
// 0077a985  7504                 jne 0x77a98b
// 0077a987  33d2                 xor edx, edx
// 0077a989  eb03                 jmp 0x77a98e
// 0077a98b  8b5104               mov edx, dword ptr [ecx + 4]
// 0077a98e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0077a992  8b7104               mov esi, dword ptr [ecx + 4]
// 0077a995  8b09                 mov ecx, dword ptr [ecx]
// 0077a997  6a03                 push 3
// 0077a999  6a00                 push 0
// 0077a99b  6a00                 push 0
// 0077a99d  56                   push esi
// 0077a99e  51                   push ecx
// 0077a99f  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0077a9a3  50                   push eax
// 0077a9a4  8b442428             mov eax, dword ptr [esp + 0x28]
// 0077a9a8  50                   push eax
// 0077a9a9  51                   push ecx
// 0077a9aa  52                   push edx
// 0077a9ab  ff1528ef8900         call dword ptr [0x89ef28]
// 0077a9b1  b801000000           mov eax, 1
// 0077a9b6  5e                   pop esi
// 0077a9b7  c21800               ret 0x18
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?DrawIcon@CWorkspace@CXTPTabClientWnd@@MBEHPAVCDC@@VCPoint@@PAVCXTPTabManagerItem@@HAAVCSize@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
