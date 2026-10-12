// roc 2008-06 005f9ae0  unit: UString_sink::?$stream_buffer  size: 326 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f9ae0
//
// 005f9ae0  64a100000000         mov eax, dword ptr fs:[0]
// 005f9ae6  6aff                 push -1
// 005f9ae8  68ec787d00           push 0x7d78ec
// 005f9aed  50                   push eax
// 005f9aee  64892500000000       mov dword ptr fs:[0], esp
// 005f9af5  83ec48               sub esp, 0x48
// 005f9af8  53                   push ebx
// 005f9af9  8bd9                 mov ebx, ecx
// 005f9afb  8b0b                 mov ecx, dword ptr [ebx]
// 005f9afd  f6412c01             test byte ptr [ecx + 0x2c], 1
// 005f9b01  7434                 je 0x5f9b37
// 005f9b03  68f80a8400           push 0x840af8
// 005f9b08  8d4c240c             lea ecx, [esp + 0xc]
// 005f9b0c  ff1558248000         call dword ptr [0x802458]
// 005f9b12  8d442408             lea eax, [esp + 8]
// 005f9b16  50                   push eax
// 005f9b17  8d4c2428             lea ecx, [esp + 0x28]
// 005f9b1b  c744245800000000     mov dword ptr [esp + 0x58], 0
// 005f9b23  e8f888e0ff           call 0x402420
// 005f9b28  6830668f00           push 0x8f6630
// 005f9b2d  8d4c2428             lea ecx, [esp + 0x28]
// 005f9b31  51                   push ecx
// 005f9b32  e8557a0a00           call 0x6a158c
// 005f9b37  83791800             cmp dword ptr [ecx + 0x18], 0
// 005f9b3b  740d                 je 0x5f9b4a
// 005f9b3d  e88e42f6ff           call 0x55ddd0
// 005f9b42  8b10                 mov edx, dword ptr [eax]
// 005f9b44  89542404             mov dword ptr [esp + 4], edx
// 005f9b48  eb08                 jmp 0x5f9b52
// 005f9b4a  c744240400000000     mov dword ptr [esp + 4], 0
// 005f9b52  56                   push esi
// 005f9b53  57                   push edi
// 005f9b54  8b7c2468             mov edi, dword ptr [esp + 0x68]
// 005f9b58  83ffff               cmp edi, -1
// 005f9b5b  7505                 jne 0x5f9b62
// 005f9b5d  bf00100000           mov edi, 0x1000
// 005f9b62  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 005f9b66  83feff               cmp esi, -1
// 005f9b69  7505                 jne 0x5f9b70
// 005f9b6b  8b03                 mov eax, dword ptr [ebx]
// 005f9b6d  8b7028               mov esi, dword ptr [eax + 0x28]
// 005f9b70  6a5c                 push 0x5c
// 005f9b72  e8a96d0a00           call 0x6a0920
// 005f9b77  83c404               add esp, 4
// 005f9b7a  89442468             mov dword ptr [esp + 0x68], eax
// 005f9b7e  c744245c01000000     mov dword ptr [esp + 0x5c], 1
// 005f9b86  85c0                 test eax, eax
// 005f9b88  7410                 je 0x5f9b9a
// 005f9b8a  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 005f9b8e  56                   push esi
// 005f9b8f  57                   push edi
// 005f9b90  51                   push ecx
// 005f9b91  8bc8                 mov ecx, eax
// 005f9b93  e868fcffff           call 0x5f9800
// 005f9b98  eb02                 jmp 0x5f9b9c
// 005f9b9a  33c0                 xor eax, eax
// 005f9b9c  55                   push ebp
// 005f9b9d  89442470             mov dword ptr [esp + 0x70], eax
// 005f9ba1  8b33                 mov esi, dword ptr [ebx]
// 005f9ba3  8b7e14               mov edi, dword ptr [esi + 0x14]
// 005f9ba6  8d54246c             lea edx, [esp + 0x6c]
// 005f9baa  8944246c             mov dword ptr [esp + 0x6c], eax
// 005f9bae  8b4704               mov eax, dword ptr [edi + 4]
// 005f9bb1  52                   push edx
// 005f9bb2  50                   push eax
// 005f9bb3  57                   push edi
// 005f9bb4  8bce                 mov ecx, esi
// 005f9bb6  c744246c02000000     mov dword ptr [esp + 0x6c], 2
// 005f9bbe  e8ed340500           call 0x64d0b0
// 005f9bc3  6a01                 push 1
// 005f9bc5  8bce                 mov ecx, esi
// 005f9bc7  8be8                 mov ebp, eax
// 005f9bc9  e8f28affff           call 0x5f26c0
// 005f9bce  8b742410             mov esi, dword ptr [esp + 0x10]
// 005f9bd2  896f04               mov dword ptr [edi + 4], ebp
// 005f9bd5  8b4504               mov eax, dword ptr [ebp + 4]
// 005f9bd8  8928                 mov dword ptr [eax], ebp
// 005f9bda  8b03                 mov eax, dword ptr [ebx]
// 005f9bdc  83482c03             or dword ptr [eax + 0x2c], 3
// 005f9be0  c744247000000000     mov dword ptr [esp + 0x70], 0
// 005f9be8  5d                   pop ebp
// 005f9be9  85f6                 test esi, esi
// 005f9beb  7413                 je 0x5f9c00
// 005f9bed  8b0b                 mov ecx, dword ptr [ebx]
// 005f9bef  8b3e                 mov edi, dword ptr [esi]
// 005f9bf1  e8da41f6ff           call 0x55ddd0
// 005f9bf6  8b08                 mov ecx, dword ptr [eax]
// 005f9bf8  8b5738               mov edx, dword ptr [edi + 0x38]
// 005f9bfb  51                   push ecx
// 005f9bfc  8bce                 mov ecx, esi
// 005f9bfe  ffd2                 call edx
// 005f9c00  8b1b                 mov ebx, dword ptr [ebx]
// 005f9c02  837b1c00             cmp dword ptr [ebx + 0x1c], 0
// 005f9c06  5f                   pop edi
// 005f9c07  5e                   pop esi
// 005f9c08  740a                 je 0x5f9c14
// 005f9c0a  8b4b1c               mov ecx, dword ptr [ebx + 0x1c]
// 005f9c0d  8b01                 mov eax, dword ptr [ecx]
// 005f9c0f  8b5004               mov edx, dword ptr [eax + 4]
// 005f9c12  ffd2                 call edx
// 005f9c14  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 005f9c18  5b                   pop ebx
// 005f9c19  64890d00000000       mov dword ptr fs:[0], ecx
// 005f9c20  83c454               add esp, 0x54
// 005f9c23  c20c00               ret 0xc
// library templates-2008-06-dll/roc_ndebug_iostreams.cpp (function ??$push_impl@V?$mode_adapter@Uoutput@iostreams@boost@@V?$basic_streambuf@DU?$char_traits@D@std@@@std@@@detail@iostreams@boost@@@?$chain_base@V?$chain@Uoutput@iostreams@boost@@DU?$char_traits@D@std@@V?$allocator@D@5@@iostreams@boost@@DU?$char_traits@D@std@@V?$allocator@D@5@Uoutput@23@@detail@iostreams@boost@@AAEXABV?$mode_adapter@Uoutput@iostreams@boost@@V?$basic_streambuf@DU?$char_traits@D@std@@@std@@@123@HH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_ndebug_iostreams.cpp
