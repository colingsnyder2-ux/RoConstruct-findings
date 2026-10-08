// roc 2010-06 00809900  unit: CXTPTabClientWnd::CWorkspace  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00809900
//
// 00809900  56                   push esi
// 00809901  8bf1                 mov esi, ecx
// 00809903  8b06                 mov eax, dword ptr [esi]
// 00809905  8b502c               mov edx, dword ptr [eax + 0x2c]
// 00809908  ffd2                 call edx
// 0080990a  83782400             cmp dword ptr [eax + 0x24], 0
// 0080990e  7506                 jne 0x809916
// 00809910  33c0                 xor eax, eax
// 00809912  5e                   pop esi
// 00809913  c21800               ret 0x18
// 00809916  837c241800           cmp dword ptr [esp + 0x18], 0
// 0080991b  7444                 je 0x809961
// 0080991d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00809921  8b06                 mov eax, dword ptr [esi]
// 00809923  8b5010               mov edx, dword ptr [eax + 0x10]
// 00809926  51                   push ecx
// 00809927  8bce                 mov ecx, esi
// 00809929  ffd2                 call edx
// 0080992b  85c0                 test eax, eax
// 0080992d  7432                 je 0x809961
// 0080992f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00809933  85c9                 test ecx, ecx
// 00809935  7504                 jne 0x80993b
// 00809937  33d2                 xor edx, edx
// 00809939  eb03                 jmp 0x80993e
// 0080993b  8b5104               mov edx, dword ptr [ecx + 4]
// 0080993e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00809942  8b7104               mov esi, dword ptr [ecx + 4]
// 00809945  8b09                 mov ecx, dword ptr [ecx]
// 00809947  6a03                 push 3
// 00809949  6a00                 push 0
// 0080994b  6a00                 push 0
// 0080994d  56                   push esi
// 0080994e  51                   push ecx
// 0080994f  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00809953  50                   push eax
// 00809954  8b442428             mov eax, dword ptr [esp + 0x28]
// 00809958  50                   push eax
// 00809959  51                   push ecx
// 0080995a  52                   push edx
// 0080995b  ff15ccb99e00         call dword ptr [0x9eb9cc]
// 00809961  b801000000           mov eax, 1
// 00809966  5e                   pop esi
// 00809967  c21800               ret 0x18
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?DrawIcon@CWorkspace@CXTPTabClientWnd@@MBEHPAVCDC@@VCPoint@@PAVCXTPTabManagerItem@@HAAVCSize@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
