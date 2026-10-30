// roc 2009-12 00870be0  unit: CXTPHookManager::CHookSink  size: 303 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00870be0
//
// 00870be0  6aff                 push -1
// 00870be2  68f8fc9500           push 0x95fcf8
// 00870be7  64a100000000         mov eax, dword ptr fs:[0]
// 00870bed  50                   push eax
// 00870bee  83ec30               sub esp, 0x30
// 00870bf1  53                   push ebx
// 00870bf2  55                   push ebp
// 00870bf3  56                   push esi
// 00870bf4  57                   push edi
// 00870bf5  a10052b600           mov eax, dword ptr [0xb65200]
// 00870bfa  33c4                 xor eax, esp
// 00870bfc  50                   push eax
// 00870bfd  8d442444             lea eax, [esp + 0x44]
// 00870c01  64a300000000         mov dword ptr fs:[0], eax
// 00870c07  e898590b00           call 0x9265a4
// 00870c0c  8b6c2458             mov ebp, dword ptr [esp + 0x58]
// 00870c10  8bd8                 mov ebx, eax
// 00870c12  83c358               add ebx, 0x58
// 00870c15  b907000000           mov ecx, 7
// 00870c1a  8bf3                 mov esi, ebx
// 00870c1c  8d7c2428             lea edi, [esp + 0x28]
// 00870c20  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00870c22  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 00870c26  893b                 mov dword ptr [ebx], edi
// 00870c28  896b04               mov dword ptr [ebx + 4], ebp
// 00870c2b  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 00870c2f  894308               mov dword ptr [ebx + 8], eax
// 00870c32  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00870c36  57                   push edi
// 00870c37  894b0c               mov dword ptr [ebx + 0xc], ecx
// 00870c3a  e8a1fcffff           call 0x8708e0
// 00870c3f  8bc8                 mov ecx, eax
// 00870c41  e87afcffff           call 0x8708c0
// 00870c46  8bf0                 mov esi, eax
// 00870c48  85f6                 test esi, esi
// 00870c4a  0f84a9000000         je 0x870cf9
// 00870c50  8b5620               mov edx, dword ptr [esi + 0x20]
// 00870c53  52                   push edx
// 00870c54  8d4c241c             lea ecx, [esp + 0x1c]
// 00870c58  e8d32ef8ff           call 0x7f3b30
// 00870c5d  33c0                 xor eax, eax
// 00870c5f  8944244c             mov dword ptr [esp + 0x4c], eax
// 00870c63  89442414             mov dword ptr [esp + 0x14], eax
// 00870c67  8b4614               mov eax, dword ptr [esi + 0x14]
// 00870c6a  89442454             mov dword ptr [esp + 0x54], eax
// 00870c6e  81fd82000000         cmp ebp, 0x82
// 00870c74  750f                 jne 0x870c85
// 00870c76  57                   push edi
// 00870c77  e864fcffff           call 0x8708e0
// 00870c7c  8bc8                 mov ecx, eax
// 00870c7e  e88dfcffff           call 0x870910
// 00870c83  eb1c                 jmp 0x870ca1
// 00870c85  8d4c2414             lea ecx, [esp + 0x14]
// 00870c89  51                   push ecx
// 00870c8a  8d542464             lea edx, [esp + 0x64]
// 00870c8e  52                   push edx
// 00870c8f  8d442464             lea eax, [esp + 0x64]
// 00870c93  50                   push eax
// 00870c94  55                   push ebp
// 00870c95  57                   push edi
// 00870c96  8bce                 mov ecx, esi
// 00870c98  e873f8ffff           call 0x870510
// 00870c9d  85c0                 test eax, eax
// 00870c9f  751b                 jne 0x870cbc
// 00870ca1  8b442460             mov eax, dword ptr [esp + 0x60]
// 00870ca5  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00870ca9  8b542454             mov edx, dword ptr [esp + 0x54]
// 00870cad  50                   push eax
// 00870cae  51                   push ecx
// 00870caf  55                   push ebp
// 00870cb0  57                   push edi
// 00870cb1  52                   push edx
// 00870cb2  ff1584cb9800         call dword ptr [0x98cb84]
// 00870cb8  89442414             mov dword ptr [esp + 0x14], eax
// 00870cbc  b907000000           mov ecx, 7
// 00870cc1  8bfb                 mov edi, ebx
// 00870cc3  8d742428             lea esi, [esp + 0x28]
// 00870cc7  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00870cc9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00870ccd  8b742414             mov esi, dword ptr [esp + 0x14]
// 00870cd1  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 00870cd9  85c0                 test eax, eax
// 00870cdb  7407                 je 0x870ce4
// 00870cdd  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00870ce1  894804               mov dword ptr [eax + 4], ecx
// 00870ce4  837c242400           cmp dword ptr [esp + 0x24], 0
// 00870ce9  740c                 je 0x870cf7
// 00870ceb  8b542420             mov edx, dword ptr [esp + 0x20]
// 00870cef  52                   push edx
// 00870cf0  6a00                 push 0
// 00870cf2  e82d2ef8ff           call 0x7f3b24
// 00870cf7  8bc6                 mov eax, esi
// 00870cf9  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00870cfd  64890d00000000       mov dword ptr fs:[0], ecx
// 00870d04  59                   pop ecx
// 00870d05  5f                   pop edi
// 00870d06  5e                   pop esi
// 00870d07  5d                   pop ebp
// 00870d08  5b                   pop ebx
// 00870d09  83c43c               add esp, 0x3c
// 00870d0c  c21000               ret 0x10
// copied from an identical function in another client (function ?HookWndProc@CXTPHookManager@@CGJPAUHWND__@@IIJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPHookManager.cpp