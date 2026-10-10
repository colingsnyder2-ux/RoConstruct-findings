// roc 2008-06 006e7e60  unit: CXTPControlPopup  size: 254 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e7e60
//
// 006e7e60  56                   push esi
// 006e7e61  8bf1                 mov esi, ecx
// 006e7e63  83be7801000000       cmp dword ptr [esi + 0x178], 0
// 006e7e6a  7506                 jne 0x6e7e72
// 006e7e6c  33c0                 xor eax, eax
// 006e7e6e  5e                   pop esi
// 006e7e6f  c20400               ret 4
// 006e7e72  83befc00000004       cmp dword ptr [esi + 0xfc], 4
// 006e7e79  751f                 jne 0x6e7e9a
// 006e7e7b  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 006e7e81  83f8ff               cmp eax, -1
// 006e7e84  750f                 jne 0x6e7e95
// 006e7e86  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 006e7e8c  85c9                 test ecx, ecx
// 006e7e8e  7405                 je 0x6e7e95
// 006e7e90  e82b39fcff           call 0x6ab7c0
// 006e7e95  83f803               cmp eax, 3
// 006e7e98  74d2                 je 0x6e7e6c
// 006e7e9a  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 006e7ea0  85c0                 test eax, eax
// 006e7ea2  74c8                 je 0x6e7e6c
// 006e7ea4  83782000             cmp dword ptr [eax + 0x20], 0
// 006e7ea8  74c2                 je 0x6e7e6c
// 006e7eaa  8b442408             mov eax, dword ptr [esp + 8]
// 006e7eae  57                   push edi
// 006e7eaf  898674010000         mov dword ptr [esi + 0x174], eax
// 006e7eb5  6a00                 push 0
// 006e7eb7  85c0                 test eax, eax
// 006e7eb9  747c                 je 0x6e7f37
// 006e7ebb  8bce                 mov ecx, esi
// 006e7ebd  e80e3afcff           call 0x6ab8d0
// 006e7ec2  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 006e7ec8  e8f3fafcff           call 0x6b79c0
// 006e7ecd  8b4020               mov eax, dword ptr [eax + 0x20]
// 006e7ed0  8b3d942c8000         mov edi, dword ptr [0x802c94]
// 006e7ed6  50                   push eax
// 006e7ed7  ffd7                 call edi
// 006e7ed9  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 006e7edf  8b5120               mov edx, dword ptr [ecx + 0x20]
// 006e7ee2  52                   push edx
// 006e7ee3  ffd7                 call edi
// 006e7ee5  8b8678010000         mov eax, dword ptr [esi + 0x178]
// 006e7eeb  83b8e000000000       cmp dword ptr [eax + 0xe0], 0
// 006e7ef2  7560                 jne 0x6e7f54
// 006e7ef4  8b38                 mov edi, dword ptr [eax]
// 006e7ef6  8b06                 mov eax, dword ptr [esi]
// 006e7ef8  8b506c               mov edx, dword ptr [eax + 0x6c]
// 006e7efb  8bce                 mov ecx, esi
// 006e7efd  ffd2                 call edx
// 006e7eff  50                   push eax
// 006e7f00  e85b2efcff           call 0x6aad60
// 006e7f05  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 006e7f0b  83c404               add esp, 4
// 006e7f0e  50                   push eax
// 006e7f0f  8b8760010000         mov eax, dword ptr [edi + 0x160]
// 006e7f15  56                   push esi
// 006e7f16  ffd0                 call eax
// 006e7f18  85c0                 test eax, eax
// 006e7f1a  7505                 jne 0x6e7f21
// 006e7f1c  5f                   pop edi
// 006e7f1d  5e                   pop esi
// 006e7f1e  c20400               ret 4
// 006e7f21  8b16                 mov edx, dword ptr [esi]
// 006e7f23  8b824c010000         mov eax, dword ptr [edx + 0x14c]
// 006e7f29  8bce                 mov ecx, esi
// 006e7f2b  ffd0                 call eax
// 006e7f2d  5f                   pop edi
// 006e7f2e  b801000000           mov eax, 1
// 006e7f33  5e                   pop esi
// 006e7f34  c20400               ret 4
// 006e7f37  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 006e7f3d  8b11                 mov edx, dword ptr [ecx]
// 006e7f3f  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 006e7f45  6a01                 push 1
// 006e7f47  6a00                 push 0
// 006e7f49  ffd0                 call eax
// 006e7f4b  6a01                 push 1
// 006e7f4d  8bce                 mov ecx, esi
// 006e7f4f  e87c39fcff           call 0x6ab8d0
// 006e7f54  5f                   pop edi
// 006e7f55  b801000000           mov eax, 1
// 006e7f5a  5e                   pop esi
// 006e7f5b  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControlPopup.cpp (function ?OnSetPopup@CXTPControlPopup@@MAEHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlPopup.cpp
