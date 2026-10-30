// roc 2009-12 008e8cb0  unit: CXTPTabPaintManager::CColorSetWinXP  size: 488 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e8cb0
//
// 008e8cb0  53                   push ebx
// 008e8cb1  55                   push ebp
// 008e8cb2  56                   push esi
// 008e8cb3  57                   push edi
// 008e8cb4  8bf9                 mov edi, ecx
// 008e8cb6  8daf08020000         lea ebp, [edi + 0x208]
// 008e8cbc  8bcd                 mov ecx, ebp
// 008e8cbe  e8fd2ef8ff           call 0x86bbc0
// 008e8cc3  85c0                 test eax, eax
// 008e8cc5  7538                 jne 0x8e8cff
// 008e8cc7  8b442428             mov eax, dword ptr [esp + 0x28]
// 008e8ccb  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008e8ccf  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008e8cd3  50                   push eax
// 008e8cd4  83ec10               sub esp, 0x10
// 008e8cd7  8bc4                 mov eax, esp
// 008e8cd9  8908                 mov dword ptr [eax], ecx
// 008e8cdb  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008e8cdf  895004               mov dword ptr [eax + 4], edx
// 008e8ce2  8b542438             mov edx, dword ptr [esp + 0x38]
// 008e8ce6  894808               mov dword ptr [eax + 8], ecx
// 008e8ce9  89500c               mov dword ptr [eax + 0xc], edx
// 008e8cec  8b442428             mov eax, dword ptr [esp + 0x28]
// 008e8cf0  50                   push eax
// 008e8cf1  8bcf                 mov ecx, edi
// 008e8cf3  e878eaffff           call 0x8e7770
// 008e8cf8  5f                   pop edi
// 008e8cf9  5e                   pop esi
// 008e8cfa  5d                   pop ebp
// 008e8cfb  5b                   pop ebx
// 008e8cfc  c21800               ret 0x18
// 008e8cff  8b742428             mov esi, dword ptr [esp + 0x28]
// 008e8d03  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 008e8d06  397104               cmp dword ptr [ecx + 4], esi
// 008e8d09  7522                 jne 0x8e8d2d
// 008e8d0b  8b11                 mov edx, dword ptr [ecx]
// 008e8d0d  8b4248               mov eax, dword ptr [edx + 0x48]
// 008e8d10  ffd0                 call eax
// 008e8d12  83e800               sub eax, 0
// 008e8d15  bb01000000           mov ebx, 1
// 008e8d1a  740a                 je 0x8e8d26
// 008e8d1c  2bc3                 sub eax, ebx
// 008e8d1e  7512                 jne 0x8e8d32
// 008e8d20  015c2420             add dword ptr [esp + 0x20], ebx
// 008e8d24  eb0c                 jmp 0x8e8d32
// 008e8d26  8344242402           add dword ptr [esp + 0x24], 2
// 008e8d2b  eb05                 jmp 0x8e8d32
// 008e8d2d  bb01000000           mov ebx, 1
// 008e8d32  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 008e8d35  8b11                 mov edx, dword ptr [ecx]
// 008e8d37  8b4248               mov eax, dword ptr [edx + 0x48]
// 008e8d3a  ffd0                 call eax
// 008e8d3c  83f803               cmp eax, 3
// 008e8d3f  0f8738010000         ja 0x8e8e7d
// 008e8d45  ff2485888e8e00       jmp dword ptr [eax*4 + 0x8e8e88]
// 008e8d4c  295c2418             sub dword ptr [esp + 0x18], ebx
// 008e8d50  295c241c             sub dword ptr [esp + 0x1c], ebx
// 008e8d54  015c2420             add dword ptr [esp + 0x20], ebx
// 008e8d58  8b4660               mov eax, dword ptr [esi + 0x60]
// 008e8d5b  8b4804               mov ecx, dword ptr [eax + 4]
// 008e8d5e  3bce                 cmp ecx, esi
// 008e8d60  7507                 jne 0x8e8d69
// 008e8d62  bf03000000           mov edi, 3
// 008e8d67  eb0b                 jmp 0x8e8d74
// 008e8d69  33d2                 xor edx, edx
// 008e8d6b  397008               cmp dword ptr [eax + 8], esi
// 008e8d6e  0f94c2               sete dl
// 008e8d71  42                   inc edx
// 008e8d72  8bfa                 mov edi, edx
// 008e8d74  8b562c               mov edx, dword ptr [esi + 0x2c]
// 008e8d77  85d2                 test edx, edx
// 008e8d79  7505                 jne 0x8e8d80
// 008e8d7b  8d4a06               lea ecx, [edx + 6]
// 008e8d7e  eb17                 jmp 0x8e8d97
// 008e8d80  8b405c               mov eax, dword ptr [eax + 0x5c]
// 008e8d83  2bc3                 sub eax, ebx
// 008e8d85  3bd0                 cmp edx, eax
// 008e8d87  7509                 jne 0x8e8d92
// 008e8d89  3bce                 cmp ecx, esi
// 008e8d8b  b907000000           mov ecx, 7
// 008e8d90  7505                 jne 0x8e8d97
// 008e8d92  b905000000           mov ecx, 5
// 008e8d97  8b442414             mov eax, dword ptr [esp + 0x14]
// 008e8d9b  85c0                 test eax, eax
// 008e8d9d  7403                 je 0x8e8da2
// 008e8d9f  8b4004               mov eax, dword ptr [eax + 4]
// 008e8da2  6a00                 push 0
// 008e8da4  8d54241c             lea edx, [esp + 0x1c]
// 008e8da8  52                   push edx
// 008e8da9  57                   push edi
// 008e8daa  51                   push ecx
// 008e8dab  50                   push eax
// 008e8dac  8bcd                 mov ecx, ebp
// 008e8dae  e88d2af8ff           call 0x86b840
// 008e8db3  83c8ff               or eax, 0xffffffff
// 008e8db6  5f                   pop edi
// 008e8db7  5e                   pop esi
// 008e8db8  5d                   pop ebp
// 008e8db9  5b                   pop ebx
// 008e8dba  c21800               ret 0x18
// 008e8dbd  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008e8dc1  8b542420             mov edx, dword ptr [esp + 0x20]
// 008e8dc5  2bcb                 sub ecx, ebx
// 008e8dc7  03d3                 add edx, ebx
// 008e8dc9  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 008e8dcd  68d06d8e00           push 0x8e6dd0
// 008e8dd2  6a00                 push 0
// 008e8dd4  56                   push esi
// 008e8dd5  83c302               add ebx, 2
// 008e8dd8  83ec10               sub esp, 0x10
// 008e8ddb  8bc4                 mov eax, esp
// 008e8ddd  8908                 mov dword ptr [eax], ecx
// 008e8ddf  894c2434             mov dword ptr [esp + 0x34], ecx
// 008e8de3  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008e8de7  894804               mov dword ptr [eax + 4], ecx
// 008e8dea  895008               mov dword ptr [eax + 8], edx
// 008e8ded  8954243c             mov dword ptr [esp + 0x3c], edx
// 008e8df1  8b542430             mov edx, dword ptr [esp + 0x30]
// 008e8df5  89580c               mov dword ptr [eax + 0xc], ebx
// 008e8df8  52                   push edx
// 008e8df9  eb77                 jmp 0x8e8e72
// 008e8dfb  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008e8dff  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008e8e03  2bcb                 sub ecx, ebx
// 008e8e05  2bd3                 sub edx, ebx
// 008e8e07  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 008e8e0b  68906e8e00           push 0x8e6e90
// 008e8e10  6a01                 push 1
// 008e8e12  56                   push esi
// 008e8e13  43                   inc ebx
// 008e8e14  83ec10               sub esp, 0x10
// 008e8e17  8bc4                 mov eax, esp
// 008e8e19  8908                 mov dword ptr [eax], ecx
// 008e8e1b  895004               mov dword ptr [eax + 4], edx
// 008e8e1e  894c2434             mov dword ptr [esp + 0x34], ecx
// 008e8e22  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008e8e26  89542438             mov dword ptr [esp + 0x38], edx
// 008e8e2a  8b542430             mov edx, dword ptr [esp + 0x30]
// 008e8e2e  894808               mov dword ptr [eax + 8], ecx
// 008e8e31  89580c               mov dword ptr [eax + 0xc], ebx
// 008e8e34  52                   push edx
// 008e8e35  eb3b                 jmp 0x8e8e72
// 008e8e37  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008e8e3b  8b542420             mov edx, dword ptr [esp + 0x20]
// 008e8e3f  68306e8e00           push 0x8e6e30
// 008e8e44  2bcb                 sub ecx, ebx
// 008e8e46  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 008e8e4a  6a01                 push 1
// 008e8e4c  56                   push esi
// 008e8e4d  8b742424             mov esi, dword ptr [esp + 0x24]
// 008e8e51  83c202               add edx, 2
// 008e8e54  43                   inc ebx
// 008e8e55  83ec10               sub esp, 0x10
// 008e8e58  8bc4                 mov eax, esp
// 008e8e5a  8930                 mov dword ptr [eax], esi
// 008e8e5c  894804               mov dword ptr [eax + 4], ecx
// 008e8e5f  895008               mov dword ptr [eax + 8], edx
// 008e8e62  89580c               mov dword ptr [eax + 0xc], ebx
// 008e8e65  8b442430             mov eax, dword ptr [esp + 0x30]
// 008e8e69  894c2438             mov dword ptr [esp + 0x38], ecx
// 008e8e6d  8954243c             mov dword ptr [esp + 0x3c], edx
// 008e8e71  50                   push eax
// 008e8e72  8bcf                 mov ecx, edi
// 008e8e74  895c2444             mov dword ptr [esp + 0x44], ebx
// 008e8e78  e8d3fbffff           call 0x8e8a50
// 008e8e7d  5f                   pop edi
// 008e8e7e  5e                   pop esi
// 008e8e7f  5d                   pop ebp
// 008e8e80  83c8ff               or eax, 0xffffffff
// 008e8e83  5b                   pop ebx
// 008e8e84  c21800               ret 0x18
// 008e8e87  90                   nop 
// 008e8e88  4c                   dec esp
// 008e8e89  8d8e00fb8d8e         lea ecx, [esi - 0x71720500]
// 008e8e8f  00bd8d8e0037         add byte ptr [ebp + 0x37008e8d], bh
// copied from an identical function in another client (function ?FillPropertyButton@CColorSetWinXP@CXTPTabPaintManager@@UAEKPAVCDC@@VCRect@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\TabManager\XTPTabPaintManagerColors.cpp