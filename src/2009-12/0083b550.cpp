// roc 2009-12 0083b550  unit: CXTPControlPopup  size: 254 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083b550
//
// 0083b550  56                   push esi
// 0083b551  8bf1                 mov esi, ecx
// 0083b553  83be7801000000       cmp dword ptr [esi + 0x178], 0
// 0083b55a  7506                 jne 0x83b562
// 0083b55c  33c0                 xor eax, eax
// 0083b55e  5e                   pop esi
// 0083b55f  c20400               ret 4
// 0083b562  83befc00000004       cmp dword ptr [esi + 0xfc], 4
// 0083b569  751f                 jne 0x83b58a
// 0083b56b  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 0083b571  83f8ff               cmp eax, -1
// 0083b574  750f                 jne 0x83b585
// 0083b576  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 0083b57c  85c9                 test ecx, ecx
// 0083b57e  7405                 je 0x83b585
// 0083b580  e82bb0fbff           call 0x7f65b0
// 0083b585  83f803               cmp eax, 3
// 0083b588  74d2                 je 0x83b55c
// 0083b58a  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 0083b590  85c0                 test eax, eax
// 0083b592  74c8                 je 0x83b55c
// 0083b594  83782000             cmp dword ptr [eax + 0x20], 0
// 0083b598  74c2                 je 0x83b55c
// 0083b59a  8b442408             mov eax, dword ptr [esp + 8]
// 0083b59e  57                   push edi
// 0083b59f  898674010000         mov dword ptr [esi + 0x174], eax
// 0083b5a5  6a00                 push 0
// 0083b5a7  85c0                 test eax, eax
// 0083b5a9  747c                 je 0x83b627
// 0083b5ab  8bce                 mov ecx, esi
// 0083b5ad  e80eb1fbff           call 0x7f66c0
// 0083b5b2  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 0083b5b8  e8d3bafcff           call 0x807090
// 0083b5bd  8b4020               mov eax, dword ptr [eax + 0x20]
// 0083b5c0  8b3da4ca9800         mov edi, dword ptr [0x98caa4]
// 0083b5c6  50                   push eax
// 0083b5c7  ffd7                 call edi
// 0083b5c9  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 0083b5cf  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0083b5d2  52                   push edx
// 0083b5d3  ffd7                 call edi
// 0083b5d5  8b8678010000         mov eax, dword ptr [esi + 0x178]
// 0083b5db  83b8e000000000       cmp dword ptr [eax + 0xe0], 0
// 0083b5e2  7560                 jne 0x83b644
// 0083b5e4  8b38                 mov edi, dword ptr [eax]
// 0083b5e6  8b06                 mov eax, dword ptr [esi]
// 0083b5e8  8b506c               mov edx, dword ptr [eax + 0x6c]
// 0083b5eb  8bce                 mov ecx, esi
// 0083b5ed  ffd2                 call edx
// 0083b5ef  50                   push eax
// 0083b5f0  e83ba4fbff           call 0x7f5a30
// 0083b5f5  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 0083b5fb  83c404               add esp, 4
// 0083b5fe  50                   push eax
// 0083b5ff  8b8760010000         mov eax, dword ptr [edi + 0x160]
// 0083b605  56                   push esi
// 0083b606  ffd0                 call eax
// 0083b608  85c0                 test eax, eax
// 0083b60a  7505                 jne 0x83b611
// 0083b60c  5f                   pop edi
// 0083b60d  5e                   pop esi
// 0083b60e  c20400               ret 4
// 0083b611  8b16                 mov edx, dword ptr [esi]
// 0083b613  8b824c010000         mov eax, dword ptr [edx + 0x14c]
// 0083b619  8bce                 mov ecx, esi
// 0083b61b  ffd0                 call eax
// 0083b61d  5f                   pop edi
// 0083b61e  b801000000           mov eax, 1
// 0083b623  5e                   pop esi
// 0083b624  c20400               ret 4
// 0083b627  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 0083b62d  8b11                 mov edx, dword ptr [ecx]
// 0083b62f  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 0083b635  6a01                 push 1
// 0083b637  6a00                 push 0
// 0083b639  ffd0                 call eax
// 0083b63b  6a01                 push 1
// 0083b63d  8bce                 mov ecx, esi
// 0083b63f  e87cb0fbff           call 0x7f66c0
// 0083b644  5f                   pop edi
// 0083b645  b801000000           mov eax, 1
// 0083b64a  5e                   pop esi
// 0083b64b  c20400               ret 4
// copied from an identical function in another client (function ?OnSetPopup@CXTPControlPopup@@MAEHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlPopup.cpp