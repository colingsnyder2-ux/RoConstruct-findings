// roc 2008-06 0062b1c0  unit: RBX::Explosion  size: 456 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062b1c0
//
// 0062b1c0  6aff                 push -1
// 0062b1c2  6860997d00           push 0x7d9960
// 0062b1c7  64a100000000         mov eax, dword ptr fs:[0]
// 0062b1cd  50                   push eax
// 0062b1ce  64892500000000       mov dword ptr fs:[0], esp
// 0062b1d5  83ec1c               sub esp, 0x1c
// 0062b1d8  53                   push ebx
// 0062b1d9  55                   push ebp
// 0062b1da  56                   push esi
// 0062b1db  57                   push edi
// 0062b1dc  8bf1                 mov esi, ecx
// 0062b1de  33db                 xor ebx, ebx
// 0062b1e0  56                   push esi
// 0062b1e1  8d4c241c             lea ecx, [esp + 0x1c]
// 0062b1e5  895c2438             mov dword ptr [esp + 0x38], ebx
// 0062b1e9  e872f5f3ff           call 0x56a760
// 0062b1ee  d9442448             fld dword ptr [esp + 0x48]
// 0062b1f2  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0062b1f6  83ec0c               sub esp, 0xc
// 0062b1f9  8bc4                 mov eax, esp
// 0062b1fb  d95c2408             fstp dword ptr [esp + 8]
// 0062b1ff  8908                 mov dword ptr [eax], ecx
// 0062b201  8b542450             mov edx, dword ptr [esp + 0x50]
// 0062b205  895004               mov dword ptr [eax + 4], edx
// 0062b208  8b442450             mov eax, dword ptr [esp + 0x50]
// 0062b20c  c644244001           mov byte ptr [esp + 0x40], 1
// 0062b211  89642454             mov dword ptr [esp + 0x54], esp
// 0062b215  3bc3                 cmp eax, ebx
// 0062b217  740c                 je 0x62b225
// 0062b219  83c004               add eax, 4
// 0062b21c  b901000000           mov ecx, 1
// 0062b221  f00fc108             lock xadd dword ptr [eax], ecx
// 0062b225  8d4c242c             lea ecx, [esp + 0x2c]
// 0062b229  e822efffff           call 0x62a150
// 0062b22e  885c2410             mov byte ptr [esp + 0x10], bl
// 0062b232  8b442418             mov eax, dword ptr [esp + 0x18]
// 0062b236  8b36                 mov esi, dword ptr [esi]
// 0062b238  8b7e58               mov edi, dword ptr [esi + 0x58]
// 0062b23b  83ec40               sub esp, 0x40
// 0062b23e  89642454             mov dword ptr [esp + 0x54], esp
// 0062b242  8bdc                 mov ebx, esp
// 0062b244  8d542450             lea edx, [esp + 0x50]
// 0062b248  52                   push edx
// 0062b249  8be8                 mov ebp, eax
// 0062b24b  8d442464             lea eax, [esp + 0x64]
// 0062b24f  50                   push eax
// 0062b250  83ec1c               sub esp, 0x1c
// 0062b253  8bcc                 mov ecx, esp
// 0062b255  89642478             mov dword ptr [esp + 0x78], esp
// 0062b259  51                   push ecx
// 0062b25a  8d4e08               lea ecx, [esi + 8]
// 0062b25d  c684249c00000003     mov byte ptr [esp + 0x9c], 3
// 0062b265  83c704               add edi, 4
// 0062b268  e84361f4ff           call 0x5713b0
// 0062b26d  83ec1c               sub esp, 0x1c
// 0062b270  8bd4                 mov edx, esp
// 0062b272  89a42494000000       mov dword ptr [esp + 0x94], esp
// 0062b279  52                   push edx
// 0062b27a  8d4d08               lea ecx, [ebp + 8]
// 0062b27d  e82e61f4ff           call 0x5713b0
// 0062b282  8bcb                 mov ecx, ebx
// 0062b284  e81756e6ff           call 0x4908a0
// 0062b289  83ec40               sub esp, 0x40
// 0062b28c  89a42494000000       mov dword ptr [esp + 0x94], esp
// 0062b293  8bdc                 mov ebx, esp
// 0062b295  8d842490000000       lea eax, [esp + 0x90]
// 0062b29c  50                   push eax
// 0062b29d  8d8c24a4000000       lea ecx, [esp + 0xa4]
// 0062b2a4  51                   push ecx
// 0062b2a5  83ec1c               sub esp, 0x1c
// 0062b2a8  8bd4                 mov edx, esp
// 0062b2aa  89a424b8000000       mov dword ptr [esp + 0xb8], esp
// 0062b2b1  52                   push edx
// 0062b2b2  8d4e08               lea ecx, [esi + 8]
// 0062b2b5  e8f660f4ff           call 0x5713b0
// 0062b2ba  83ec1c               sub esp, 0x1c
// 0062b2bd  8bc4                 mov eax, esp
// 0062b2bf  89a424d4000000       mov dword ptr [esp + 0xd4], esp
// 0062b2c6  8bcd                 mov ecx, ebp
// 0062b2c8  50                   push eax
// 0062b2c9  83c108               add ecx, 8
// 0062b2cc  e8af60f4ff           call 0x571380
// 0062b2d1  8bcb                 mov ecx, ebx
// 0062b2d3  e8c855e6ff           call 0x4908a0
// 0062b2d8  8bac24bc000000       mov ebp, dword ptr [esp + 0xbc]
// 0062b2df  55                   push ebp
// 0062b2e0  8bcf                 mov ecx, edi
// 0062b2e2  e8a9fdffff           call 0x62b090
// 0062b2e7  33db                 xor ebx, ebx
// 0062b2e9  385c2410             cmp byte ptr [esp + 0x10], bl
// 0062b2ed  7404                 je 0x62b2f3
// 0062b2ef  885c2410             mov byte ptr [esp + 0x10], bl
// 0062b2f3  8b742424             mov esi, dword ptr [esp + 0x24]
// 0062b2f7  c644243401           mov byte ptr [esp + 0x34], 1
// 0062b2fc  3bf3                 cmp esi, ebx
// 0062b2fe  742a                 je 0x62b32a
// 0062b300  8d4e04               lea ecx, [esi + 4]
// 0062b303  83caff               or edx, 0xffffffff
// 0062b306  f00fc111             lock xadd dword ptr [ecx], edx
// 0062b30a  751e                 jne 0x62b32a
// 0062b30c  8b06                 mov eax, dword ptr [esi]
// 0062b30e  8b5004               mov edx, dword ptr [eax + 4]
// 0062b311  8bce                 mov ecx, esi
// 0062b313  ffd2                 call edx
// 0062b315  8d4608               lea eax, [esi + 8]
// 0062b318  83c9ff               or ecx, 0xffffffff
// 0062b31b  f00fc108             lock xadd dword ptr [eax], ecx
// 0062b31f  7509                 jne 0x62b32a
// 0062b321  8b16                 mov edx, dword ptr [esi]
// 0062b323  8b4208               mov eax, dword ptr [edx + 8]
// 0062b326  8bce                 mov ecx, esi
// 0062b328  ffd0                 call eax
// 0062b32a  8d4c2418             lea ecx, [esp + 0x18]
// 0062b32e  885c2434             mov byte ptr [esp + 0x34], bl
// 0062b332  e819f3f3ff           call 0x56a650
// 0062b337  8b742444             mov esi, dword ptr [esp + 0x44]
// 0062b33b  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 0062b343  3bf3                 cmp esi, ebx
// 0062b345  742a                 je 0x62b371
// 0062b347  8d4e04               lea ecx, [esi + 4]
// 0062b34a  83caff               or edx, 0xffffffff
// 0062b34d  f00fc111             lock xadd dword ptr [ecx], edx
// 0062b351  751e                 jne 0x62b371
// 0062b353  8b06                 mov eax, dword ptr [esi]
// 0062b355  8b5004               mov edx, dword ptr [eax + 4]
// 0062b358  8bce                 mov ecx, esi
// 0062b35a  ffd2                 call edx
// 0062b35c  8d4608               lea eax, [esi + 8]
// 0062b35f  83c9ff               or ecx, 0xffffffff
// 0062b362  f00fc108             lock xadd dword ptr [eax], ecx
// 0062b366  7509                 jne 0x62b371
// 0062b368  8b16                 mov edx, dword ptr [esi]
// 0062b36a  8b4208               mov eax, dword ptr [edx + 8]
// 0062b36d  8bce                 mov ecx, esi
// 0062b36f  ffd0                 call eax
// 0062b371  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0062b375  5f                   pop edi
// 0062b376  5e                   pop esi
// 0062b377  8bc5                 mov eax, ebp
// 0062b379  5d                   pop ebp
// 0062b37a  64890d00000000       mov dword ptr fs:[0], ecx
// 0062b381  5b                   pop ebx
// 0062b382  83c428               add esp, 0x28
// 0062b385  c21000               ret 0x10
// library rbxgs/roc_unit_5c2d9ebf33ac82fd.cpp (function ??R?$signal2@XV?$shared_ptr@VInstance@RBX@@@boost@@MU?$last_value@X@2@HU?$less@H@std@@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@M@ZV?$allocator@X@std@@@2@@boost@@QAE?AUunusable@?$last_value@X@1@V?$shared_ptr@VInstance@RBX@@@1@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_5c2d9ebf33ac82fd.cpp
