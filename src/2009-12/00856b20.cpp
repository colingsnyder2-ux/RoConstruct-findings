// roc 2009-12 00856b20  unit: CXTPTabClientWnd  size: 263 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00856b20
//
// 00856b20  6aff                 push -1
// 00856b22  686aef9500           push 0x95ef6a
// 00856b27  64a100000000         mov eax, dword ptr fs:[0]
// 00856b2d  50                   push eax
// 00856b2e  51                   push ecx
// 00856b2f  53                   push ebx
// 00856b30  56                   push esi
// 00856b31  57                   push edi
// 00856b32  a10052b600           mov eax, dword ptr [0xb65200]
// 00856b37  33c4                 xor eax, esp
// 00856b39  50                   push eax
// 00856b3a  8d442414             lea eax, [esp + 0x14]
// 00856b3e  64a300000000         mov dword ptr fs:[0], eax
// 00856b44  8bd9                 mov ebx, ecx
// 00856b46  8b03                 mov eax, dword ptr [ebx]
// 00856b48  8b9054010000         mov edx, dword ptr [eax + 0x154]
// 00856b4e  ffd2                 call edx
// 00856b50  50                   push eax
// 00856b51  e83aaefeff           call 0x841990
// 00856b56  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 00856b59  83c404               add esp, 4
// 00856b5c  8bf0                 mov esi, eax
// 00856b5e  8d442424             lea eax, [esp + 0x24]
// 00856b62  50                   push eax
// 00856b63  51                   push ecx
// 00856b64  ff1554cc9800         call dword ptr [0x98cc54]
// 00856b6a  6874010000           push 0x174
// 00856b6f  e8ecccf9ff           call 0x7f3860
// 00856b74  8bf8                 mov edi, eax
// 00856b76  83c404               add esp, 4
// 00856b79  897c2410             mov dword ptr [esp + 0x10], edi
// 00856b7d  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00856b85  85ff                 test edi, edi
// 00856b87  7416                 je 0x856b9f
// 00856b89  8bcf                 mov ecx, edi
// 00856b8b  e8d0950300           call 0x890160
// 00856b90  c7077cb29f00         mov dword ptr [edi], 0x9fb27c
// 00856b96  c747201cb29f00       mov dword ptr [edi + 0x20], 0x9fb21c
// 00856b9d  eb02                 jmp 0x856ba1
// 00856b9f  33ff                 xor edi, edi
// 00856ba1  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 00856ba7  6a00                 push 0
// 00856ba9  6aff                 push -1
// 00856bab  6a00                 push 0
// 00856bad  6a00                 push 0
// 00856baf  57                   push edi
// 00856bb0  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 00856bb8  e83314ffff           call 0x847ff0
// 00856bbd  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 00856bc3  6a00                 push 0
// 00856bc5  6aff                 push -1
// 00856bc7  6a00                 push 0
// 00856bc9  68c7230000           push 0x23c7
// 00856bce  6a01                 push 1
// 00856bd0  e88b15ffff           call 0x848160
// 00856bd5  8bf8                 mov edi, eax
// 00856bd7  8b17                 mov edx, dword ptr [edi]
// 00856bd9  8b4264               mov eax, dword ptr [edx + 0x64]
// 00856bdc  6a01                 push 1
// 00856bde  8bcf                 mov ecx, edi
// 00856be0  ffd0                 call eax
// 00856be2  6a08                 push 8
// 00856be4  8bcf                 mov ecx, edi
// 00856be6  e875f4f9ff           call 0x7f6060
// 00856beb  8b8b84000000         mov ecx, dword ptr [ebx + 0x84]
// 00856bf1  8b542428             mov edx, dword ptr [esp + 0x28]
// 00856bf5  8b442424             mov eax, dword ptr [esp + 0x24]
// 00856bf9  6a00                 push 0
// 00856bfb  6a00                 push 0
// 00856bfd  51                   push ecx
// 00856bfe  52                   push edx
// 00856bff  50                   push eax
// 00856c00  6a00                 push 0
// 00856c02  56                   push esi
// 00856c03  e838f9fbff           call 0x816540
// 00856c08  83c41c               add esp, 0x1c
// 00856c0b  8bce                 mov ecx, esi
// 00856c0d  e8cad1f9ff           call 0x7f3ddc
// 00856c12  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00856c16  64890d00000000       mov dword ptr fs:[0], ecx
// 00856c1d  59                   pop ecx
// 00856c1e  5f                   pop edi
// 00856c1f  5e                   pop esi
// 00856c20  5b                   pop ebx
// 00856c21  83c410               add esp, 0x10
// 00856c24  c20800               ret 8
// copied from an identical function in another client (function ?ContextMenu@CXTPTabClientWnd@@IAEXVCPoint@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPTabClientWnd.cpp