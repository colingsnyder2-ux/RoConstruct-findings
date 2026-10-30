// roc 2009-12 00856660  unit: CInstanceRecord::CNameItem  size: 136 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00856660
//
// 00856660  53                   push ebx
// 00856661  56                   push esi
// 00856662  8bf1                 mov esi, ecx
// 00856664  83beb400000000       cmp dword ptr [esi + 0xb4], 0
// 0085666b  7561                 jne 0x8566ce
// 0085666d  83be1401000000       cmp dword ptr [esi + 0x114], 0
// 00856674  7558                 jne 0x8566ce
// 00856676  83bec000000000       cmp dword ptr [esi + 0xc0], 0
// 0085667d  744f                 je 0x8566ce
// 0085667f  8b4620               mov eax, dword ptr [esi + 0x20]
// 00856682  57                   push edi
// 00856683  8b3dc4cb9800         mov edi, dword ptr [0x98cbc4]
// 00856689  6a00                 push 0
// 0085668b  6a00                 push 0
// 0085668d  6a0b                 push 0xb
// 0085668f  50                   push eax
// 00856690  ffd7                 call edi
// 00856692  8bce                 mov ecx, esi
// 00856694  e897d7f9ff           call 0x7f3e30
// 00856699  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0085669c  6a00                 push 0
// 0085669e  6a01                 push 1
// 008566a0  6a0b                 push 0xb
// 008566a2  51                   push ecx
// 008566a3  8bd8                 mov ebx, eax
// 008566a5  ffd7                 call edi
// 008566a7  8b5620               mov edx, dword ptr [esi + 0x20]
// 008566aa  6885010000           push 0x185
// 008566af  6a00                 push 0
// 008566b1  6a00                 push 0
// 008566b3  52                   push edx
// 008566b4  ff151ccb9800         call dword ptr [0x98cb1c]
// 008566ba  8b06                 mov eax, dword ptr [esi]
// 008566bc  8b9044010000         mov edx, dword ptr [eax + 0x144]
// 008566c2  5f                   pop edi
// 008566c3  8bce                 mov ecx, esi
// 008566c5  ffd2                 call edx
// 008566c7  5e                   pop esi
// 008566c8  8bc3                 mov eax, ebx
// 008566ca  5b                   pop ebx
// 008566cb  c20800               ret 8
// 008566ce  e85dd7f9ff           call 0x7f3e30
// 008566d3  8bd8                 mov ebx, eax
// 008566d5  8b06                 mov eax, dword ptr [esi]
// 008566d7  8b9044010000         mov edx, dword ptr [eax + 0x144]
// 008566dd  8bce                 mov ecx, esi
// 008566df  ffd2                 call edx
// 008566e1  5e                   pop esi
// 008566e2  8bc3                 mov eax, ebx
// 008566e4  5b                   pop ebx
// 008566e5  c20800               ret 8
// copied from an identical function in another client (function ?OnMDIActivate@CXTPTabClientWnd@@IAEJIJ@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPTabClientWnd.cpp