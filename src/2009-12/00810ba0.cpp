// roc 2009-12 00810ba0  unit: CXTPImageManager  size: 403 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00810ba0
//
// 00810ba0  6aff                 push -1
// 00810ba2  6800a19500           push 0x95a100
// 00810ba7  64a100000000         mov eax, dword ptr fs:[0]
// 00810bad  50                   push eax
// 00810bae  83ec3c               sub esp, 0x3c
// 00810bb1  53                   push ebx
// 00810bb2  55                   push ebp
// 00810bb3  56                   push esi
// 00810bb4  57                   push edi
// 00810bb5  a10052b600           mov eax, dword ptr [0xb65200]
// 00810bba  33c4                 xor eax, esp
// 00810bbc  50                   push eax
// 00810bbd  8d442450             lea eax, [esp + 0x50]
// 00810bc1  64a300000000         mov dword ptr fs:[0], eax
// 00810bc7  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 00810bcb  8b542470             mov edx, dword ptr [esp + 0x70]
// 00810bcf  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 00810bd3  03d1                 add edx, ecx
// 00810bd5  33db                 xor ebx, ebx
// 00810bd7  3bc3                 cmp eax, ebx
// 00810bd9  52                   push edx
// 00810bda  8b542468             mov edx, dword ptr [esp + 0x68]
// 00810bde  7d0c                 jge 0x810bec
// 00810be0  52                   push edx
// 00810be1  51                   push ecx
// 00810be2  03d0                 add edx, eax
// 00810be4  52                   push edx
// 00810be5  8d44242c             lea eax, [esp + 0x2c]
// 00810be9  50                   push eax
// 00810bea  eb0a                 jmp 0x810bf6
// 00810bec  03c2                 add eax, edx
// 00810bee  50                   push eax
// 00810bef  51                   push ecx
// 00810bf0  52                   push edx
// 00810bf1  8d4c242c             lea ecx, [esp + 0x2c]
// 00810bf5  51                   push ecx
// 00810bf6  ff1538ca9800         call dword ptr [0x98ca38]
// 00810bfc  8b742428             mov esi, dword ptr [esp + 0x28]
// 00810c00  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00810c04  2b742420             sub esi, dword ptr [esp + 0x20]
// 00810c08  2b7c241c             sub edi, dword ptr [esp + 0x1c]
// 00810c0c  895c2418             mov dword ptr [esp + 0x18], ebx
// 00810c10  c744241418229a00     mov dword ptr [esp + 0x14], 0x9a2218
// 00810c18  8b6c2460             mov ebp, dword ptr [esp + 0x60]
// 00810c1c  895c2458             mov dword ptr [esp + 0x58], ebx
// 00810c20  3beb                 cmp ebp, ebx
// 00810c22  7504                 jne 0x810c28
// 00810c24  33c0                 xor eax, eax
// 00810c26  eb03                 jmp 0x810c2b
// 00810c28  8b4504               mov eax, dword ptr [ebp + 4]
// 00810c2b  8d542460             lea edx, [esp + 0x60]
// 00810c2f  52                   push edx
// 00810c30  56                   push esi
// 00810c31  57                   push edi
// 00810c32  50                   push eax
// 00810c33  e8087fffff           call 0x808b40
// 00810c38  83c410               add esp, 0x10
// 00810c3b  50                   push eax
// 00810c3c  8d4c2418             lea ecx, [esp + 0x18]
// 00810c40  e8e531feff           call 0x7f3e2a
// 00810c45  8d442414             lea eax, [esp + 0x14]
// 00810c49  50                   push eax
// 00810c4a  55                   push ebp
// 00810c4b  8d4c2444             lea ecx, [esp + 0x44]
// 00810c4f  e82cac0300           call 0x84b880
// 00810c54  68ff00ff00           push 0xff00ff
// 00810c59  8d4c2430             lea ecx, [esp + 0x30]
// 00810c5d  51                   push ecx
// 00810c5e  8d4c2444             lea ecx, [esp + 0x44]
// 00810c62  c644246001           mov byte ptr [esp + 0x60], 1
// 00810c67  895c2434             mov dword ptr [esp + 0x34], ebx
// 00810c6b  895c2438             mov dword ptr [esp + 0x38], ebx
// 00810c6f  897c243c             mov dword ptr [esp + 0x3c], edi
// 00810c73  89742440             mov dword ptr [esp + 0x40], esi
// 00810c77  e88239feff           call 0x7f45fe
// 00810c7c  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 00810c80  3bc3                 cmp eax, ebx
// 00810c82  7e04                 jle 0x810c88
// 00810c84  33c9                 xor ecx, ecx
// 00810c86  eb04                 jmp 0x810c8c
// 00810c88  8bc8                 mov ecx, eax
// 00810c8a  f7d9                 neg ecx
// 00810c8c  8b542470             mov edx, dword ptr [esp + 0x70]
// 00810c90  6a03                 push 3
// 00810c92  53                   push ebx
// 00810c93  53                   push ebx
// 00810c94  52                   push edx
// 00810c95  50                   push eax
// 00810c96  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 00810c9d  50                   push eax
// 00810c9e  53                   push ebx
// 00810c9f  51                   push ecx
// 00810ca0  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00810ca4  51                   push ecx
// 00810ca5  ff1514cb9800         call dword ptr [0x98cb14]
// 00810cab  0faff7               imul esi, edi
// 00810cae  3bf3                 cmp esi, ebx
// 00810cb0  7e20                 jle 0x810cd2
// 00810cb2  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00810cb6  8b01                 mov eax, dword ptr [ecx]
// 00810cb8  3dff00ff00           cmp eax, 0xff00ff
// 00810cbd  7504                 jne 0x810cc3
// 00810cbf  8919                 mov dword ptr [ecx], ebx
// 00810cc1  eb07                 jmp 0x810cca
// 00810cc3  0d000000ff           or eax, 0xff000000
// 00810cc8  8901                 mov dword ptr [ecx], eax
// 00810cca  83c104               add ecx, 4
// 00810ccd  83ee01               sub esi, 1
// 00810cd0  75e4                 jne 0x810cb6
// 00810cd2  3beb                 cmp ebp, ebx
// 00810cd4  7504                 jne 0x810cda
// 00810cd6  33c0                 xor eax, eax
// 00810cd8  eb03                 jmp 0x810cdd
// 00810cda  8b4504               mov eax, dword ptr [ebp + 4]
// 00810cdd  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00810ce1  8d54242c             lea edx, [esp + 0x2c]
// 00810ce5  52                   push edx
// 00810ce6  51                   push ecx
// 00810ce7  8d542424             lea edx, [esp + 0x24]
// 00810ceb  52                   push edx
// 00810cec  50                   push eax
// 00810ced  e8bef7ffff           call 0x8104b0
// 00810cf2  8bc8                 mov ecx, eax
// 00810cf4  e80793ffff           call 0x80a000
// 00810cf9  8d4c243c             lea ecx, [esp + 0x3c]
// 00810cfd  885c2458             mov byte ptr [esp + 0x58], bl
// 00810d01  e88aac0300           call 0x84b990
// 00810d06  8d4c2414             lea ecx, [esp + 0x14]
// 00810d0a  c7442458ffffffff     mov dword ptr [esp + 0x58], 0xffffffff
// 00810d12  c744241418229a00     mov dword ptr [esp + 0x14], 0x9a2218
// 00810d1a  e811e5bfff           call 0x40f230
// 00810d1f  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00810d23  64890d00000000       mov dword ptr fs:[0], ecx
// 00810d2a  59                   pop ecx
// 00810d2b  5f                   pop edi
// 00810d2c  5e                   pop esi
// 00810d2d  5d                   pop ebp
// 00810d2e  5b                   pop ebx
// 00810d2f  83c448               add esp, 0x48
// 00810d32  c3                   ret 
// copied from an identical function in another client (function ?DrawIconComposited@CXTPImageManagerIcon@@SAXPAVCDC@@VCPoint@@VCSize@@PAUHICON__@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp