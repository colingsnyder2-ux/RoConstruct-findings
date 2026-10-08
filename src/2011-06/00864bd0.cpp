// roc 2011-06 00864bd0  unit: CXTPTabClientWnd::CWorkspace  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00864bd0
//
// 00864bd0  56                   push esi
// 00864bd1  8bf1                 mov esi, ecx
// 00864bd3  8b06                 mov eax, dword ptr [esi]
// 00864bd5  8b502c               mov edx, dword ptr [eax + 0x2c]
// 00864bd8  ffd2                 call edx
// 00864bda  83782400             cmp dword ptr [eax + 0x24], 0
// 00864bde  7506                 jne 0x864be6
// 00864be0  33c0                 xor eax, eax
// 00864be2  5e                   pop esi
// 00864be3  c21800               ret 0x18
// 00864be6  837c241800           cmp dword ptr [esp + 0x18], 0
// 00864beb  7444                 je 0x864c31
// 00864bed  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00864bf1  8b06                 mov eax, dword ptr [esi]
// 00864bf3  8b5010               mov edx, dword ptr [eax + 0x10]
// 00864bf6  51                   push ecx
// 00864bf7  8bce                 mov ecx, esi
// 00864bf9  ffd2                 call edx
// 00864bfb  85c0                 test eax, eax
// 00864bfd  7432                 je 0x864c31
// 00864bff  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00864c03  85c9                 test ecx, ecx
// 00864c05  7504                 jne 0x864c0b
// 00864c07  33d2                 xor edx, edx
// 00864c09  eb03                 jmp 0x864c0e
// 00864c0b  8b5104               mov edx, dword ptr [ecx + 4]
// 00864c0e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00864c12  8b7104               mov esi, dword ptr [ecx + 4]
// 00864c15  8b09                 mov ecx, dword ptr [ecx]
// 00864c17  6a03                 push 3
// 00864c19  6a00                 push 0
// 00864c1b  6a00                 push 0
// 00864c1d  56                   push esi
// 00864c1e  51                   push ecx
// 00864c1f  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00864c23  50                   push eax
// 00864c24  8b442428             mov eax, dword ptr [esp + 0x28]
// 00864c28  50                   push eax
// 00864c29  51                   push ecx
// 00864c2a  52                   push edx
// 00864c2b  ff15bc1aa400         call dword ptr [0xa41abc]
// 00864c31  b801000000           mov eax, 1
// 00864c36  5e                   pop esi
// 00864c37  c21800               ret 0x18
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?DrawIcon@CWorkspace@CXTPTabClientWnd@@MBEHPAVCDC@@VCPoint@@PAVCXTPTabManagerItem@@HAAVCSize@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
