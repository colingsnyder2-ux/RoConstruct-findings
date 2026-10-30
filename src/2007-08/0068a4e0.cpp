// from server: 100% by auto
// roc 2007-08 0068a4e0  unit: CXTPTabClientWnd::CWorkspace  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0068a4e0
//
// 0068a4e0  56                   push esi
// 0068a4e1  8bf1                 mov esi, ecx
// 0068a4e3  8b06                 mov eax, dword ptr [esi]
// 0068a4e5  8b502c               mov edx, dword ptr [eax + 0x2c]
// 0068a4e8  ffd2                 call edx
// 0068a4ea  83782400             cmp dword ptr [eax + 0x24], 0
// 0068a4ee  7506                 jne 0x68a4f6
// 0068a4f0  33c0                 xor eax, eax
// 0068a4f2  5e                   pop esi
// 0068a4f3  c21800               ret 0x18
// 0068a4f6  837c241800           cmp dword ptr [esp + 0x18], 0
// 0068a4fb  7444                 je 0x68a541
// 0068a4fd  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0068a501  8b06                 mov eax, dword ptr [esi]
// 0068a503  8b5010               mov edx, dword ptr [eax + 0x10]
// 0068a506  51                   push ecx
// 0068a507  8bce                 mov ecx, esi
// 0068a509  ffd2                 call edx
// 0068a50b  85c0                 test eax, eax
// 0068a50d  7432                 je 0x68a541
// 0068a50f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0068a513  85c9                 test ecx, ecx
// 0068a515  7504                 jne 0x68a51b
// 0068a517  33d2                 xor edx, edx
// 0068a519  eb03                 jmp 0x68a51e
// 0068a51b  8b5104               mov edx, dword ptr [ecx + 4]
// 0068a51e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0068a522  8b7104               mov esi, dword ptr [ecx + 4]
// 0068a525  8b09                 mov ecx, dword ptr [ecx]
// 0068a527  6a03                 push 3
// 0068a529  6a00                 push 0
// 0068a52b  6a00                 push 0
// 0068a52d  56                   push esi
// 0068a52e  51                   push ecx
// 0068a52f  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0068a533  50                   push eax
// 0068a534  8b442428             mov eax, dword ptr [esp + 0x28]
// 0068a538  50                   push eax
// 0068a539  51                   push ecx
// 0068a53a  52                   push edx
// 0068a53b  ff1588ee7700         call dword ptr [0x77ee88]
// 0068a541  b801000000           mov eax, 1
// 0068a546  5e                   pop esi
// 0068a547  c21800               ret 0x18
// library xtp-11.2.2-vc8/Source\CommandBars\XTPTabClientWnd.cpp (function ?DrawIcon@CWorkspace@CXTPTabClientWnd@@MBEHPAVCDC@@VCPoint@@PAVCXTPTabManagerItem@@HAAVCSize@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPTabClientWnd.cpp
