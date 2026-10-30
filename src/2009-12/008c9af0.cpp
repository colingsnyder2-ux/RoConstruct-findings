// roc 2009-12 008c9af0  unit: CXTPPropertyGridPaintManager  size: 330 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c9af0
//
// 008c9af0  6aff                 push -1
// 008c9af2  6861499600           push 0x964961
// 008c9af7  64a100000000         mov eax, dword ptr fs:[0]
// 008c9afd  50                   push eax
// 008c9afe  83ec48               sub esp, 0x48
// 008c9b01  a10052b600           mov eax, dword ptr [0xb65200]
// 008c9b06  33c4                 xor eax, esp
// 008c9b08  89442444             mov dword ptr [esp + 0x44], eax
// 008c9b0c  53                   push ebx
// 008c9b0d  55                   push ebp
// 008c9b0e  56                   push esi
// 008c9b0f  57                   push edi
// 008c9b10  a10052b600           mov eax, dword ptr [0xb65200]
// 008c9b15  33c4                 xor eax, esp
// 008c9b17  50                   push eax
// 008c9b18  8d44245c             lea eax, [esp + 0x5c]
// 008c9b1c  64a300000000         mov dword ptr fs:[0], eax
// 008c9b22  8bf1                 mov esi, ecx
// 008c9b24  6a01                 push 1
// 008c9b26  8d4e08               lea ecx, [esi + 8]
// 008c9b29  8974241c             mov dword ptr [esp + 0x1c], esi
// 008c9b2d  c706e4a0a000         mov dword ptr [esi], 0xa0a0e4
// 008c9b33  e8081cfaff           call 0x86b740
// 008c9b38  33db                 xor ebx, ebx
// 008c9b3a  6a01                 push 1
// 008c9b3c  8d4e14               lea ecx, [esi + 0x14]
// 008c9b3f  895c2468             mov dword ptr [esp + 0x68], ebx
// 008c9b43  e8f81bfaff           call 0x86b740
// 008c9b48  6a01                 push 1
// 008c9b4a  8d4e20               lea ecx, [esi + 0x20]
// 008c9b4d  c644246801           mov byte ptr [esp + 0x68], 1
// 008c9b52  e8e91bfaff           call 0x86b740
// 008c9b57  8d4e30               lea ecx, [esi + 0x30]
// 008c9b5a  c644246402           mov byte ptr [esp + 0x64], 2
// 008c9b5f  e8ac52f6ff           call 0x82ee10
// 008c9b64  8d4e3c               lea ecx, [esi + 0x3c]
// 008c9b67  e8a452f6ff           call 0x82ee10
// 008c9b6c  8d4e48               lea ecx, [esi + 0x48]
// 008c9b6f  e89c52f6ff           call 0x82ee10
// 008c9b74  8d4e54               lea ecx, [esi + 0x54]
// 008c9b77  e89452f6ff           call 0x82ee10
// 008c9b7c  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 008c9b80  8d7e64               lea edi, [esi + 0x64]
// 008c9b83  894660               mov dword ptr [esi + 0x60], eax
// 008c9b86  895f04               mov dword ptr [edi + 4], ebx
// 008c9b89  c70798019b00         mov dword ptr [edi], 0x9b0198
// 008c9b8f  8d6e6c               lea ebp, [esi + 0x6c]
// 008c9b92  895d04               mov dword ptr [ebp + 4], ebx
// 008c9b95  c7450098019b00       mov dword ptr [ebp], 0x9b0198
// 008c9b9c  53                   push ebx
// 008c9b9d  8d4c2420             lea ecx, [esp + 0x20]
// 008c9ba1  51                   push ecx
// 008c9ba2  6a3c                 push 0x3c
// 008c9ba4  6a1f                 push 0x1f
// 008c9ba6  c644247404           mov byte ptr [esp + 0x74], 4
// 008c9bab  895e04               mov dword ptr [esi + 4], ebx
// 008c9bae  ff1500cc9800         call dword ptr [0x98cc00]
// 008c9bb4  8d54241c             lea edx, [esp + 0x1c]
// 008c9bb8  52                   push edx
// 008c9bb9  c744243090010000     mov dword ptr [esp + 0x30], 0x190
// 008c9bc1  885c2434             mov byte ptr [esp + 0x34], bl
// 008c9bc5  ff1528b19800         call dword ptr [0x98b128]
// 008c9bcb  50                   push eax
// 008c9bcc  8bcd                 mov ecx, ebp
// 008c9bce  e857a2f2ff           call 0x7f3e2a
// 008c9bd3  8d44241c             lea eax, [esp + 0x1c]
// 008c9bd7  50                   push eax
// 008c9bd8  c644243501           mov byte ptr [esp + 0x35], 1
// 008c9bdd  ff1528b19800         call dword ptr [0x98b128]
// 008c9be3  50                   push eax
// 008c9be4  8bcf                 mov ecx, edi
// 008c9be6  e83fa2f2ff           call 0x7f3e2a
// 008c9beb  68a0000000           push 0xa0
// 008c9bf0  e86b9cf2ff           call 0x7f3860
// 008c9bf5  83c404               add esp, 4
// 008c9bf8  89442414             mov dword ptr [esp + 0x14], eax
// 008c9bfc  c644246405           mov byte ptr [esp + 0x64], 5
// 008c9c01  3bc3                 cmp eax, ebx
// 008c9c03  740a                 je 0x8c9c0f
// 008c9c05  56                   push esi
// 008c9c06  8bc8                 mov ecx, eax
// 008c9c08  e813fdffff           call 0x8c9920
// 008c9c0d  eb02                 jmp 0x8c9c11
// 008c9c0f  33c0                 xor eax, eax
// 008c9c11  894674               mov dword ptr [esi + 0x74], eax
// 008c9c14  895e2c               mov dword ptr [esi + 0x2c], ebx
// 008c9c17  8bc6                 mov eax, esi
// 008c9c19  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008c9c1d  64890d00000000       mov dword ptr fs:[0], ecx
// 008c9c24  59                   pop ecx
// 008c9c25  5f                   pop edi
// 008c9c26  5e                   pop esi
// 008c9c27  5d                   pop ebp
// 008c9c28  5b                   pop ebx
// 008c9c29  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008c9c2d  33cc                 xor ecx, esp
// 008c9c2f  e866b7f2ff           call 0x7f539a
// 008c9c34  83c454               add esp, 0x54
// 008c9c37  c20400               ret 4
// copied from an identical function in another client (function ??0CXTPPropertyGridPaintManager@@QAE@PAVCXTPPropertyGrid@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridPaintManager.cpp