// roc 2008-06 00702060  unit: CXTPTabClientWnd::CWorkspace  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00702060
//
// 00702060  56                   push esi
// 00702061  8bf1                 mov esi, ecx
// 00702063  8b06                 mov eax, dword ptr [esi]
// 00702065  8b502c               mov edx, dword ptr [eax + 0x2c]
// 00702068  ffd2                 call edx
// 0070206a  83782400             cmp dword ptr [eax + 0x24], 0
// 0070206e  7506                 jne 0x702076
// 00702070  33c0                 xor eax, eax
// 00702072  5e                   pop esi
// 00702073  c21800               ret 0x18
// 00702076  837c241800           cmp dword ptr [esp + 0x18], 0
// 0070207b  7444                 je 0x7020c1
// 0070207d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00702081  8b06                 mov eax, dword ptr [esi]
// 00702083  8b5010               mov edx, dword ptr [eax + 0x10]
// 00702086  51                   push ecx
// 00702087  8bce                 mov ecx, esi
// 00702089  ffd2                 call edx
// 0070208b  85c0                 test eax, eax
// 0070208d  7432                 je 0x7020c1
// 0070208f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00702093  85c9                 test ecx, ecx
// 00702095  7504                 jne 0x70209b
// 00702097  33d2                 xor edx, edx
// 00702099  eb03                 jmp 0x70209e
// 0070209b  8b5104               mov edx, dword ptr [ecx + 4]
// 0070209e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007020a2  8b7104               mov esi, dword ptr [ecx + 4]
// 007020a5  8b09                 mov ecx, dword ptr [ecx]
// 007020a7  6a03                 push 3
// 007020a9  6a00                 push 0
// 007020ab  6a00                 push 0
// 007020ad  56                   push esi
// 007020ae  51                   push ecx
// 007020af  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007020b3  50                   push eax
// 007020b4  8b442428             mov eax, dword ptr [esp + 0x28]
// 007020b8  50                   push eax
// 007020b9  51                   push ecx
// 007020ba  52                   push edx
// 007020bb  ff15982b8000         call dword ptr [0x802b98]
// 007020c1  b801000000           mov eax, 1
// 007020c6  5e                   pop esi
// 007020c7  c21800               ret 0x18
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?DrawIcon@CWorkspace@CXTPTabClientWnd@@MBEHPAVCDC@@VCPoint@@PAVCXTPTabManagerItem@@HAAVCSize@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
