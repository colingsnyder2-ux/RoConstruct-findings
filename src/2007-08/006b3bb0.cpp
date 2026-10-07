// roc 2007-08 006b3bb0  unit: CXTPControlGalleryPaintManager  size: 361 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006b3bb0
//
// 006b3bb0  53                   push ebx
// 006b3bb1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 006b3bb5  56                   push esi
// 006b3bb6  57                   push edi
// 006b3bb7  33ff                 xor edi, edi
// 006b3bb9  3bdf                 cmp ebx, edi
// 006b3bbb  8bf1                 mov esi, ecx
// 006b3bbd  7d05                 jge 0x6b3bc4
// 006b3bbf  e85cc3f7ff           call 0x62ff20
// 006b3bc4  8b442414             mov eax, dword ptr [esp + 0x14]
// 006b3bc8  3bc7                 cmp eax, edi
// 006b3bca  7c03                 jl 0x6b3bcf
// 006b3bcc  894610               mov dword ptr [esi + 0x10], eax
// 006b3bcf  3bdf                 cmp ebx, edi
// 006b3bd1  751f                 jne 0x6b3bf2
// 006b3bd3  8b4604               mov eax, dword ptr [esi + 4]
// 006b3bd6  3bc7                 cmp eax, edi
// 006b3bd8  740c                 je 0x6b3be6
// 006b3bda  50                   push eax
// 006b3bdb  e846c3f7ff           call 0x62ff26
// 006b3be0  83c404               add esp, 4
// 006b3be3  897e04               mov dword ptr [esi + 4], edi
// 006b3be6  897e0c               mov dword ptr [esi + 0xc], edi
// 006b3be9  897e08               mov dword ptr [esi + 8], edi
// 006b3bec  5f                   pop edi
// 006b3bed  5e                   pop esi
// 006b3bee  5b                   pop ebx
// 006b3bef  c20800               ret 8
// 006b3bf2  8b5604               mov edx, dword ptr [esi + 4]
// 006b3bf5  3bd7                 cmp edx, edi
// 006b3bf7  55                   push ebp
// 006b3bf8  7535                 jne 0x6b3c2f
// 006b3bfa  8b6e10               mov ebp, dword ptr [esi + 0x10]
// 006b3bfd  3bdd                 cmp ebx, ebp
// 006b3bff  7e02                 jle 0x6b3c03
// 006b3c01  8beb                 mov ebp, ebx
// 006b3c03  8d7c6d00             lea edi, [ebp + ebp*2]
// 006b3c07  03ff                 add edi, edi
// 006b3c09  03ff                 add edi, edi
// 006b3c0b  03ff                 add edi, edi
// 006b3c0d  57                   push edi
// 006b3c0e  e81fc3f7ff           call 0x62ff32
// 006b3c13  57                   push edi
// 006b3c14  6a00                 push 0
// 006b3c16  50                   push eax
// 006b3c17  894604               mov dword ptr [esi + 4], eax
// 006b3c1a  e86dcff7ff           call 0x630b8c
// 006b3c1f  83c410               add esp, 0x10
// 006b3c22  896e0c               mov dword ptr [esi + 0xc], ebp
// 006b3c25  5d                   pop ebp
// 006b3c26  5f                   pop edi
// 006b3c27  895e08               mov dword ptr [esi + 8], ebx
// 006b3c2a  5e                   pop esi
// 006b3c2b  5b                   pop ebx
// 006b3c2c  c20800               ret 8
// 006b3c2f  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 006b3c32  3bd9                 cmp ebx, ecx
// 006b3c34  7f33                 jg 0x6b3c69
// 006b3c36  8b4e08               mov ecx, dword ptr [esi + 8]
// 006b3c39  3bd9                 cmp ebx, ecx
// 006b3c3b  0f8ece000000         jle 0x6b3d0f
// 006b3c41  8bc3                 mov eax, ebx
// 006b3c43  2bc1                 sub eax, ecx
// 006b3c45  8d0440               lea eax, [eax + eax*2]
// 006b3c48  03c0                 add eax, eax
// 006b3c4a  03c0                 add eax, eax
// 006b3c4c  03c0                 add eax, eax
// 006b3c4e  50                   push eax
// 006b3c4f  8d0c49               lea ecx, [ecx + ecx*2]
// 006b3c52  8d14ca               lea edx, [edx + ecx*8]
// 006b3c55  57                   push edi
// 006b3c56  52                   push edx
// 006b3c57  e830cff7ff           call 0x630b8c
// 006b3c5c  83c40c               add esp, 0xc
// 006b3c5f  5d                   pop ebp
// 006b3c60  5f                   pop edi
// 006b3c61  895e08               mov dword ptr [esi + 8], ebx
// 006b3c64  5e                   pop esi
// 006b3c65  5b                   pop ebx
// 006b3c66  c20800               ret 8
// 006b3c69  8b4610               mov eax, dword ptr [esi + 0x10]
// 006b3c6c  3bc7                 cmp eax, edi
// 006b3c6e  7524                 jne 0x6b3c94
// 006b3c70  8b4608               mov eax, dword ptr [esi + 8]
// 006b3c73  99                   cdq 
// 006b3c74  83e207               and edx, 7
// 006b3c77  03c2                 add eax, edx
// 006b3c79  c1f803               sar eax, 3
// 006b3c7c  83f804               cmp eax, 4
// 006b3c7f  7d07                 jge 0x6b3c88
// 006b3c81  b804000000           mov eax, 4
// 006b3c86  eb0c                 jmp 0x6b3c94
// 006b3c88  3d00040000           cmp eax, 0x400
// 006b3c8d  7e05                 jle 0x6b3c94
// 006b3c8f  b800040000           mov eax, 0x400
// 006b3c94  8d3c01               lea edi, [ecx + eax]
// 006b3c97  3bdf                 cmp ebx, edi
// 006b3c99  7d06                 jge 0x6b3ca1
// 006b3c9b  897c2414             mov dword ptr [esp + 0x14], edi
// 006b3c9f  eb06                 jmp 0x6b3ca7
// 006b3ca1  895c2414             mov dword ptr [esp + 0x14], ebx
// 006b3ca5  8bfb                 mov edi, ebx
// 006b3ca7  3bf9                 cmp edi, ecx
// 006b3ca9  7d05                 jge 0x6b3cb0
// 006b3cab  e870c2f7ff           call 0x62ff20
// 006b3cb0  8d3c7f               lea edi, [edi + edi*2]
// 006b3cb3  03ff                 add edi, edi
// 006b3cb5  03ff                 add edi, edi
// 006b3cb7  03ff                 add edi, edi
// 006b3cb9  57                   push edi
// 006b3cba  e873c2f7ff           call 0x62ff32
// 006b3cbf  8b4e04               mov ecx, dword ptr [esi + 4]
// 006b3cc2  8be8                 mov ebp, eax
// 006b3cc4  8b4608               mov eax, dword ptr [esi + 8]
// 006b3cc7  8d0440               lea eax, [eax + eax*2]
// 006b3cca  03c0                 add eax, eax
// 006b3ccc  03c0                 add eax, eax
// 006b3cce  03c0                 add eax, eax
// 006b3cd0  50                   push eax
// 006b3cd1  51                   push ecx
// 006b3cd2  57                   push edi
// 006b3cd3  55                   push ebp
// 006b3cd4  e8a7dbd4ff           call 0x401880
// 006b3cd9  8b4e08               mov ecx, dword ptr [esi + 8]
// 006b3cdc  8bc3                 mov eax, ebx
// 006b3cde  2bc1                 sub eax, ecx
// 006b3ce0  8d1440               lea edx, [eax + eax*2]
// 006b3ce3  03d2                 add edx, edx
// 006b3ce5  03d2                 add edx, edx
// 006b3ce7  03d2                 add edx, edx
// 006b3ce9  52                   push edx
// 006b3cea  8d0449               lea eax, [ecx + ecx*2]
// 006b3ced  8d4cc500             lea ecx, [ebp + eax*8]
// 006b3cf1  6a00                 push 0
// 006b3cf3  51                   push ecx
// 006b3cf4  e893cef7ff           call 0x630b8c
// 006b3cf9  8b5604               mov edx, dword ptr [esi + 4]
// 006b3cfc  52                   push edx
// 006b3cfd  e824c2f7ff           call 0x62ff26
// 006b3d02  8b442438             mov eax, dword ptr [esp + 0x38]
// 006b3d06  83c424               add esp, 0x24
// 006b3d09  896e04               mov dword ptr [esi + 4], ebp
// 006b3d0c  89460c               mov dword ptr [esi + 0xc], eax
// 006b3d0f  5d                   pop ebp
// 006b3d10  5f                   pop edi
// 006b3d11  895e08               mov dword ptr [esi + 8], ebx
// 006b3d14  5e                   pop esi
// 006b3d15  5b                   pop ebx
// 006b3d16  c20800               ret 8
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControlGallery.cpp (function ?SetSize@?$CArray@UGALLERYITEM_POSITION@CXTPControlGallery@@AAU12@@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControlGallery.cpp
