// roc 2008-06 005b6fe0  unit: RBX::Soundscape::VSoundService::?$FactoryProduct  size: 216 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b6fe0
//
// 005b6fe0  64a100000000         mov eax, dword ptr fs:[0]
// 005b6fe6  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005b6fea  6aff                 push -1
// 005b6fec  68c1397d00           push 0x7d39c1
// 005b6ff1  50                   push eax
// 005b6ff2  64892500000000       mov dword ptr fs:[0], esp
// 005b6ff9  83ec4c               sub esp, 0x4c
// 005b6ffc  85c9                 test ecx, ecx
// 005b6ffe  0f84a5000000         je 0x5b70a9
// 005b7004  8bc1                 mov eax, ecx
// 005b7006  e8a5f5ffff           call 0x5b65b0
// 005b700b  50                   push eax
// 005b700c  51                   push ecx
// 005b700d  8d442410             lea eax, [esp + 0x10]
// 005b7011  68f8758300           push 0x8375f8
// 005b7016  50                   push eax
// 005b7017  e8f42af5ff           call 0x509b10
// 005b701c  8d4c2410             lea ecx, [esp + 0x10]
// 005b7020  51                   push ecx
// 005b7021  c744246800000000     mov dword ptr [esp + 0x68], 0
// 005b7029  e8f225fbff           call 0x569620
// 005b702e  83c414               add esp, 0x14
// 005b7031  837c242010           cmp dword ptr [esp + 0x20], 0x10
// 005b7036  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005b703a  c644245401           mov byte ptr [esp + 0x54], 1
// 005b703f  7304                 jae 0x5b7045
// 005b7041  8d4c240c             lea ecx, [esp + 0xc]
// 005b7045  8b00                 mov eax, dword ptr [eax]
// 005b7047  56                   push esi
// 005b7048  51                   push ecx
// 005b7049  6a02                 push 2
// 005b704b  50                   push eax
// 005b704c  e84f23fbff           call 0x5693a0
// 005b7051  8b742414             mov esi, dword ptr [esp + 0x14]
// 005b7055  83c40c               add esp, 0xc
// 005b7058  c644245800           mov byte ptr [esp + 0x58], 0
// 005b705d  85f6                 test esi, esi
// 005b705f  742a                 je 0x5b708b
// 005b7061  8d5604               lea edx, [esi + 4]
// 005b7064  83c8ff               or eax, 0xffffffff
// 005b7067  f00fc102             lock xadd dword ptr [edx], eax
// 005b706b  751e                 jne 0x5b708b
// 005b706d  8b16                 mov edx, dword ptr [esi]
// 005b706f  8b4204               mov eax, dword ptr [edx + 4]
// 005b7072  8bce                 mov ecx, esi
// 005b7074  ffd0                 call eax
// 005b7076  8d4e08               lea ecx, [esi + 8]
// 005b7079  83caff               or edx, 0xffffffff
// 005b707c  f00fc111             lock xadd dword ptr [ecx], edx
// 005b7080  7509                 jne 0x5b708b
// 005b7082  8b06                 mov eax, dword ptr [esi]
// 005b7084  8b5008               mov edx, dword ptr [eax + 8]
// 005b7087  8bce                 mov ecx, esi
// 005b7089  ffd2                 call edx
// 005b708b  8d44240c             lea eax, [esp + 0xc]
// 005b708f  50                   push eax
// 005b7090  8d4c242c             lea ecx, [esp + 0x2c]
// 005b7094  e8b72ce5ff           call 0x409d50
// 005b7099  68c81b8d00           push 0x8d1bc8
// 005b709e  8d4c242c             lea ecx, [esp + 0x2c]
// 005b70a2  51                   push ecx
// 005b70a3  e8e4a40e00           call 0x6a158c
// 005b70a8  5e                   pop esi
// 005b70a9  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 005b70ad  64890d00000000       mov dword ptr fs:[0], ecx
// 005b70b4  83c458               add esp, 0x58
// 005b70b7  c3                   ret 
// library rbxgs/roc_fmod_error_native_2885bddfd71d07ce.cpp (function ?checkResult@@YAXW4FMOD_RESULT@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_fmod_error_native_2885bddfd71d07ce.cpp
