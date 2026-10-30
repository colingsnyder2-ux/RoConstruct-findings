// from server: 100% by auto
// roc 2007-08 00629850  unit: RBX::AssemblyStage  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00629850
//
// 00629850  56                   push esi
// 00629851  57                   push edi
// 00629852  8bf8                 mov edi, eax
// 00629854  8bf1                 mov esi, ecx
// 00629856  57                   push edi
// 00629857  56                   push esi
// 00629858  e8a3f7ffff           call 0x629000
// 0062985d  8b07                 mov eax, dword ptr [edi]
// 0062985f  83c0ff               add eax, -1
// 00629862  83c408               add esp, 8
// 00629865  83f809               cmp eax, 9
// 00629868  7723                 ja 0x62988d
// 0062986a  0fb680d8986200       movzx eax, byte ptr [eax + 0x6298d8]
// 00629871  ff2485c8986200       jmp dword ptr [eax*4 + 0x6298c8]
// 00629878  83c8ff               or eax, 0xffffffff
// 0062987b  eb1c                 jmp 0x629899
// 0062987d  56                   push esi
// 0062987e  e88df6ffff           call 0x628f10
// 00629883  83c404               add esp, 4
// 00629886  eb11                 jmp 0x629899
// 00629888  8b4708               mov eax, dword ptr [edi + 8]
// 0062988b  eb0c                 jmp 0x629899
// 0062988d  53                   push ebx
// 0062988e  bb01000000           mov ebx, 1
// 00629893  e898feffff           call 0x629730
// 00629898  5b                   pop ebx
// 00629899  50                   push eax
// 0062989a  8d4f10               lea ecx, [edi + 0x10]
// 0062989d  51                   push ecx
// 0062989e  56                   push esi
// 0062989f  e87cefffff           call 0x628820
// 006298a4  8b4714               mov eax, dword ptr [edi + 0x14]
// 006298a7  8b5618               mov edx, dword ptr [esi + 0x18]
// 006298aa  50                   push eax
// 006298ab  8d4620               lea eax, [esi + 0x20]
// 006298ae  50                   push eax
// 006298af  56                   push esi
// 006298b0  89561c               mov dword ptr [esi + 0x1c], edx
// 006298b3  e868efffff           call 0x628820
// 006298b8  83c418               add esp, 0x18
// 006298bb  c74714ffffffff       mov dword ptr [edi + 0x14], 0xffffffff
// 006298c2  5f                   pop edi
// 006298c3  5e                   pop esi
// 006298c4  c3                   ret 
// 006298c5  8d4900               lea ecx, [ecx]
// 006298c8  7898                 js 0x629862
// 006298ca  6200                 bound eax, qword ptr [eax]
// 006298cc  7d98                 jge 0x629866
// 006298ce  6200                 bound eax, qword ptr [eax]
// 006298d0  889862008d98         mov byte ptr [eax - 0x6772ff9e], bl
// 006298d6  6200                 bound eax, qword ptr [eax]
// 006298d8  0001                 add byte ptr [ecx], al
// 006298da  0003                 add byte ptr [ebx], al
// 006298dc  0303                 add eax, dword ptr [ebx]
// 006298de  0303                 add eax, dword ptr [ebx]
// 006298e0  0302                 add eax, dword ptr [edx]
// library lua-5.1.4/lcode.c (function _luaK_goiffalse)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
