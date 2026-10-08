// roc 2012-06 009dd1e0  unit: CXTPTabClientWnd::CWorkspace  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009dd1e0
//
// 009dd1e0  56                   push esi
// 009dd1e1  8bf1                 mov esi, ecx
// 009dd1e3  8b06                 mov eax, dword ptr [esi]
// 009dd1e5  8b502c               mov edx, dword ptr [eax + 0x2c]
// 009dd1e8  ffd2                 call edx
// 009dd1ea  83782400             cmp dword ptr [eax + 0x24], 0
// 009dd1ee  7506                 jne 0x9dd1f6
// 009dd1f0  33c0                 xor eax, eax
// 009dd1f2  5e                   pop esi
// 009dd1f3  c21800               ret 0x18
// 009dd1f6  837c241800           cmp dword ptr [esp + 0x18], 0
// 009dd1fb  7444                 je 0x9dd241
// 009dd1fd  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 009dd201  8b06                 mov eax, dword ptr [esi]
// 009dd203  8b5010               mov edx, dword ptr [eax + 0x10]
// 009dd206  51                   push ecx
// 009dd207  8bce                 mov ecx, esi
// 009dd209  ffd2                 call edx
// 009dd20b  85c0                 test eax, eax
// 009dd20d  7432                 je 0x9dd241
// 009dd20f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 009dd213  85c9                 test ecx, ecx
// 009dd215  7504                 jne 0x9dd21b
// 009dd217  33d2                 xor edx, edx
// 009dd219  eb03                 jmp 0x9dd21e
// 009dd21b  8b5104               mov edx, dword ptr [ecx + 4]
// 009dd21e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 009dd222  8b7104               mov esi, dword ptr [ecx + 4]
// 009dd225  8b09                 mov ecx, dword ptr [ecx]
// 009dd227  6a03                 push 3
// 009dd229  6a00                 push 0
// 009dd22b  6a00                 push 0
// 009dd22d  56                   push esi
// 009dd22e  51                   push ecx
// 009dd22f  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 009dd233  50                   push eax
// 009dd234  8b442428             mov eax, dword ptr [esp + 0x28]
// 009dd238  50                   push eax
// 009dd239  51                   push ecx
// 009dd23a  52                   push edx
// 009dd23b  ff15383db200         call dword ptr [0xb23d38]
// 009dd241  b801000000           mov eax, 1
// 009dd246  5e                   pop esi
// 009dd247  c21800               ret 0x18
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?DrawIcon@CWorkspace@CXTPTabClientWnd@@MBEHPAVCDC@@VCPoint@@PAVCXTPTabManagerItem@@HAAVCSize@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
