// roc 2007-08 0056c8f0  unit: RBX::Lua::FunctionRef  size: 294 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056c8f0
//
// 0056c8f0  6aff                 push -1
// 0056c8f2  68c3487500           push 0x7548c3
// 0056c8f7  64a100000000         mov eax, dword ptr fs:[0]
// 0056c8fd  50                   push eax
// 0056c8fe  64892500000000       mov dword ptr fs:[0], esp
// 0056c905  83ec14               sub esp, 0x14
// 0056c908  53                   push ebx
// 0056c909  55                   push ebp
// 0056c90a  56                   push esi
// 0056c90b  8bf1                 mov esi, ecx
// 0056c90d  c70600727800         mov dword ptr [esi], 0x787200
// 0056c913  a1f8238c00           mov eax, dword ptr [0x8c23f8]
// 0056c918  894604               mov dword ptr [esi + 4], eax
// 0056c91b  8b0dfc238c00         mov ecx, dword ptr [0x8c23fc]
// 0056c921  8bc1                 mov eax, ecx
// 0056c923  33db                 xor ebx, ebx
// 0056c925  3bc3                 cmp eax, ebx
// 0056c927  8974240c             mov dword ptr [esp + 0xc], esi
// 0056c92b  894e08               mov dword ptr [esi + 8], ecx
// 0056c92e  740c                 je 0x56c93c
// 0056c930  83c004               add eax, 4
// 0056c933  ba01000000           mov edx, 1
// 0056c938  f00fc110             lock xadd dword ptr [eax], edx
// 0056c93c  57                   push edi
// 0056c93d  8b6e04               mov ebp, dword ptr [esi + 4]
// 0056c940  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0056c944  8bcd                 mov ecx, ebp
// 0056c946  895c242c             mov dword ptr [esp + 0x2c], ebx
// 0056c94a  895e0c               mov dword ptr [esi + 0xc], ebx
// 0056c94d  895e10               mov dword ptr [esi + 0x10], ebx
// 0056c950  895e14               mov dword ptr [esi + 0x14], ebx
// 0056c953  897e18               mov dword ptr [esi + 0x18], edi
// 0056c956  895e1c               mov dword ptr [esi + 0x1c], ebx
// 0056c959  896c2414             mov dword ptr [esp + 0x14], ebp
// 0056c95d  e8ee8d1b00           call 0x725750
// 0056c962  c644241801           mov byte ptr [esp + 0x18], 1
// 0056c967  8d44241c             lea eax, [esp + 0x1c]
// 0056c96b  57                   push edi
// 0056c96c  50                   push eax
// 0056c96d  c644243401           mov byte ptr [esp + 0x34], 1
// 0056c972  e899feffff           call 0x56c810
// 0056c977  8b08                 mov ecx, dword ptr [eax]
// 0056c979  8b442428             mov eax, dword ptr [esp + 0x28]
// 0056c97d  83c408               add esp, 8
// 0056c980  3bc3                 cmp eax, ebx
// 0056c982  894e0c               mov dword ptr [esi + 0xc], ecx
// 0056c985  742c                 je 0x56c9b3
// 0056c987  8bf8                 mov edi, eax
// 0056c989  83c004               add eax, 4
// 0056c98c  83caff               or edx, 0xffffffff
// 0056c98f  f00fc110             lock xadd dword ptr [eax], edx
// 0056c993  751e                 jne 0x56c9b3
// 0056c995  8b07                 mov eax, dword ptr [edi]
// 0056c997  8b5004               mov edx, dword ptr [eax + 4]
// 0056c99a  8bcf                 mov ecx, edi
// 0056c99c  ffd2                 call edx
// 0056c99e  8d4708               lea eax, [edi + 8]
// 0056c9a1  83c9ff               or ecx, 0xffffffff
// 0056c9a4  f00fc108             lock xadd dword ptr [eax], ecx
// 0056c9a8  7509                 jne 0x56c9b3
// 0056c9aa  8b17                 mov edx, dword ptr [edi]
// 0056c9ac  8b4208               mov eax, dword ptr [edx + 8]
// 0056c9af  8bcf                 mov ecx, edi
// 0056c9b1  ffd0                 call eax
// 0056c9b3  8b460c               mov eax, dword ptr [esi + 0xc]
// 0056c9b6  3bc3                 cmp eax, ebx
// 0056c9b8  5f                   pop edi
// 0056c9b9  7419                 je 0x56c9d4
// 0056c9bb  8b00                 mov eax, dword ptr [eax]
// 0056c9bd  3bc3                 cmp eax, ebx
// 0056c9bf  7408                 je 0x56c9c9
// 0056c9c1  894614               mov dword ptr [esi + 0x14], eax
// 0056c9c4  897010               mov dword ptr [eax + 0x10], esi
// 0056c9c7  eb03                 jmp 0x56c9cc
// 0056c9c9  895e14               mov dword ptr [esi + 0x14], ebx
// 0056c9cc  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0056c9cf  895e10               mov dword ptr [esi + 0x10], ebx
// 0056c9d2  8931                 mov dword ptr [ecx], esi
// 0056c9d4  8b4618               mov eax, dword ptr [esi + 0x18]
// 0056c9d7  3bc3                 cmp eax, ebx
// 0056c9d9  741a                 je 0x56c9f5
// 0056c9db  50                   push eax
// 0056c9dc  e8bf130500           call 0x5bdda0
// 0056c9e1  8b5618               mov edx, dword ptr [esi + 0x18]
// 0056c9e4  68f0d8ffff           push 0xffffd8f0
// 0056c9e9  52                   push edx
// 0056c9ea  e871230500           call 0x5bed60
// 0056c9ef  83c40c               add esp, 0xc
// 0056c9f2  89461c               mov dword ptr [esi + 0x1c], eax
// 0056c9f5  8bcd                 mov ecx, ebp
// 0056c9f7  885c2428             mov byte ptr [esp + 0x28], bl
// 0056c9fb  e8708d1b00           call 0x725770
// 0056ca00  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0056ca04  8bc6                 mov eax, esi
// 0056ca06  5e                   pop esi
// 0056ca07  5d                   pop ebp
// 0056ca08  5b                   pop ebx
// 0056ca09  64890d00000000       mov dword ptr fs:[0], ecx
// 0056ca10  83c420               add esp, 0x20
// 0056ca13  c20400               ret 4
// library rbxgs/script\ThreadRef.cpp (function ??0ThreadRef@Lua@RBX@@QAE@PAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ThreadRef.cpp
