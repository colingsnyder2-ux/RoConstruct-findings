// roc 2012-06 0093b4e0  unit: seg_00930000  size: 668 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0093b4e0
//
// 0093b4e0  83ec10               sub esp, 0x10
// 0093b4e3  53                   push ebx
// 0093b4e4  55                   push ebp
// 0093b4e5  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0093b4e9  56                   push esi
// 0093b4ea  57                   push edi
// 0093b4eb  8bf0                 mov esi, eax
// 0093b4ed  e83efeffff           call 0x93b330
// 0093b4f2  8bf8                 mov edi, eax
// 0093b4f4  8d4701               lea eax, [edi + 1]
// 0093b4f7  3dffffff0f           cmp eax, 0xfffffff
// 0093b4fc  7717                 ja 0x93b515
// 0093b4fe  8b16                 mov edx, dword ptr [esi]
// 0093b500  8bcf                 mov ecx, edi
// 0093b502  c1e104               shl ecx, 4
// 0093b505  51                   push ecx
// 0093b506  6a00                 push 0
// 0093b508  6a00                 push 0
// 0093b50a  52                   push edx
// 0093b50b  e850baffff           call 0x936f60
// 0093b510  83c410               add esp, 0x10
// 0093b513  eb0b                 jmp 0x93b520
// 0093b515  8b06                 mov eax, dword ptr [esi]
// 0093b517  50                   push eax
// 0093b518  e823baffff           call 0x936f40
// 0093b51d  83c404               add esp, 4
// 0093b520  33db                 xor ebx, ebx
// 0093b522  3bfb                 cmp edi, ebx
// 0093b524  894508               mov dword ptr [ebp + 8], eax
// 0093b527  897d28               mov dword ptr [ebp + 0x28], edi
// 0093b52a  0f8e58010000         jle 0x93b688
// 0093b530  33c0                 xor eax, eax
// 0093b532  8bcf                 mov ecx, edi
// 0093b534  8b5508               mov edx, dword ptr [ebp + 8]
// 0093b537  895c1008             mov dword ptr [eax + edx + 8], ebx
// 0093b53b  83c010               add eax, 0x10
// 0093b53e  83e901               sub ecx, 1
// 0093b541  75f1                 jne 0x93b534
// 0093b543  3bfb                 cmp edi, ebx
// 0093b545  0f8e3d010000         jle 0x93b688
// 0093b54b  897c2414             mov dword ptr [esp + 0x14], edi
// 0093b54f  90                   nop 
// 0093b550  8b4e04               mov ecx, dword ptr [esi + 4]
// 0093b553  8b7d08               mov edi, dword ptr [ebp + 8]
// 0093b556  6a01                 push 1
// 0093b558  8d442428             lea eax, [esp + 0x28]
// 0093b55c  50                   push eax
// 0093b55d  51                   push ecx
// 0093b55e  03fb                 add edi, ebx
// 0093b560  e8ebb3ffff           call 0x936950
// 0093b565  83c40c               add esp, 0xc
// 0093b568  85c0                 test eax, eax
// 0093b56a  7423                 je 0x93b58f
// 0093b56c  8b560c               mov edx, dword ptr [esi + 0xc]
// 0093b56f  8b06                 mov eax, dword ptr [esi]
// 0093b571  68b4fdbf00           push 0xbffdb4
// 0093b576  52                   push edx
// 0093b577  6898fdbf00           push 0xbffd98
// 0093b57c  50                   push eax
// 0093b57d  e8be4bf1ff           call 0x850140
// 0093b582  8b0e                 mov ecx, dword ptr [esi]
// 0093b584  6a03                 push 3
// 0093b586  51                   push ecx
// 0093b587  e8f496f1ff           call 0x854c80
// 0093b58c  83c418               add esp, 0x18
// 0093b58f  0fbe442424           movsx eax, byte ptr [esp + 0x24]
// 0093b594  83f804               cmp eax, 4
// 0093b597  0f87ba000000         ja 0x93b657
// 0093b59d  ff248568b79300       jmp dword ptr [eax*4 + 0x93b768]
// 0093b5a4  c7470800000000       mov dword ptr [edi + 8], 0
// 0093b5ab  e9ca000000           jmp 0x93b67a
// 0093b5b0  8b4604               mov eax, dword ptr [esi + 4]
// 0093b5b3  6a01                 push 1
// 0093b5b5  8d542417             lea edx, [esp + 0x17]
// 0093b5b9  52                   push edx
// 0093b5ba  50                   push eax
// 0093b5bb  e890b3ffff           call 0x936950
// 0093b5c0  83c40c               add esp, 0xc
// 0093b5c3  85c0                 test eax, eax
// 0093b5c5  7423                 je 0x93b5ea
// 0093b5c7  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0093b5ca  8b16                 mov edx, dword ptr [esi]
// 0093b5cc  68b4fdbf00           push 0xbffdb4
// 0093b5d1  51                   push ecx
// 0093b5d2  6898fdbf00           push 0xbffd98
// 0093b5d7  52                   push edx
// 0093b5d8  e8634bf1ff           call 0x850140
// 0093b5dd  8b06                 mov eax, dword ptr [esi]
// 0093b5df  6a03                 push 3
// 0093b5e1  50                   push eax
// 0093b5e2  e89996f1ff           call 0x854c80
// 0093b5e7  83c418               add esp, 0x18
// 0093b5ea  33c9                 xor ecx, ecx
// 0093b5ec  384c2413             cmp byte ptr [esp + 0x13], cl
// 0093b5f0  c7470801000000       mov dword ptr [edi + 8], 1
// 0093b5f7  0f95c1               setne cl
// 0093b5fa  890f                 mov dword ptr [edi], ecx
// 0093b5fc  eb7c                 jmp 0x93b67a
// 0093b5fe  8b4604               mov eax, dword ptr [esi + 4]
// 0093b601  6a08                 push 8
// 0093b603  8d54241c             lea edx, [esp + 0x1c]
// 0093b607  52                   push edx
// 0093b608  50                   push eax
// 0093b609  e842b3ffff           call 0x936950
// 0093b60e  83c40c               add esp, 0xc
// 0093b611  85c0                 test eax, eax
// 0093b613  7423                 je 0x93b638
// 0093b615  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0093b618  8b16                 mov edx, dword ptr [esi]
// 0093b61a  68b4fdbf00           push 0xbffdb4
// 0093b61f  51                   push ecx
// 0093b620  6898fdbf00           push 0xbffd98
// 0093b625  52                   push edx
// 0093b626  e8154bf1ff           call 0x850140
// 0093b62b  8b06                 mov eax, dword ptr [esi]
// 0093b62d  6a03                 push 3
// 0093b62f  50                   push eax
// 0093b630  e84b96f1ff           call 0x854c80
// 0093b635  83c418               add esp, 0x18
// 0093b638  dd442418             fld qword ptr [esp + 0x18]
// 0093b63c  c7470803000000       mov dword ptr [edi + 8], 3
// 0093b643  dd1f                 fstp qword ptr [edi]
// 0093b645  eb33                 jmp 0x93b67a
// 0093b647  e854fdffff           call 0x93b3a0
// 0093b64c  8907                 mov dword ptr [edi], eax
// 0093b64e  c7470804000000       mov dword ptr [edi + 8], 4
// 0093b655  eb23                 jmp 0x93b67a
// 0093b657  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0093b65a  8b16                 mov edx, dword ptr [esi]
// 0093b65c  68d0fdbf00           push 0xbffdd0
// 0093b661  51                   push ecx
// 0093b662  6898fdbf00           push 0xbffd98
// 0093b667  52                   push edx
// 0093b668  e8d34af1ff           call 0x850140
// 0093b66d  8b06                 mov eax, dword ptr [esi]
// 0093b66f  6a03                 push 3
// 0093b671  50                   push eax
// 0093b672  e80996f1ff           call 0x854c80
// 0093b677  83c418               add esp, 0x18
// 0093b67a  83c310               add ebx, 0x10
// 0093b67d  836c241401           sub dword ptr [esp + 0x14], 1
// 0093b682  0f85c8feffff         jne 0x93b550
// 0093b688  8b5604               mov edx, dword ptr [esi + 4]
// 0093b68b  6a04                 push 4
// 0093b68d  8d4c2428             lea ecx, [esp + 0x28]
// 0093b691  51                   push ecx
// 0093b692  52                   push edx
// 0093b693  e8b8b2ffff           call 0x936950
// 0093b698  83c40c               add esp, 0xc
// 0093b69b  85c0                 test eax, eax
// 0093b69d  7423                 je 0x93b6c2
// 0093b69f  8b460c               mov eax, dword ptr [esi + 0xc]
// 0093b6a2  8b0e                 mov ecx, dword ptr [esi]
// 0093b6a4  68b4fdbf00           push 0xbffdb4
// 0093b6a9  50                   push eax
// 0093b6aa  6898fdbf00           push 0xbffd98
// 0093b6af  51                   push ecx
// 0093b6b0  e88b4af1ff           call 0x850140
// 0093b6b5  8b16                 mov edx, dword ptr [esi]
// 0093b6b7  6a03                 push 3
// 0093b6b9  52                   push edx
// 0093b6ba  e8c195f1ff           call 0x854c80
// 0093b6bf  83c418               add esp, 0x18
// 0093b6c2  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0093b6c6  85ff                 test edi, edi
// 0093b6c8  7d27                 jge 0x93b6f1
// 0093b6ca  8b460c               mov eax, dword ptr [esi + 0xc]
// 0093b6cd  8b0e                 mov ecx, dword ptr [esi]
// 0093b6cf  68c4fdbf00           push 0xbffdc4
// 0093b6d4  50                   push eax
// 0093b6d5  6898fdbf00           push 0xbffd98
// 0093b6da  51                   push ecx
// 0093b6db  e8604af1ff           call 0x850140
// 0093b6e0  8b16                 mov edx, dword ptr [esi]
// 0093b6e2  6a03                 push 3
// 0093b6e4  52                   push edx
// 0093b6e5  e89695f1ff           call 0x854c80
// 0093b6ea  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 0093b6ee  83c418               add esp, 0x18
// 0093b6f1  8d4701               lea eax, [edi + 1]
// 0093b6f4  3dffffff3f           cmp eax, 0x3fffffff
// 0093b6f9  7719                 ja 0x93b714
// 0093b6fb  8b16                 mov edx, dword ptr [esi]
// 0093b6fd  8d0cbd00000000       lea ecx, [edi*4]
// 0093b704  51                   push ecx
// 0093b705  6a00                 push 0
// 0093b707  6a00                 push 0
// 0093b709  52                   push edx
// 0093b70a  e851b8ffff           call 0x936f60
// 0093b70f  83c410               add esp, 0x10
// 0093b712  eb0b                 jmp 0x93b71f
// 0093b714  8b06                 mov eax, dword ptr [esi]
// 0093b716  50                   push eax
// 0093b717  e824b8ffff           call 0x936f40
// 0093b71c  83c404               add esp, 4
// 0093b71f  894510               mov dword ptr [ebp + 0x10], eax
// 0093b722  33c0                 xor eax, eax
// 0093b724  897d34               mov dword ptr [ebp + 0x34], edi
// 0093b727  85ff                 test edi, edi
// 0093b729  7e14                 jle 0x93b73f
// 0093b72b  eb03                 jmp 0x93b730
// 0093b72d  8d4900               lea ecx, [ecx]
// 0093b730  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 0093b733  c7048100000000       mov dword ptr [ecx + eax*4], 0
// 0093b73a  40                   inc eax
// 0093b73b  3bc7                 cmp eax, edi
// 0093b73d  7cf1                 jl 0x93b730
// 0093b73f  33db                 xor ebx, ebx
// 0093b741  85ff                 test edi, edi
// 0093b743  7e18                 jle 0x93b75d
// 0093b745  8b5520               mov edx, dword ptr [ebp + 0x20]
// 0093b748  52                   push edx
// 0093b749  56                   push esi
// 0093b74a  e8f1020000           call 0x93ba40
// 0093b74f  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 0093b752  890499               mov dword ptr [ecx + ebx*4], eax
// 0093b755  43                   inc ebx
// 0093b756  83c408               add esp, 8
// 0093b759  3bdf                 cmp ebx, edi
// 0093b75b  7ce8                 jl 0x93b745
// 0093b75d  5f                   pop edi
// 0093b75e  5e                   pop esi
// 0093b75f  5d                   pop ebp
// 0093b760  5b                   pop ebx
// 0093b761  83c410               add esp, 0x10
// 0093b764  c3                   ret 
// 0093b765  8d4900               lea ecx, [ecx]
// 0093b768  a4                   movsb byte ptr es:[edi], byte ptr [esi]
// 0093b769  b593                 mov ch, 0x93
// 0093b76b  00b0b5930057         add byte ptr [eax + 0x570093b5], dh
// 0093b771  b693                 mov dh, 0x93
// 0093b773  00fe                 add dh, bh
// 0093b775  b593                 mov ch, 0x93
// 0093b777  0047b6               add byte ptr [edi - 0x4a], al
// 0093b77a  93                   xchg ebx, eax
// library lua-5.1.4/lundump.c (function _LoadConstants)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lundump.c
