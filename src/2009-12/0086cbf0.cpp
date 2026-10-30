// roc 2009-12 0086cbf0  unit: CSelectionCaption  size: 549 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086cbf0
//
// 0086cbf0  6aff                 push -1
// 0086cbf2  687af89500           push 0x95f87a
// 0086cbf7  64a100000000         mov eax, dword ptr fs:[0]
// 0086cbfd  50                   push eax
// 0086cbfe  83ec34               sub esp, 0x34
// 0086cc01  53                   push ebx
// 0086cc02  56                   push esi
// 0086cc03  57                   push edi
// 0086cc04  a10052b600           mov eax, dword ptr [0xb65200]
// 0086cc09  33c4                 xor eax, esp
// 0086cc0b  50                   push eax
// 0086cc0c  8d442444             lea eax, [esp + 0x44]
// 0086cc10  64a300000000         mov dword ptr fs:[0], eax
// 0086cc16  8bf1                 mov esi, ecx
// 0086cc18  8b868c010000         mov eax, dword ptr [esi + 0x18c]
// 0086cc1e  33db                 xor ebx, ebx
// 0086cc20  3bc3                 cmp eax, ebx
// 0086cc22  7504                 jne 0x86cc28
// 0086cc24  33c0                 xor eax, eax
// 0086cc26  eb03                 jmp 0x86cc2b
// 0086cc28  8b4020               mov eax, dword ptr [eax + 0x20]
// 0086cc2b  50                   push eax
// 0086cc2c  ff1564ca9800         call dword ptr [0x98ca64]
// 0086cc32  85c0                 test eax, eax
// 0086cc34  0f85c3010000         jne 0x86cdfd
// 0086cc3a  8b868c010000         mov eax, dword ptr [esi + 0x18c]
// 0086cc40  3bc3                 cmp eax, ebx
// 0086cc42  7504                 jne 0x86cc48
// 0086cc44  33c0                 xor eax, eax
// 0086cc46  eb03                 jmp 0x86cc4b
// 0086cc48  8b4020               mov eax, dword ptr [eax + 0x20]
// 0086cc4b  8b3d84cc9800         mov edi, dword ptr [0x98cc84]
// 0086cc51  50                   push eax
// 0086cc52  ffd7                 call edi
// 0086cc54  85c0                 test eax, eax
// 0086cc56  0f858d000000         jne 0x86cce9
// 0086cc5c  68b0020000           push 0x2b0
// 0086cc61  e8fa6bf8ff           call 0x7f3860
// 0086cc66  83c404               add esp, 4
// 0086cc69  89442410             mov dword ptr [esp + 0x10], eax
// 0086cc6d  895c244c             mov dword ptr [esp + 0x4c], ebx
// 0086cc71  3bc3                 cmp eax, ebx
// 0086cc73  7409                 je 0x86cc7e
// 0086cc75  8bc8                 mov ecx, eax
// 0086cc77  e8b49f0700           call 0x8e6c30
// 0086cc7c  eb02                 jmp 0x86cc80
// 0086cc7e  33c0                 xor eax, eax
// 0086cc80  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 0086cc86  51                   push ecx
// 0086cc87  89868c010000         mov dword ptr [esi + 0x18c], eax
// 0086cc8d  895c2428             mov dword ptr [esp + 0x28], ebx
// 0086cc91  895c242c             mov dword ptr [esp + 0x2c], ebx
// 0086cc95  895c2430             mov dword ptr [esp + 0x30], ebx
// 0086cc99  895c2434             mov dword ptr [esp + 0x34], ebx
// 0086cc9d  8b10                 mov edx, dword ptr [eax]
// 0086cc9f  8b9244010000         mov edx, dword ptr [edx + 0x144]
// 0086cca5  56                   push esi
// 0086cca6  8d4c242c             lea ecx, [esp + 0x2c]
// 0086ccaa  51                   push ecx
// 0086ccab  8bc8                 mov ecx, eax
// 0086ccad  c7442458ffffffff     mov dword ptr [esp + 0x58], 0xffffffff
// 0086ccb5  ffd2                 call edx
// 0086ccb7  85c0                 test eax, eax
// 0086ccb9  752e                 jne 0x86cce9
// 0086ccbb  8b8e8c010000         mov ecx, dword ptr [esi + 0x18c]
// 0086ccc1  3bcb                 cmp ecx, ebx
// 0086ccc3  740f                 je 0x86ccd4
// 0086ccc5  8b01                 mov eax, dword ptr [ecx]
// 0086ccc7  8b5004               mov edx, dword ptr [eax + 4]
// 0086ccca  6a01                 push 1
// 0086cccc  ffd2                 call edx
// 0086ccce  899e8c010000         mov dword ptr [esi + 0x18c], ebx
// 0086ccd4  33c0                 xor eax, eax
// 0086ccd6  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0086ccda  64890d00000000       mov dword ptr fs:[0], ecx
// 0086cce1  59                   pop ecx
// 0086cce2  5f                   pop edi
// 0086cce3  5e                   pop esi
// 0086cce4  5b                   pop ebx
// 0086cce5  83c440               add esp, 0x40
// 0086cce8  c3                   ret 
// 0086cce9  8b8688000000         mov eax, dword ptr [esi + 0x88]
// 0086ccef  3bc3                 cmp eax, ebx
// 0086ccf1  7504                 jne 0x86ccf7
// 0086ccf3  33c0                 xor eax, eax
// 0086ccf5  eb03                 jmp 0x86ccfa
// 0086ccf7  8b4020               mov eax, dword ptr [eax + 0x20]
// 0086ccfa  50                   push eax
// 0086ccfb  ffd7                 call edi
// 0086ccfd  85c0                 test eax, eax
// 0086ccff  74d3                 je 0x86ccd4
// 0086cd01  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 0086cd07  3bc3                 cmp eax, ebx
// 0086cd09  7504                 jne 0x86cd0f
// 0086cd0b  33c0                 xor eax, eax
// 0086cd0d  eb03                 jmp 0x86cd12
// 0086cd0f  8b4020               mov eax, dword ptr [eax + 0x20]
// 0086cd12  50                   push eax
// 0086cd13  ffd7                 call edi
// 0086cd15  85c0                 test eax, eax
// 0086cd17  74bb                 je 0x86ccd4
// 0086cd19  8b8eac000000         mov ecx, dword ptr [esi + 0xac]
// 0086cd1f  8b86a8000000         mov eax, dword ptr [esi + 0xa8]
// 0086cd25  8b96b0000000         mov edx, dword ptr [esi + 0xb0]
// 0086cd2b  894c2418             mov dword ptr [esp + 0x18], ecx
// 0086cd2f  8d4c2414             lea ecx, [esp + 0x14]
// 0086cd33  89442414             mov dword ptr [esp + 0x14], eax
// 0086cd37  8b86b4000000         mov eax, dword ptr [esi + 0xb4]
// 0086cd3d  51                   push ecx
// 0086cd3e  8b8e88000000         mov ecx, dword ptr [esi + 0x88]
// 0086cd44  89542420             mov dword ptr [esp + 0x20], edx
// 0086cd48  89442424             mov dword ptr [esp + 0x24], eax
// 0086cd4c  e8a970f8ff           call 0x7f3dfa
// 0086cd51  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 0086cd57  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0086cd5a  8d542434             lea edx, [esp + 0x34]
// 0086cd5e  52                   push edx
// 0086cd5f  51                   push ecx
// 0086cd60  ff1550cc9800         call dword ptr [0x98cc50]
// 0086cd66  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0086cd6a  8bbec4000000         mov edi, dword ptr [esi + 0xc4]
// 0086cd70  8b542438             mov edx, dword ptr [esp + 0x38]
// 0086cd74  2bbebc000000         sub edi, dword ptr [esi + 0xbc]
// 0086cd7a  8bc1                 mov eax, ecx
// 0086cd7c  2bc2                 sub eax, edx
// 0086cd7e  3bc7                 cmp eax, edi
// 0086cd80  7f10                 jg 0x86cd92
// 0086cd82  8bbec4000000         mov edi, dword ptr [esi + 0xc4]
// 0086cd88  2bbebc000000         sub edi, dword ptr [esi + 0xbc]
// 0086cd8e  3bf8                 cmp edi, eax
// 0086cd90  7e14                 jle 0x86cda6
// 0086cd92  8b86bc000000         mov eax, dword ptr [esi + 0xbc]
// 0086cd98  2b86c4000000         sub eax, dword ptr [esi + 0xc4]
// 0086cd9e  2bc2                 sub eax, edx
// 0086cda0  03c1                 add eax, ecx
// 0086cda2  01442420             add dword ptr [esp + 0x20], eax
// 0086cda6  8b442418             mov eax, dword ptr [esp + 0x18]
// 0086cdaa  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0086cdae  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0086cdb2  6a01                 push 1
// 0086cdb4  2bc8                 sub ecx, eax
// 0086cdb6  51                   push ecx
// 0086cdb7  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0086cdbb  2bd1                 sub edx, ecx
// 0086cdbd  52                   push edx
// 0086cdbe  50                   push eax
// 0086cdbf  51                   push ecx
// 0086cdc0  8b8e8c010000         mov ecx, dword ptr [esi + 0x18c]
// 0086cdc6  e8676ef8ff           call 0x7f3c32
// 0086cdcb  8b8e8c010000         mov ecx, dword ptr [esi + 0x18c]
// 0086cdd1  6a05                 push 5
// 0086cdd3  e8706df8ff           call 0x7f3b48
// 0086cdd8  8b8e8c010000         mov ecx, dword ptr [esi + 0x18c]
// 0086cdde  8b01                 mov eax, dword ptr [ecx]
// 0086cde0  8b9048010000         mov edx, dword ptr [eax + 0x148]
// 0086cde6  ffd2                 call edx
// 0086cde8  8b86fc000000         mov eax, dword ptr [esi + 0xfc]
// 0086cdee  53                   push ebx
// 0086cdef  6a01                 push 1
// 0086cdf1  68f3000000           push 0xf3
// 0086cdf6  50                   push eax
// 0086cdf7  ff15c4cb9800         call dword ptr [0x98cbc4]
// 0086cdfd  b801000000           mov eax, 1
// 0086ce02  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0086ce06  64890d00000000       mov dword ptr fs:[0], ecx
// 0086ce0d  59                   pop ecx
// 0086ce0e  5f                   pop edi
// 0086ce0f  5e                   pop esi
// 0086ce10  5b                   pop ebx
// 0086ce11  83c440               add esp, 0x40
// 0086ce14  c3                   ret 
// copied from an identical function in another client (function ?ShowPopupWindow@CXTCaption@@UAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Controls/XTCaption.cpp