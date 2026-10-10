// roc 2008-06 00702ce0  unit: CXTPTabClientWnd  size: 136 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00702ce0
//
// 00702ce0  53                   push ebx
// 00702ce1  56                   push esi
// 00702ce2  8bf1                 mov esi, ecx
// 00702ce4  83beb400000000       cmp dword ptr [esi + 0xb4], 0
// 00702ceb  7561                 jne 0x702d4e
// 00702ced  83be1401000000       cmp dword ptr [esi + 0x114], 0
// 00702cf4  7558                 jne 0x702d4e
// 00702cf6  83bec000000000       cmp dword ptr [esi + 0xc0], 0
// 00702cfd  744f                 je 0x702d4e
// 00702cff  8b4620               mov eax, dword ptr [esi + 0x20]
// 00702d02  57                   push edi
// 00702d03  8b3d142e8000         mov edi, dword ptr [0x802e14]
// 00702d09  6a00                 push 0
// 00702d0b  6a00                 push 0
// 00702d0d  6a0b                 push 0xb
// 00702d0f  50                   push eax
// 00702d10  ffd7                 call edi
// 00702d12  8bce                 mov ecx, esi
// 00702d14  e84fdff9ff           call 0x6a0c68
// 00702d19  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00702d1c  6a00                 push 0
// 00702d1e  6a01                 push 1
// 00702d20  6a0b                 push 0xb
// 00702d22  51                   push ecx
// 00702d23  8bd8                 mov ebx, eax
// 00702d25  ffd7                 call edi
// 00702d27  8b5620               mov edx, dword ptr [esi + 0x20]
// 00702d2a  6885010000           push 0x185
// 00702d2f  6a00                 push 0
// 00702d31  6a00                 push 0
// 00702d33  52                   push edx
// 00702d34  ff15742c8000         call dword ptr [0x802c74]
// 00702d3a  8b06                 mov eax, dword ptr [esi]
// 00702d3c  8b9044010000         mov edx, dword ptr [eax + 0x144]
// 00702d42  5f                   pop edi
// 00702d43  8bce                 mov ecx, esi
// 00702d45  ffd2                 call edx
// 00702d47  5e                   pop esi
// 00702d48  8bc3                 mov eax, ebx
// 00702d4a  5b                   pop ebx
// 00702d4b  c20800               ret 8
// 00702d4e  e815dff9ff           call 0x6a0c68
// 00702d53  8bd8                 mov ebx, eax
// 00702d55  8b06                 mov eax, dword ptr [esi]
// 00702d57  8b9044010000         mov edx, dword ptr [eax + 0x144]
// 00702d5d  8bce                 mov ecx, esi
// 00702d5f  ffd2                 call edx
// 00702d61  5e                   pop esi
// 00702d62  8bc3                 mov eax, ebx
// 00702d64  5b                   pop ebx
// 00702d65  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnMDIActivate@CXTPTabClientWnd@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPTabClientWnd.cpp
