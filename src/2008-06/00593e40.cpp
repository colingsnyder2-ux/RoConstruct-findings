// roc 2008-06 00593e40  unit: boost::Vrecursive_mutex::?$sp_counted_impl_p  size: 294 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00593e40
//
// 00593e40  6aff                 push -1
// 00593e42  68231f7d00           push 0x7d1f23
// 00593e47  64a100000000         mov eax, dword ptr fs:[0]
// 00593e4d  50                   push eax
// 00593e4e  64892500000000       mov dword ptr fs:[0], esp
// 00593e55  83ec14               sub esp, 0x14
// 00593e58  53                   push ebx
// 00593e59  55                   push ebp
// 00593e5a  56                   push esi
// 00593e5b  8bf1                 mov esi, ecx
// 00593e5d  c706c8eb8000         mov dword ptr [esi], 0x80ebc8
// 00593e63  a16c5c9700           mov eax, dword ptr [0x975c6c]
// 00593e68  894604               mov dword ptr [esi + 4], eax
// 00593e6b  8b0d705c9700         mov ecx, dword ptr [0x975c70]
// 00593e71  8bc1                 mov eax, ecx
// 00593e73  33db                 xor ebx, ebx
// 00593e75  8974240c             mov dword ptr [esp + 0xc], esi
// 00593e79  894e08               mov dword ptr [esi + 8], ecx
// 00593e7c  3bc3                 cmp eax, ebx
// 00593e7e  740c                 je 0x593e8c
// 00593e80  83c004               add eax, 4
// 00593e83  ba01000000           mov edx, 1
// 00593e88  f00fc110             lock xadd dword ptr [eax], edx
// 00593e8c  57                   push edi
// 00593e8d  8b6e04               mov ebp, dword ptr [esi + 4]
// 00593e90  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 00593e94  8bcd                 mov ecx, ebp
// 00593e96  895c242c             mov dword ptr [esp + 0x2c], ebx
// 00593e9a  895e0c               mov dword ptr [esi + 0xc], ebx
// 00593e9d  895e10               mov dword ptr [esi + 0x10], ebx
// 00593ea0  895e14               mov dword ptr [esi + 0x14], ebx
// 00593ea3  897e18               mov dword ptr [esi + 0x18], edi
// 00593ea6  895e1c               mov dword ptr [esi + 0x1c], ebx
// 00593ea9  896c2414             mov dword ptr [esp + 0x14], ebp
// 00593ead  e82e0e0000           call 0x594ce0
// 00593eb2  c644241801           mov byte ptr [esp + 0x18], 1
// 00593eb7  8d44241c             lea eax, [esp + 0x1c]
// 00593ebb  57                   push edi
// 00593ebc  50                   push eax
// 00593ebd  c644243401           mov byte ptr [esp + 0x34], 1
// 00593ec2  e8e9fdffff           call 0x593cb0
// 00593ec7  8b08                 mov ecx, dword ptr [eax]
// 00593ec9  8b442428             mov eax, dword ptr [esp + 0x28]
// 00593ecd  83c408               add esp, 8
// 00593ed0  894e0c               mov dword ptr [esi + 0xc], ecx
// 00593ed3  3bc3                 cmp eax, ebx
// 00593ed5  742c                 je 0x593f03
// 00593ed7  8bf8                 mov edi, eax
// 00593ed9  83c004               add eax, 4
// 00593edc  83caff               or edx, 0xffffffff
// 00593edf  f00fc110             lock xadd dword ptr [eax], edx
// 00593ee3  751e                 jne 0x593f03
// 00593ee5  8b07                 mov eax, dword ptr [edi]
// 00593ee7  8b5004               mov edx, dword ptr [eax + 4]
// 00593eea  8bcf                 mov ecx, edi
// 00593eec  ffd2                 call edx
// 00593eee  8d4708               lea eax, [edi + 8]
// 00593ef1  83c9ff               or ecx, 0xffffffff
// 00593ef4  f00fc108             lock xadd dword ptr [eax], ecx
// 00593ef8  7509                 jne 0x593f03
// 00593efa  8b17                 mov edx, dword ptr [edi]
// 00593efc  8b4208               mov eax, dword ptr [edx + 8]
// 00593eff  8bcf                 mov ecx, edi
// 00593f01  ffd0                 call eax
// 00593f03  8b460c               mov eax, dword ptr [esi + 0xc]
// 00593f06  5f                   pop edi
// 00593f07  3bc3                 cmp eax, ebx
// 00593f09  7419                 je 0x593f24
// 00593f0b  8b00                 mov eax, dword ptr [eax]
// 00593f0d  3bc3                 cmp eax, ebx
// 00593f0f  7408                 je 0x593f19
// 00593f11  894614               mov dword ptr [esi + 0x14], eax
// 00593f14  897010               mov dword ptr [eax + 0x10], esi
// 00593f17  eb03                 jmp 0x593f1c
// 00593f19  895e14               mov dword ptr [esi + 0x14], ebx
// 00593f1c  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00593f1f  895e10               mov dword ptr [esi + 0x10], ebx
// 00593f22  8931                 mov dword ptr [ecx], esi
// 00593f24  8b4618               mov eax, dword ptr [esi + 0x18]
// 00593f27  3bc3                 cmp eax, ebx
// 00593f29  741a                 je 0x593f45
// 00593f2b  50                   push eax
// 00593f2c  e8ffe40700           call 0x612430
// 00593f31  8b5618               mov edx, dword ptr [esi + 0x18]
// 00593f34  68f0d8ffff           push 0xffffd8f0
// 00593f39  52                   push edx
// 00593f3a  e881d10700           call 0x6110c0
// 00593f3f  83c40c               add esp, 0xc
// 00593f42  89461c               mov dword ptr [esi + 0x1c], eax
// 00593f45  8bcd                 mov ecx, ebp
// 00593f47  885c2428             mov byte ptr [esp + 0x28], bl
// 00593f4b  e8b00d0000           call 0x594d00
// 00593f50  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00593f54  8bc6                 mov eax, esi
// 00593f56  5e                   pop esi
// 00593f57  5d                   pop ebp
// 00593f58  5b                   pop ebx
// 00593f59  64890d00000000       mov dword ptr fs:[0], ecx
// 00593f60  83c420               add esp, 0x20
// 00593f63  c20400               ret 4
// library rbxgs/script\ThreadRef.cpp (function ??0ThreadRef@Lua@RBX@@QAE@PAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ThreadRef.cpp
