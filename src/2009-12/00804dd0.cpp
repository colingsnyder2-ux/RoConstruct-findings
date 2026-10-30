// roc 2009-12 00804dd0  unit: CXTPCommandBar  size: 334 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00804dd0
//
// 00804dd0  51                   push ecx
// 00804dd1  53                   push ebx
// 00804dd2  55                   push ebp
// 00804dd3  56                   push esi
// 00804dd4  57                   push edi
// 00804dd5  8bf1                 mov esi, ecx
// 00804dd7  e8f4f6ffff           call 0x8044d0
// 00804ddc  8bf8                 mov edi, eax
// 00804dde  8bcf                 mov ecx, edi
// 00804de0  e88b0d0100           call 0x815b70
// 00804de5  83bee000000000       cmp dword ptr [esi + 0xe0], 0
// 00804dec  8be8                 mov ebp, eax
// 00804dee  896c2410             mov dword ptr [esp + 0x10], ebp
// 00804df2  7514                 jne 0x804e08
// 00804df4  8b4620               mov eax, dword ptr [esi + 0x20]
// 00804df7  50                   push eax
// 00804df8  e8e39f0600           call 0x86ede0
// 00804dfd  83c404               add esp, 4
// 00804e00  85c0                 test eax, eax
// 00804e02  7504                 jne 0x804e08
// 00804e04  33db                 xor ebx, ebx
// 00804e06  eb05                 jmp 0x804e0d
// 00804e08  bb01000000           mov ebx, 1
// 00804e0d  837e2000             cmp dword ptr [esi + 0x20], 0
// 00804e11  0f84ff000000         je 0x804f16
// 00804e17  56                   push esi
// 00804e18  8bcd                 mov ecx, ebp
// 00804e1a  e881a10600           call 0x86efa0
// 00804e1f  85c0                 test eax, eax
// 00804e21  0f85ef000000         jne 0x804f16
// 00804e27  8d6805               lea ebp, [eax + 5]
// 00804e2a  85db                 test ebx, ebx
// 00804e2c  750c                 jne 0x804e3a
// 00804e2e  39ae00010000         cmp dword ptr [esi + 0x100], ebp
// 00804e34  0f85dc000000         jne 0x804f16
// 00804e3a  8bce                 mov ecx, esi
// 00804e3c  e85fffffff           call 0x804da0
// 00804e41  85c0                 test eax, eax
// 00804e43  0f85cd000000         jne 0x804f16
// 00804e49  85ff                 test edi, edi
// 00804e4b  7427                 je 0x804e74
// 00804e4d  39475c               cmp dword ptr [edi + 0x5c], eax
// 00804e50  7422                 je 0x804e74
// 00804e52  8b4f58               mov ecx, dword ptr [edi + 0x58]
// 00804e55  85c9                 test ecx, ecx
// 00804e57  0f84b9000000         je 0x804f16
// 00804e5d  8b542420             mov edx, dword ptr [esp + 0x20]
// 00804e61  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00804e65  52                   push edx
// 00804e66  50                   push eax
// 00804e67  e8f41cffff           call 0x7f6b60
// 00804e6c  5f                   pop edi
// 00804e6d  5e                   pop esi
// 00804e6e  5d                   pop ebp
// 00804e6f  5b                   pop ebx
// 00804e70  59                   pop ecx
// 00804e71  c20c00               ret 0xc
// 00804e74  8b86d0000000         mov eax, dword ptr [esi + 0xd0]
// 00804e7a  83f8ff               cmp eax, -1
// 00804e7d  740d                 je 0x804e8c
// 00804e7f  83bec000000000       cmp dword ptr [esi + 0xc0], 0
// 00804e86  0f848a000000         je 0x804f16
// 00804e8c  39ae00010000         cmp dword ptr [esi + 0x100], ebp
// 00804e92  7512                 jne 0x804ea6
// 00804e94  83f8ff               cmp eax, -1
// 00804e97  750d                 jne 0x804ea6
// 00804e99  83be3001000000       cmp dword ptr [esi + 0x130], 0
// 00804ea0  7504                 jne 0x804ea6
// 00804ea2  33c0                 xor eax, eax
// 00804ea4  eb05                 jmp 0x804eab
// 00804ea6  b801000000           mov eax, 1
// 00804eab  83bee000000000       cmp dword ptr [esi + 0xe0], 0
// 00804eb2  740c                 je 0x804ec0
// 00804eb4  85c0                 test eax, eax
// 00804eb6  7408                 je 0x804ec0
// 00804eb8  8b9ecc000000         mov ebx, dword ptr [esi + 0xcc]
// 00804ebe  eb03                 jmp 0x804ec3
// 00804ec0  83cbff               or ebx, 0xffffffff
// 00804ec3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00804ec7  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00804ecb  51                   push ecx
// 00804ecc  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 00804ed2  52                   push edx
// 00804ed3  e848070400           call 0x845620
// 00804ed8  8bf8                 mov edi, eax
// 00804eda  85ff                 test edi, edi
// 00804edc  7429                 je 0x804f07
// 00804ede  8b4620               mov eax, dword ptr [esi + 0x20]
// 00804ee1  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00804ee5  8b9f80000000         mov ebx, dword ptr [edi + 0x80]
// 00804eeb  50                   push eax
// 00804eec  e85fa00600           call 0x86ef50
// 00804ef1  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00804ef5  8b07                 mov eax, dword ptr [edi]
// 00804ef7  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00804efb  8b80fc000000         mov eax, dword ptr [eax + 0xfc]
// 00804f01  51                   push ecx
// 00804f02  52                   push edx
// 00804f03  8bcf                 mov ecx, edi
// 00804f05  ffd0                 call eax
// 00804f07  8b16                 mov edx, dword ptr [esi]
// 00804f09  8b8250010000         mov eax, dword ptr [edx + 0x150]
// 00804f0f  6a00                 push 0
// 00804f11  53                   push ebx
// 00804f12  8bce                 mov ecx, esi
// 00804f14  ffd0                 call eax
// 00804f16  5f                   pop edi
// 00804f17  5e                   pop esi
// 00804f18  5d                   pop ebp
// 00804f19  5b                   pop ebx
// 00804f1a  59                   pop ecx
// 00804f1b  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnMouseMove@CXTPCommandBar@@QAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCommandBar.cpp