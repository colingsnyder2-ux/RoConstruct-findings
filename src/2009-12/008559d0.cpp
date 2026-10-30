// roc 2009-12 008559d0  unit: CXTPTabClientWnd::CWorkspace  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008559d0
//
// 008559d0  56                   push esi
// 008559d1  8bf1                 mov esi, ecx
// 008559d3  8b06                 mov eax, dword ptr [esi]
// 008559d5  8b502c               mov edx, dword ptr [eax + 0x2c]
// 008559d8  ffd2                 call edx
// 008559da  83782400             cmp dword ptr [eax + 0x24], 0
// 008559de  7506                 jne 0x8559e6
// 008559e0  33c0                 xor eax, eax
// 008559e2  5e                   pop esi
// 008559e3  c21800               ret 0x18
// 008559e6  837c241800           cmp dword ptr [esp + 0x18], 0
// 008559eb  7444                 je 0x855a31
// 008559ed  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008559f1  8b06                 mov eax, dword ptr [esi]
// 008559f3  8b5010               mov edx, dword ptr [eax + 0x10]
// 008559f6  51                   push ecx
// 008559f7  8bce                 mov ecx, esi
// 008559f9  ffd2                 call edx
// 008559fb  85c0                 test eax, eax
// 008559fd  7432                 je 0x855a31
// 008559ff  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00855a03  85c9                 test ecx, ecx
// 00855a05  7504                 jne 0x855a0b
// 00855a07  33d2                 xor edx, edx
// 00855a09  eb03                 jmp 0x855a0e
// 00855a0b  8b5104               mov edx, dword ptr [ecx + 4]
// 00855a0e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00855a12  8b7104               mov esi, dword ptr [ecx + 4]
// 00855a15  8b09                 mov ecx, dword ptr [ecx]
// 00855a17  6a03                 push 3
// 00855a19  6a00                 push 0
// 00855a1b  6a00                 push 0
// 00855a1d  56                   push esi
// 00855a1e  51                   push ecx
// 00855a1f  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00855a23  50                   push eax
// 00855a24  8b442428             mov eax, dword ptr [esp + 0x28]
// 00855a28  50                   push eax
// 00855a29  51                   push ecx
// 00855a2a  52                   push edx
// 00855a2b  ff1514cb9800         call dword ptr [0x98cb14]
// 00855a31  b801000000           mov eax, 1
// 00855a36  5e                   pop esi
// 00855a37  c21800               ret 0x18
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?DrawIcon@CWorkspace@CXTPTabClientWnd@@MBEHPAVCDC@@VCPoint@@PAVCXTPTabManagerItem@@HAAVCSize@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
