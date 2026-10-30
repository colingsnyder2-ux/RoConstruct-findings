// roc 2011-06 0083f0e0  unit: CInstanceRecord::CNameItem  size: 1045 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0083f0e0
//
// 0083f0e0  6aff                 push -1
// 0083f0e2  683b4da000           push 0xa04d3b
// 0083f0e7  64a100000000         mov eax, dword ptr fs:[0]
// 0083f0ed  50                   push eax
// 0083f0ee  83ec34               sub esp, 0x34
// 0083f0f1  53                   push ebx
// 0083f0f2  55                   push ebp
// 0083f0f3  56                   push esi
// 0083f0f4  57                   push edi
// 0083f0f5  a12058c900           mov eax, dword ptr [0xc95820]
// 0083f0fa  33c4                 xor eax, esp
// 0083f0fc  50                   push eax
// 0083f0fd  8d442448             lea eax, [esp + 0x48]
// 0083f101  64a300000000         mov dword ptr fs:[0], eax
// 0083f107  894c2414             mov dword ptr [esp + 0x14], ecx
// 0083f10b  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 0083f10f  8b4704               mov eax, dword ptr [edi + 4]
// 0083f112  8b8800010000         mov ecx, dword ptr [eax + 0x100]
// 0083f118  8b6f24               mov ebp, dword ptr [edi + 0x24]
// 0083f11b  33c0                 xor eax, eax
// 0083f11d  8d7714               lea esi, [edi + 0x14]
// 0083f120  894c2458             mov dword ptr [esp + 0x58], ecx
// 0083f124  89442434             mov dword ptr [esp + 0x34], eax
// 0083f128  c7442430402aac00     mov dword ptr [esp + 0x30], 0xac2a40
// 0083f130  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0083f133  8b5608               mov edx, dword ptr [esi + 8]
// 0083f136  8b1e                 mov ebx, dword ptr [esi]
// 0083f138  89442450             mov dword ptr [esp + 0x50], eax
// 0083f13c  8b4604               mov eax, dword ptr [esi + 4]
// 0083f13f  51                   push ecx
// 0083f140  52                   push edx
// 0083f141  48                   dec eax
// 0083f142  50                   push eax
// 0083f143  53                   push ebx
// 0083f144  ff154401a400         call dword ptr [0xa40144]
// 0083f14a  50                   push eax
// 0083f14b  8d4c2434             lea ecx, [esp + 0x34]
// 0083f14f  e8d4b4fcff           call 0x80a628
// 0083f154  837d0c00             cmp dword ptr [ebp + 0xc], 0
// 0083f158  750c                 jne 0x83f166
// 0083f15a  8d542430             lea edx, [esp + 0x30]
// 0083f15e  52                   push edx
// 0083f15f  8bcd                 mov ecx, ebp
// 0083f161  e8ced61800           call 0x9cc834
// 0083f166  6a40                 push 0x40
// 0083f168  e8f1aefcff           call 0x80a05e
// 0083f16d  8bd8                 mov ebx, eax
// 0083f16f  83c404               add esp, 4
// 0083f172  895c2424             mov dword ptr [esp + 0x24], ebx
// 0083f176  c644245001           mov byte ptr [esp + 0x50], 1
// 0083f17b  85db                 test ebx, ebx
// 0083f17d  7436                 je 0x83f1b5
// 0083f17f  8bcb                 mov ecx, ebx
// 0083f181  e844d41800           call 0x9cc5ca
// 0083f186  8d4b2c               lea ecx, [ebx + 0x2c]
// 0083f189  c703a44bac00         mov dword ptr [ebx], 0xac4ba4
// 0083f18f  ff15b42da400         call dword ptr [0xa42db4]
// 0083f195  33c9                 xor ecx, ecx
// 0083f197  83c8ff               or eax, 0xffffffff
// 0083f19a  894b20               mov dword ptr [ebx + 0x20], ecx
// 0083f19d  894324               mov dword ptr [ebx + 0x24], eax
// 0083f1a0  894328               mov dword ptr [ebx + 0x28], eax
// 0083f1a3  894330               mov dword ptr [ebx + 0x30], eax
// 0083f1a6  c7433408020000       mov dword ptr [ebx + 0x34], 0x208
// 0083f1ad  894b38               mov dword ptr [ebx + 0x38], ecx
// 0083f1b0  89433c               mov dword ptr [ebx + 0x3c], eax
// 0083f1b3  eb02                 jmp 0x83f1b7
// 0083f1b5  33db                 xor ebx, ebx
// 0083f1b7  8b570c               mov edx, dword ptr [edi + 0xc]
// 0083f1ba  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0083f1be  8b01                 mov eax, dword ptr [ecx]
// 0083f1c0  8b406c               mov eax, dword ptr [eax + 0x6c]
// 0083f1c3  52                   push edx
// 0083f1c4  8d54241c             lea edx, [esp + 0x1c]
// 0083f1c8  52                   push edx
// 0083f1c9  c644245800           mov byte ptr [esp + 0x58], 0
// 0083f1ce  ffd0                 call eax
// 0083f1d0  8d4b2c               lea ecx, [ebx + 0x2c]
// 0083f1d3  50                   push eax
// 0083f1d4  c644245402           mov byte ptr [esp + 0x54], 2
// 0083f1d9  ff156425a400         call dword ptr [0xa42564]
// 0083f1df  8d4c2418             lea ecx, [esp + 0x18]
// 0083f1e3  c644245000           mov byte ptr [esp + 0x50], 0
// 0083f1e8  ff15082ea400         call dword ptr [0xa42e08]
// 0083f1ee  8b4f08               mov ecx, dword ptr [edi + 8]
// 0083f1f1  8b11                 mov edx, dword ptr [ecx]
// 0083f1f3  8b82d8000000         mov eax, dword ptr [edx + 0xd8]
// 0083f1f9  53                   push ebx
// 0083f1fa  57                   push edi
// 0083f1fb  ffd0                 call eax
// 0083f1fd  8b4328               mov eax, dword ptr [ebx + 0x28]
// 0083f200  83f8ff               cmp eax, -1
// 0083f203  7409                 je 0x83f20e
// 0083f205  50                   push eax
// 0083f206  56                   push esi
// 0083f207  8bcd                 mov ecx, ebp
// 0083f209  e812bcfcff           call 0x80ae20
// 0083f20e  8b0e                 mov ecx, dword ptr [esi]
// 0083f210  894c2424             mov dword ptr [esp + 0x24], ecx
// 0083f214  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 0083f217  85c9                 test ecx, ecx
// 0083f219  0f84a3010000         je 0x83f3c2
// 0083f21f  e83c0affff           call 0x82fc60
// 0083f224  85c0                 test eax, eax
// 0083f226  0f8496010000         je 0x83f3c2
// 0083f22c  8b5708               mov edx, dword ptr [edi + 8]
// 0083f22f  8bca                 mov ecx, edx
// 0083f231  8b01                 mov eax, dword ptr [ecx]
// 0083f233  89542418             mov dword ptr [esp + 0x18], edx
// 0083f237  8b90b0000000         mov edx, dword ptr [eax + 0xb0]
// 0083f23d  ffd2                 call edx
// 0083f23f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0083f243  8944241c             mov dword ptr [esp + 0x1c], eax
// 0083f247  8b01                 mov eax, dword ptr [ecx]
// 0083f249  8b90dc000000         mov edx, dword ptr [eax + 0xdc]
// 0083f24f  ffd2                 call edx
// 0083f251  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0083f255  2bc8                 sub ecx, eax
// 0083f257  85c9                 test ecx, ecx
// 0083f259  7e01                 jle 0x83f25c
// 0083f25b  41                   inc ecx
// 0083f25c  51                   push ecx
// 0083f25d  8b4f04               mov ecx, dword ptr [edi + 4]
// 0083f260  e80b14ffff           call 0x830670
// 0083f265  0106                 add dword ptr [esi], eax
// 0083f267  8b4f08               mov ecx, dword ptr [edi + 8]
// 0083f26a  8b01                 mov eax, dword ptr [ecx]
// 0083f26c  8b90c0000000         mov edx, dword ptr [eax + 0xc0]
// 0083f272  ffd2                 call edx
// 0083f274  8b4e04               mov ecx, dword ptr [esi + 4]
// 0083f277  8b5608               mov edx, dword ptr [esi + 8]
// 0083f27a  89442418             mov dword ptr [esp + 0x18], eax
// 0083f27e  8b06                 mov eax, dword ptr [esi]
// 0083f280  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0083f284  8d4c2438             lea ecx, [esp + 0x38]
// 0083f288  51                   push ecx
// 0083f289  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0083f28d  8944243c             mov dword ptr [esp + 0x3c], eax
// 0083f291  8b460c               mov eax, dword ptr [esi + 0xc]
// 0083f294  89542444             mov dword ptr [esp + 0x44], edx
// 0083f298  8b5708               mov edx, dword ptr [edi + 8]
// 0083f29b  52                   push edx
// 0083f29c  8944244c             mov dword ptr [esp + 0x4c], eax
// 0083f2a0  6a00                 push 0
// 0083f2a2  8d442434             lea eax, [esp + 0x34]
// 0083f2a6  50                   push eax
// 0083f2a7  e8f4d30600           call 0x8ac6a0
// 0083f2ac  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0083f2b0  8b11                 mov edx, dword ptr [ecx]
// 0083f2b2  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0083f2b6  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0083f2ba  8b92b8000000         mov edx, dword ptr [edx + 0xb8]
// 0083f2c0  50                   push eax
// 0083f2c1  51                   push ecx
// 0083f2c2  8b0e                 mov ecx, dword ptr [esi]
// 0083f2c4  83ec10               sub esp, 0x10
// 0083f2c7  8bc4                 mov eax, esp
// 0083f2c9  8908                 mov dword ptr [eax], ecx
// 0083f2cb  8b4e04               mov ecx, dword ptr [esi + 4]
// 0083f2ce  894804               mov dword ptr [eax + 4], ecx
// 0083f2d1  8b4e08               mov ecx, dword ptr [esi + 8]
// 0083f2d4  894808               mov dword ptr [eax + 8], ecx
// 0083f2d7  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0083f2da  53                   push ebx
// 0083f2db  89480c               mov dword ptr [eax + 0xc], ecx
// 0083f2de  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 0083f2e2  57                   push edi
// 0083f2e3  ffd2                 call edx
// 0083f2e5  8b4728               mov eax, dword ptr [edi + 0x28]
// 0083f2e8  250000f00f           and eax, 0xff00000
// 0083f2ed  3d00001000           cmp eax, 0x100000
// 0083f2f2  7418                 je 0x83f30c
// 0083f2f4  3d00004000           cmp eax, 0x400000
// 0083f2f9  7523                 jne 0x83f31e
// 0083f2fb  8b442440             mov eax, dword ptr [esp + 0x40]
// 0083f2ff  2b442428             sub eax, dword ptr [esp + 0x28]
// 0083f303  83e802               sub eax, 2
// 0083f306  89442438             mov dword ptr [esp + 0x38], eax
// 0083f30a  eb41                 jmp 0x83f34d
// 0083f30c  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0083f310  8b542438             mov edx, dword ptr [esp + 0x38]
// 0083f314  8d440a02             lea eax, [edx + ecx + 2]
// 0083f318  89442440             mov dword ptr [esp + 0x40], eax
// 0083f31c  eb2f                 jmp 0x83f34d
// 0083f31e  3d00000001           cmp eax, 0x1000000
// 0083f323  7418                 je 0x83f33d
// 0083f325  3d00000004           cmp eax, 0x4000000
// 0083f32a  7521                 jne 0x83f34d
// 0083f32c  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0083f330  2b4c242c             sub ecx, dword ptr [esp + 0x2c]
// 0083f334  83e902               sub ecx, 2
// 0083f337  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0083f33b  eb10                 jmp 0x83f34d
// 0083f33d  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0083f341  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0083f345  8d4c1002             lea ecx, [eax + edx + 2]
// 0083f349  894c2444             mov dword ptr [esp + 0x44], ecx
// 0083f34d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0083f351  8b4708               mov eax, dword ptr [edi + 8]
// 0083f354  f7d9                 neg ecx
// 0083f356  8d542438             lea edx, [esp + 0x38]
// 0083f35a  52                   push edx
// 0083f35b  1bc9                 sbb ecx, ecx
// 0083f35d  50                   push eax
// 0083f35e  23cd                 and ecx, ebp
// 0083f360  51                   push ecx
// 0083f361  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 0083f365  8d542428             lea edx, [esp + 0x28]
// 0083f369  52                   push edx
// 0083f36a  e831d30600           call 0x8ac6a0
// 0083f36f  837d0c00             cmp dword ptr [ebp + 0xc], 0
// 0083f373  8b08                 mov ecx, dword ptr [eax]
// 0083f375  894c2428             mov dword ptr [esp + 0x28], ecx
// 0083f379  8b5004               mov edx, dword ptr [eax + 4]
// 0083f37c  8954242c             mov dword ptr [esp + 0x2c], edx
// 0083f380  7537                 jne 0x83f3b9
// 0083f382  837c241800           cmp dword ptr [esp + 0x18], 0
// 0083f387  7430                 je 0x83f3b9
// 0083f389  8b4708               mov eax, dword ptr [edi + 8]
// 0083f38c  8b10                 mov edx, dword ptr [eax]
// 0083f38e  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0083f392  8b92c8000000         mov edx, dword ptr [edx + 0xc8]
// 0083f398  83ec10               sub esp, 0x10
// 0083f39b  8bc4                 mov eax, esp
// 0083f39d  8908                 mov dword ptr [eax], ecx
// 0083f39f  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0083f3a3  894804               mov dword ptr [eax + 4], ecx
// 0083f3a6  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0083f3aa  894808               mov dword ptr [eax + 8], ecx
// 0083f3ad  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0083f3b1  89480c               mov dword ptr [eax + 0xc], ecx
// 0083f3b4  8b4f08               mov ecx, dword ptr [edi + 8]
// 0083f3b7  ffd2                 call edx
// 0083f3b9  8b442428             mov eax, dword ptr [esp + 0x28]
// 0083f3bd  83c002               add eax, 2
// 0083f3c0  0106                 add dword ptr [esi], eax
// 0083f3c2  8b5500               mov edx, dword ptr [ebp]
// 0083f3c5  8b4324               mov eax, dword ptr [ebx + 0x24]
// 0083f3c8  8b5238               mov edx, dword ptr [edx + 0x38]
// 0083f3cb  50                   push eax
// 0083f3cc  8bcd                 mov ecx, ebp
// 0083f3ce  ffd2                 call edx
// 0083f3d0  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 0083f3d3  8b4500               mov eax, dword ptr [ebp]
// 0083f3d6  8b5030               mov edx, dword ptr [eax + 0x30]
// 0083f3d9  51                   push ecx
// 0083f3da  8bcd                 mov ecx, ebp
// 0083f3dc  ffd2                 call edx
// 0083f3de  8944241c             mov dword ptr [esp + 0x1c], eax
// 0083f3e2  8b4328               mov eax, dword ptr [ebx + 0x28]
// 0083f3e5  83f8ff               cmp eax, -1
// 0083f3e8  7515                 jne 0x83f3ff
// 0083f3ea  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0083f3ee  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 0083f3f4  83f8ff               cmp eax, -1
// 0083f3f7  7506                 jne 0x83f3ff
// 0083f3f9  8b818c000000         mov eax, dword ptr [ecx + 0x8c]
// 0083f3ff  8b5500               mov edx, dword ptr [ebp]
// 0083f402  50                   push eax
// 0083f403  8b4234               mov eax, dword ptr [edx + 0x34]
// 0083f406  8bcd                 mov ecx, ebp
// 0083f408  ffd0                 call eax
// 0083f40a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0083f40e  83796c00             cmp dword ptr [ecx + 0x6c], 0
// 0083f412  7410                 je 0x83f424
// 0083f414  8b11                 mov edx, dword ptr [ecx]
// 0083f416  8b8210010000         mov eax, dword ptr [edx + 0x110]
// 0083f41c  56                   push esi
// 0083f41d  57                   push edi
// 0083f41e  ffd0                 call eax
// 0083f420  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0083f424  837b3cff             cmp dword ptr [ebx + 0x3c], -1
// 0083f428  7513                 jne 0x83f43d
// 0083f42a  8b11                 mov edx, dword ptr [ecx]
// 0083f42c  8b82cc000000         mov eax, dword ptr [edx + 0xcc]
// 0083f432  ffd0                 call eax
// 0083f434  83f8ff               cmp eax, -1
// 0083f437  7427                 je 0x83f460
// 0083f439  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0083f43d  8b433c               mov eax, dword ptr [ebx + 0x3c]
// 0083f440  83f8ff               cmp eax, -1
// 0083f443  750a                 jne 0x83f44f
// 0083f445  8b11                 mov edx, dword ptr [ecx]
// 0083f447  8b82cc000000         mov eax, dword ptr [edx + 0xcc]
// 0083f44d  ffd0                 call eax
// 0083f44f  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0083f453  8b11                 mov edx, dword ptr [ecx]
// 0083f455  50                   push eax
// 0083f456  8b82bc000000         mov eax, dword ptr [edx + 0xbc]
// 0083f45c  56                   push esi
// 0083f45d  57                   push edi
// 0083f45e  ffd0                 call eax
// 0083f460  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0083f464  8b11                 mov edx, dword ptr [ecx]
// 0083f466  8b36                 mov esi, dword ptr [esi]
// 0083f468  8b425c               mov eax, dword ptr [edx + 0x5c]
// 0083f46b  2b742424             sub esi, dword ptr [esp + 0x24]
// 0083f46f  53                   push ebx
// 0083f470  57                   push edi
// 0083f471  ffd0                 call eax
// 0083f473  8d4c2428             lea ecx, [esp + 0x28]
// 0083f477  51                   push ecx
// 0083f478  8d7b2c               lea edi, [ebx + 0x2c]
// 0083f47b  8bcf                 mov ecx, edi
// 0083f47d  ff15a826a400         call dword ptr [0xa426a8]
// 0083f483  50                   push eax
// 0083f484  8bcf                 mov ecx, edi
// 0083f486  ff15c82da400         call dword ptr [0xa42dc8]
// 0083f48c  8b5508               mov edx, dword ptr [ebp + 8]
// 0083f48f  50                   push eax
// 0083f490  52                   push edx
// 0083f491  ff153801a400         call dword ptr [0xa40138]
// 0083f497  8b442428             mov eax, dword ptr [esp + 0x28]
// 0083f49b  8b5500               mov edx, dword ptr [ebp]
// 0083f49e  8b5230               mov edx, dword ptr [edx + 0x30]
// 0083f4a1  8d743004             lea esi, [eax + esi + 4]
// 0083f4a5  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0083f4a9  50                   push eax
// 0083f4aa  8bcd                 mov ecx, ebp
// 0083f4ac  ffd2                 call edx
// 0083f4ae  8bcb                 mov ecx, ebx
// 0083f4b0  e825b1fcff           call 0x80a5da
// 0083f4b5  837d0c00             cmp dword ptr [ebp + 0xc], 0
// 0083f4b9  7509                 jne 0x83f4c4
// 0083f4bb  6a00                 push 0
// 0083f4bd  8bcd                 mov ecx, ebp
// 0083f4bf  e870d31800           call 0x9cc834
// 0083f4c4  8d4c2430             lea ecx, [esp + 0x30]
// 0083f4c8  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 0083f4d0  c7442430402aac00     mov dword ptr [esp + 0x30], 0xac2a40
// 0083f4d8  e85344bdff           call 0x413930
// 0083f4dd  8bc6                 mov eax, esi
// 0083f4df  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0083f4e3  64890d00000000       mov dword ptr fs:[0], ecx
// 0083f4ea  59                   pop ecx
// 0083f4eb  5f                   pop edi
// 0083f4ec  5e                   pop esi
// 0083f4ed  5d                   pop ebp
// 0083f4ee  5b                   pop ebx
// 0083f4ef  83c440               add esp, 0x40
// 0083f4f2  c20400               ret 4
// copied from an identical function in another client (function ?Draw@CXTPReportRecordItem@@UAEHPAUXTP_REPORTRECORDITEM_DRAWARGS@@@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportRecordItem.cpp