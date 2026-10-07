// roc 2011-06 0052e520  unit: RBX::Network::ProfiledRakPeer  size: 239 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0052e520
//
// 0052e520  53                   push ebx
// 0052e521  55                   push ebp
// 0052e522  56                   push esi
// 0052e523  8b742414             mov esi, dword ptr [esp + 0x14]
// 0052e527  8be9                 mov ebp, ecx
// 0052e529  837d0800             cmp dword ptr [ebp + 8], 0
// 0052e52d  57                   push edi
// 0052e52e  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0052e532  7e65                 jle 0x52e599
// 0052e534  8b5d00               mov ebx, dword ptr [ebp]
// 0052e537  8b03                 mov eax, dword ptr [ebx]
// 0052e539  56                   push esi
// 0052e53a  57                   push edi
// 0052e53b  50                   push eax
// 0052e53c  ff158ceec200         call dword ptr [0xc2ee8c]
// 0052e542  8b4b08               mov ecx, dword ptr [ebx + 8]
// 0052e545  56                   push esi
// 0052e546  57                   push edi
// 0052e547  51                   push ecx
// 0052e548  ff158ceec200         call dword ptr [0xc2ee8c]
// 0052e54e  8bc3                 mov eax, ebx
// 0052e550  8b5b0c               mov ebx, dword ptr [ebx + 0xc]
// 0052e553  83c418               add esp, 0x18
// 0052e556  3b5d00               cmp ebx, dword ptr [ebp]
// 0052e559  7432                 je 0x52e58d
// 0052e55b  eb03                 jmp 0x52e560
// 0052e55d  8d4900               lea ecx, [ecx]
// 0052e560  56                   push esi
// 0052e561  57                   push edi
// 0052e562  50                   push eax
// 0052e563  ff158ceec200         call dword ptr [0xc2ee8c]
// 0052e569  8b13                 mov edx, dword ptr [ebx]
// 0052e56b  56                   push esi
// 0052e56c  57                   push edi
// 0052e56d  52                   push edx
// 0052e56e  ff158ceec200         call dword ptr [0xc2ee8c]
// 0052e574  8b4308               mov eax, dword ptr [ebx + 8]
// 0052e577  56                   push esi
// 0052e578  57                   push edi
// 0052e579  50                   push eax
// 0052e57a  ff158ceec200         call dword ptr [0xc2ee8c]
// 0052e580  8bc3                 mov eax, ebx
// 0052e582  8b5b0c               mov ebx, dword ptr [ebx + 0xc]
// 0052e585  83c424               add esp, 0x24
// 0052e588  3b5d00               cmp ebx, dword ptr [ebp]
// 0052e58b  75d3                 jne 0x52e560
// 0052e58d  56                   push esi
// 0052e58e  57                   push edi
// 0052e58f  50                   push eax
// 0052e590  ff158ceec200         call dword ptr [0xc2ee8c]
// 0052e596  83c40c               add esp, 0xc
// 0052e599  33c0                 xor eax, eax
// 0052e59b  39450c               cmp dword ptr [ebp + 0xc], eax
// 0052e59e  7e62                 jle 0x52e602
// 0052e5a0  8b5d04               mov ebx, dword ptr [ebp + 4]
// 0052e5a3  8b0b                 mov ecx, dword ptr [ebx]
// 0052e5a5  56                   push esi
// 0052e5a6  57                   push edi
// 0052e5a7  51                   push ecx
// 0052e5a8  ff158ceec200         call dword ptr [0xc2ee8c]
// 0052e5ae  8b5308               mov edx, dword ptr [ebx + 8]
// 0052e5b1  56                   push esi
// 0052e5b2  57                   push edi
// 0052e5b3  52                   push edx
// 0052e5b4  ff158ceec200         call dword ptr [0xc2ee8c]
// 0052e5ba  8bc3                 mov eax, ebx
// 0052e5bc  8b5b0c               mov ebx, dword ptr [ebx + 0xc]
// 0052e5bf  83c418               add esp, 0x18
// 0052e5c2  3b5d04               cmp ebx, dword ptr [ebp + 4]
// 0052e5c5  742d                 je 0x52e5f4
// 0052e5c7  56                   push esi
// 0052e5c8  57                   push edi
// 0052e5c9  50                   push eax
// 0052e5ca  ff158ceec200         call dword ptr [0xc2ee8c]
// 0052e5d0  8b03                 mov eax, dword ptr [ebx]
// 0052e5d2  56                   push esi
// 0052e5d3  57                   push edi
// 0052e5d4  50                   push eax
// 0052e5d5  ff158ceec200         call dword ptr [0xc2ee8c]
// 0052e5db  8b4b08               mov ecx, dword ptr [ebx + 8]
// 0052e5de  56                   push esi
// 0052e5df  57                   push edi
// 0052e5e0  51                   push ecx
// 0052e5e1  ff158ceec200         call dword ptr [0xc2ee8c]
// 0052e5e7  8bc3                 mov eax, ebx
// 0052e5e9  8b5b0c               mov ebx, dword ptr [ebx + 0xc]
// 0052e5ec  83c424               add esp, 0x24
// 0052e5ef  3b5d04               cmp ebx, dword ptr [ebp + 4]
// 0052e5f2  75d3                 jne 0x52e5c7
// 0052e5f4  56                   push esi
// 0052e5f5  57                   push edi
// 0052e5f6  50                   push eax
// 0052e5f7  ff158ceec200         call dword ptr [0xc2ee8c]
// 0052e5fd  83c40c               add esp, 0xc
// 0052e600  33c0                 xor eax, eax
// 0052e602  5f                   pop edi
// 0052e603  5e                   pop esi
// 0052e604  89450c               mov dword ptr [ebp + 0xc], eax
// 0052e607  894508               mov dword ptr [ebp + 8], eax
// 0052e60a  5d                   pop ebp
// 0052e60b  5b                   pop ebx
// 0052e60c  c20800               ret 8
// library rbx2016-raknet/DS_BytePool.cpp (function ?Clear@?$MemoryPool@$$BY0IA@E@DataStructures@@QAEXPBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet DS_BytePool.cpp
