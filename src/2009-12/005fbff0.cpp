// roc 2009-12 005fbff0  unit: G3D::TextInput::WrongSymbol  size: 283 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005fbff0
//
// 005fbff0  6aff                 push -1
// 005fbff2  6878f99300           push 0x93f978
// 005fbff7  64a100000000         mov eax, dword ptr fs:[0]
// 005fbffd  50                   push eax
// 005fbffe  64892500000000       mov dword ptr fs:[0], esp
// 005fc005  83ec34               sub esp, 0x34
// 005fc008  53                   push ebx
// 005fc009  56                   push esi
// 005fc00a  33db                 xor ebx, ebx
// 005fc00c  8bf1                 mov esi, ecx
// 005fc00e  895c2408             mov dword ptr [esp + 8], ebx
// 005fc012  8b461c               mov eax, dword ptr [esi + 0x1c]
// 005fc015  57                   push edi
// 005fc016  3bc3                 cmp eax, ebx
// 005fc018  0f86cd000000         jbe 0x5fc0eb
// 005fc01e  8b7e18               mov edi, dword ptr [esi + 0x18]
// 005fc021  03c7                 add eax, edi
// 005fc023  3bf8                 cmp edi, eax
// 005fc025  7606                 jbe 0x5fc02d
// 005fc027  ff1560b79800         call dword ptr [0x98b760]
// 005fc02d  8b0e                 mov ecx, dword ptr [esi]
// 005fc02f  894c240c             mov dword ptr [esp + 0xc], ecx
// 005fc033  8d4c240c             lea ecx, [esp + 0xc]
// 005fc037  897c2410             mov dword ptr [esp + 0x10], edi
// 005fc03b  e840060700           call 0x66c680
// 005fc040  8bf8                 mov edi, eax
// 005fc042  57                   push edi
// 005fc043  8d4c2418             lea ecx, [esp + 0x18]
// 005fc047  ff15f0b69800         call dword ptr [0x98b6f0]
// 005fc04d  8b571c               mov edx, dword ptr [edi + 0x1c]
// 005fc050  89542430             mov dword ptr [esp + 0x30], edx
// 005fc054  8b4720               mov eax, dword ptr [edi + 0x20]
// 005fc057  89442434             mov dword ptr [esp + 0x34], eax
// 005fc05b  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 005fc05e  894c2438             mov dword ptr [esp + 0x38], ecx
// 005fc062  8b5728               mov edx, dword ptr [edi + 0x28]
// 005fc065  8954243c             mov dword ptr [esp + 0x3c], edx
// 005fc069  83cfff               or edi, 0xffffffff
// 005fc06c  895c2448             mov dword ptr [esp + 0x48], ebx
// 005fc070  395e1c               cmp dword ptr [esi + 0x1c], ebx
// 005fc073  7425                 je 0x5fc09a
// 005fc075  8b4618               mov eax, dword ptr [esi + 0x18]
// 005fc078  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 005fc07b  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 005fc07e  ff15e4b69800         call dword ptr [0x98b6e4]
// 005fc084  ff4618               inc dword ptr [esi + 0x18]
// 005fc087  8b4618               mov eax, dword ptr [esi + 0x18]
// 005fc08a  394614               cmp dword ptr [esi + 0x14], eax
// 005fc08d  7703                 ja 0x5fc092
// 005fc08f  895e18               mov dword ptr [esi + 0x18], ebx
// 005fc092  017e1c               add dword ptr [esi + 0x1c], edi
// 005fc095  7503                 jne 0x5fc09a
// 005fc097  895e18               mov dword ptr [esi + 0x18], ebx
// 005fc09a  8b742450             mov esi, dword ptr [esp + 0x50]
// 005fc09e  8d542414             lea edx, [esp + 0x14]
// 005fc0a2  52                   push edx
// 005fc0a3  8bce                 mov ecx, esi
// 005fc0a5  ff15f0b69800         call dword ptr [0x98b6f0]
// 005fc0ab  8b442430             mov eax, dword ptr [esp + 0x30]
// 005fc0af  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005fc0b3  8b542438             mov edx, dword ptr [esp + 0x38]
// 005fc0b7  89461c               mov dword ptr [esi + 0x1c], eax
// 005fc0ba  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 005fc0be  894e20               mov dword ptr [esi + 0x20], ecx
// 005fc0c1  8d4c2414             lea ecx, [esp + 0x14]
// 005fc0c5  895624               mov dword ptr [esi + 0x24], edx
// 005fc0c8  894628               mov dword ptr [esi + 0x28], eax
// 005fc0cb  897c2448             mov dword ptr [esp + 0x48], edi
// 005fc0cf  ff15e4b69800         call dword ptr [0x98b6e4]
// 005fc0d5  5f                   pop edi
// 005fc0d6  8bc6                 mov eax, esi
// 005fc0d8  5e                   pop esi
// 005fc0d9  5b                   pop ebx
// 005fc0da  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005fc0de  64890d00000000       mov dword ptr fs:[0], ecx
// 005fc0e5  83c440               add esp, 0x40
// 005fc0e8  c20400               ret 4
// 005fc0eb  8b7c2450             mov edi, dword ptr [esp + 0x50]
// 005fc0ef  57                   push edi
// 005fc0f0  e81bf1ffff           call 0x5fb210
// 005fc0f5  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 005fc0f9  8bc7                 mov eax, edi
// 005fc0fb  5f                   pop edi
// 005fc0fc  5e                   pop esi
// 005fc0fd  5b                   pop ebx
// 005fc0fe  64890d00000000       mov dword ptr fs:[0], ecx
// 005fc105  83c440               add esp, 0x40
// 005fc108  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ?read@TextInput@G3D@@QAE?AVToken@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
