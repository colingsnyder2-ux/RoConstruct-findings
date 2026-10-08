// roc 2009-12 007d48b0  unit: seg_007d0000  size: 668 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007d48b0
//
// 007d48b0  83ec10               sub esp, 0x10
// 007d48b3  53                   push ebx
// 007d48b4  55                   push ebp
// 007d48b5  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 007d48b9  56                   push esi
// 007d48ba  57                   push edi
// 007d48bb  8bf0                 mov esi, eax
// 007d48bd  e84efeffff           call 0x7d4710
// 007d48c2  8bf8                 mov edi, eax
// 007d48c4  8d4701               lea eax, [edi + 1]
// 007d48c7  3dffffff0f           cmp eax, 0xfffffff
// 007d48cc  7717                 ja 0x7d48e5
// 007d48ce  8b16                 mov edx, dword ptr [esi]
// 007d48d0  8bcf                 mov ecx, edi
// 007d48d2  c1e104               shl ecx, 4
// 007d48d5  51                   push ecx
// 007d48d6  6a00                 push 0
// 007d48d8  6a00                 push 0
// 007d48da  52                   push edx
// 007d48db  e8d0ceffff           call 0x7d17b0
// 007d48e0  83c410               add esp, 0x10
// 007d48e3  eb0b                 jmp 0x7d48f0
// 007d48e5  8b06                 mov eax, dword ptr [esi]
// 007d48e7  50                   push eax
// 007d48e8  e8a3ceffff           call 0x7d1790
// 007d48ed  83c404               add esp, 4
// 007d48f0  33db                 xor ebx, ebx
// 007d48f2  3bfb                 cmp edi, ebx
// 007d48f4  894508               mov dword ptr [ebp + 8], eax
// 007d48f7  897d28               mov dword ptr [ebp + 0x28], edi
// 007d48fa  0f8e58010000         jle 0x7d4a58
// 007d4900  33c0                 xor eax, eax
// 007d4902  8bcf                 mov ecx, edi
// 007d4904  8b5508               mov edx, dword ptr [ebp + 8]
// 007d4907  895c1008             mov dword ptr [eax + edx + 8], ebx
// 007d490b  83c010               add eax, 0x10
// 007d490e  83e901               sub ecx, 1
// 007d4911  75f1                 jne 0x7d4904
// 007d4913  3bfb                 cmp edi, ebx
// 007d4915  0f8e3d010000         jle 0x7d4a58
// 007d491b  897c2414             mov dword ptr [esp + 0x14], edi
// 007d491f  90                   nop 
// 007d4920  8b4e04               mov ecx, dword ptr [esi + 4]
// 007d4923  8b7d08               mov edi, dword ptr [ebp + 8]
// 007d4926  6a01                 push 1
// 007d4928  8d442428             lea eax, [esp + 0x28]
// 007d492c  50                   push eax
// 007d492d  51                   push ecx
// 007d492e  03fb                 add edi, ebx
// 007d4930  e86bc8ffff           call 0x7d11a0
// 007d4935  83c40c               add esp, 0xc
// 007d4938  85c0                 test eax, eax
// 007d493a  7423                 je 0x7d495f
// 007d493c  8b560c               mov edx, dword ptr [esi + 0xc]
// 007d493f  8b06                 mov eax, dword ptr [esi]
// 007d4941  6858f09e00           push 0x9ef058
// 007d4946  52                   push edx
// 007d4947  683cf09e00           push 0x9ef03c
// 007d494c  50                   push eax
// 007d494d  e82e5cfcff           call 0x79a580
// 007d4952  8b0e                 mov ecx, dword ptr [esi]
// 007d4954  6a03                 push 3
// 007d4956  51                   push ecx
// 007d4957  e8f42efcff           call 0x797850
// 007d495c  83c418               add esp, 0x18
// 007d495f  0fbe442424           movsx eax, byte ptr [esp + 0x24]
// 007d4964  83f804               cmp eax, 4
// 007d4967  0f87ba000000         ja 0x7d4a27
// 007d496d  ff2485384b7d00       jmp dword ptr [eax*4 + 0x7d4b38]
// 007d4974  c7470800000000       mov dword ptr [edi + 8], 0
// 007d497b  e9ca000000           jmp 0x7d4a4a
// 007d4980  8b4604               mov eax, dword ptr [esi + 4]
// 007d4983  6a01                 push 1
// 007d4985  8d542417             lea edx, [esp + 0x17]
// 007d4989  52                   push edx
// 007d498a  50                   push eax
// 007d498b  e810c8ffff           call 0x7d11a0
// 007d4990  83c40c               add esp, 0xc
// 007d4993  85c0                 test eax, eax
// 007d4995  7423                 je 0x7d49ba
// 007d4997  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 007d499a  8b16                 mov edx, dword ptr [esi]
// 007d499c  6858f09e00           push 0x9ef058
// 007d49a1  51                   push ecx
// 007d49a2  683cf09e00           push 0x9ef03c
// 007d49a7  52                   push edx
// 007d49a8  e8d35bfcff           call 0x79a580
// 007d49ad  8b06                 mov eax, dword ptr [esi]
// 007d49af  6a03                 push 3
// 007d49b1  50                   push eax
// 007d49b2  e8992efcff           call 0x797850
// 007d49b7  83c418               add esp, 0x18
// 007d49ba  33c9                 xor ecx, ecx
// 007d49bc  384c2413             cmp byte ptr [esp + 0x13], cl
// 007d49c0  c7470801000000       mov dword ptr [edi + 8], 1
// 007d49c7  0f95c1               setne cl
// 007d49ca  890f                 mov dword ptr [edi], ecx
// 007d49cc  eb7c                 jmp 0x7d4a4a
// 007d49ce  8b4604               mov eax, dword ptr [esi + 4]
// 007d49d1  6a08                 push 8
// 007d49d3  8d54241c             lea edx, [esp + 0x1c]
// 007d49d7  52                   push edx
// 007d49d8  50                   push eax
// 007d49d9  e8c2c7ffff           call 0x7d11a0
// 007d49de  83c40c               add esp, 0xc
// 007d49e1  85c0                 test eax, eax
// 007d49e3  7423                 je 0x7d4a08
// 007d49e5  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 007d49e8  8b16                 mov edx, dword ptr [esi]
// 007d49ea  6858f09e00           push 0x9ef058
// 007d49ef  51                   push ecx
// 007d49f0  683cf09e00           push 0x9ef03c
// 007d49f5  52                   push edx
// 007d49f6  e8855bfcff           call 0x79a580
// 007d49fb  8b06                 mov eax, dword ptr [esi]
// 007d49fd  6a03                 push 3
// 007d49ff  50                   push eax
// 007d4a00  e84b2efcff           call 0x797850
// 007d4a05  83c418               add esp, 0x18
// 007d4a08  dd442418             fld qword ptr [esp + 0x18]
// 007d4a0c  c7470803000000       mov dword ptr [edi + 8], 3
// 007d4a13  dd1f                 fstp qword ptr [edi]
// 007d4a15  eb33                 jmp 0x7d4a4a
// 007d4a17  e864fdffff           call 0x7d4780
// 007d4a1c  8907                 mov dword ptr [edi], eax
// 007d4a1e  c7470804000000       mov dword ptr [edi + 8], 4
// 007d4a25  eb23                 jmp 0x7d4a4a
// 007d4a27  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 007d4a2a  8b16                 mov edx, dword ptr [esi]
// 007d4a2c  6874f09e00           push 0x9ef074
// 007d4a31  51                   push ecx
// 007d4a32  683cf09e00           push 0x9ef03c
// 007d4a37  52                   push edx
// 007d4a38  e8435bfcff           call 0x79a580
// 007d4a3d  8b06                 mov eax, dword ptr [esi]
// 007d4a3f  6a03                 push 3
// 007d4a41  50                   push eax
// 007d4a42  e8092efcff           call 0x797850
// 007d4a47  83c418               add esp, 0x18
// 007d4a4a  83c310               add ebx, 0x10
// 007d4a4d  836c241401           sub dword ptr [esp + 0x14], 1
// 007d4a52  0f85c8feffff         jne 0x7d4920
// 007d4a58  8b5604               mov edx, dword ptr [esi + 4]
// 007d4a5b  6a04                 push 4
// 007d4a5d  8d4c2428             lea ecx, [esp + 0x28]
// 007d4a61  51                   push ecx
// 007d4a62  52                   push edx
// 007d4a63  e838c7ffff           call 0x7d11a0
// 007d4a68  83c40c               add esp, 0xc
// 007d4a6b  85c0                 test eax, eax
// 007d4a6d  7423                 je 0x7d4a92
// 007d4a6f  8b460c               mov eax, dword ptr [esi + 0xc]
// 007d4a72  8b0e                 mov ecx, dword ptr [esi]
// 007d4a74  6858f09e00           push 0x9ef058
// 007d4a79  50                   push eax
// 007d4a7a  683cf09e00           push 0x9ef03c
// 007d4a7f  51                   push ecx
// 007d4a80  e8fb5afcff           call 0x79a580
// 007d4a85  8b16                 mov edx, dword ptr [esi]
// 007d4a87  6a03                 push 3
// 007d4a89  52                   push edx
// 007d4a8a  e8c12dfcff           call 0x797850
// 007d4a8f  83c418               add esp, 0x18
// 007d4a92  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 007d4a96  85ff                 test edi, edi
// 007d4a98  7d27                 jge 0x7d4ac1
// 007d4a9a  8b460c               mov eax, dword ptr [esi + 0xc]
// 007d4a9d  8b0e                 mov ecx, dword ptr [esi]
// 007d4a9f  6868f09e00           push 0x9ef068
// 007d4aa4  50                   push eax
// 007d4aa5  683cf09e00           push 0x9ef03c
// 007d4aaa  51                   push ecx
// 007d4aab  e8d05afcff           call 0x79a580
// 007d4ab0  8b16                 mov edx, dword ptr [esi]
// 007d4ab2  6a03                 push 3
// 007d4ab4  52                   push edx
// 007d4ab5  e8962dfcff           call 0x797850
// 007d4aba  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 007d4abe  83c418               add esp, 0x18
// 007d4ac1  8d4701               lea eax, [edi + 1]
// 007d4ac4  3dffffff3f           cmp eax, 0x3fffffff
// 007d4ac9  7719                 ja 0x7d4ae4
// 007d4acb  8b16                 mov edx, dword ptr [esi]
// 007d4acd  8d0cbd00000000       lea ecx, [edi*4]
// 007d4ad4  51                   push ecx
// 007d4ad5  6a00                 push 0
// 007d4ad7  6a00                 push 0
// 007d4ad9  52                   push edx
// 007d4ada  e8d1ccffff           call 0x7d17b0
// 007d4adf  83c410               add esp, 0x10
// 007d4ae2  eb0b                 jmp 0x7d4aef
// 007d4ae4  8b06                 mov eax, dword ptr [esi]
// 007d4ae6  50                   push eax
// 007d4ae7  e8a4ccffff           call 0x7d1790
// 007d4aec  83c404               add esp, 4
// 007d4aef  894510               mov dword ptr [ebp + 0x10], eax
// 007d4af2  33c0                 xor eax, eax
// 007d4af4  897d34               mov dword ptr [ebp + 0x34], edi
// 007d4af7  85ff                 test edi, edi
// 007d4af9  7e14                 jle 0x7d4b0f
// 007d4afb  eb03                 jmp 0x7d4b00
// 007d4afd  8d4900               lea ecx, [ecx]
// 007d4b00  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 007d4b03  c7048100000000       mov dword ptr [ecx + eax*4], 0
// 007d4b0a  40                   inc eax
// 007d4b0b  3bc7                 cmp eax, edi
// 007d4b0d  7cf1                 jl 0x7d4b00
// 007d4b0f  33db                 xor ebx, ebx
// 007d4b11  85ff                 test edi, edi
// 007d4b13  7e18                 jle 0x7d4b2d
// 007d4b15  8b5520               mov edx, dword ptr [ebp + 0x20]
// 007d4b18  52                   push edx
// 007d4b19  56                   push esi
// 007d4b1a  e8f1020000           call 0x7d4e10
// 007d4b1f  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 007d4b22  890499               mov dword ptr [ecx + ebx*4], eax
// 007d4b25  43                   inc ebx
// 007d4b26  83c408               add esp, 8
// 007d4b29  3bdf                 cmp ebx, edi
// 007d4b2b  7ce8                 jl 0x7d4b15
// 007d4b2d  5f                   pop edi
// 007d4b2e  5e                   pop esi
// 007d4b2f  5d                   pop ebp
// 007d4b30  5b                   pop ebx
// 007d4b31  83c410               add esp, 0x10
// 007d4b34  c3                   ret 
// 007d4b35  8d4900               lea ecx, [ecx]
// 007d4b38  7449                 je 0x7d4b83
// 007d4b3a  7d00                 jge 0x7d4b3c
// 007d4b3c  80497d00             or byte ptr [ecx + 0x7d], 0
// 007d4b40  27                   daa 
// 007d4b41  4a                   dec edx
// 007d4b42  7d00                 jge 0x7d4b44
// 007d4b44  ce                   into 
// 007d4b45  49                   dec ecx
// 007d4b46  7d00                 jge 0x7d4b48
// 007d4b48  17                   pop ss
// 007d4b49  4a                   dec edx
// 007d4b4a  7d00                 jge 0x7d4b4c
// library lua-5.1.4/lundump.c (function _LoadConstants)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lundump.c
