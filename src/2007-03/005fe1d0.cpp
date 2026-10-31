// roc 2007-03 005fe1d0  unit: seg_005f0000  size: 308 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005fe1d0
//
// 005fe1d0  83ec08               sub esp, 8
// 005fe1d3  53                   push ebx
// 005fe1d4  8b5f30               mov ebx, dword ptr [edi + 0x30]
// 005fe1d7  55                   push ebp
// 005fe1d8  56                   push esi
// 005fe1d9  8b33                 mov esi, dword ptr [ebx]
// 005fe1db  33ed                 xor ebp, ebp
// 005fe1dd  c6464a00             mov byte ptr [esi + 0x4a], 0
// 005fe1e1  837f1029             cmp dword ptr [edi + 0x10], 0x29
// 005fe1e5  895c2410             mov dword ptr [esp + 0x10], ebx
// 005fe1e9  8974240c             mov dword ptr [esp + 0xc], esi
// 005fe1ed  0f84e5000000         je 0x5fe2d8
// 005fe1f3  eb0b                 jmp 0x5fe200
// 005fe1f5  8da42400000000       lea esp, [esp]
// 005fe1fc  8d642400             lea esp, [esp]
// 005fe200  8b4710               mov eax, dword ptr [edi + 0x10]
// 005fe203  2d17010000           sub eax, 0x117
// 005fe208  0f84a3000000         je 0x5fe2b1
// 005fe20e  83e806               sub eax, 6
// 005fe211  7413                 je 0x5fe226
// 005fe213  683c057c00           push 0x7c053c
// 005fe218  57                   push edi
// 005fe219  e8522d0000           call 0x600f70
// 005fe21e  83c408               add esp, 8
// 005fe221  e998000000           jmp 0x5fe2be
// 005fe226  8b5f18               mov ebx, dword ptr [edi + 0x18]
// 005fe229  57                   push edi
// 005fe22a  e871410000           call 0x6023a0
// 005fe22f  8b7730               mov esi, dword ptr [edi + 0x30]
// 005fe232  0fb64632             movzx eax, byte ptr [esi + 0x32]
// 005fe236  8d4c2801             lea ecx, [eax + ebp + 1]
// 005fe23a  83c404               add esp, 4
// 005fe23d  81f9c8000000         cmp ecx, 0xc8
// 005fe243  7e47                 jle 0x5fe28c
// 005fe245  8b16                 mov edx, dword ptr [esi]
// 005fe247  8b423c               mov eax, dword ptr [edx + 0x3c]
// 005fe24a  85c0                 test eax, eax
// 005fe24c  68cc047c00           push 0x7c04cc
// 005fe251  68c8000000           push 0xc8
// 005fe256  7513                 jne 0x5fe26b
// 005fe258  8b4610               mov eax, dword ptr [esi + 0x10]
// 005fe25b  6860047c00           push 0x7c0460
// 005fe260  50                   push eax
// 005fe261  e8daa5ffff           call 0x5f8840
// 005fe266  83c410               add esp, 0x10
// 005fe269  eb12                 jmp 0x5fe27d
// 005fe26b  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 005fe26e  50                   push eax
// 005fe26f  6838047c00           push 0x7c0438
// 005fe274  51                   push ecx
// 005fe275  e8c6a5ffff           call 0x5f8840
// 005fe27a  83c414               add esp, 0x14
// 005fe27d  8b560c               mov edx, dword ptr [esi + 0xc]
// 005fe280  6a00                 push 0
// 005fe282  50                   push eax
// 005fe283  52                   push edx
// 005fe284  e8472c0000           call 0x600ed0
// 005fe289  83c40c               add esp, 0xc
// 005fe28c  53                   push ebx
// 005fe28d  57                   push edi
// 005fe28e  e82df3ffff           call 0x5fd5c0
// 005fe293  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 005fe297  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 005fe29b  03cd                 add ecx, ebp
// 005fe29d  83c408               add esp, 8
// 005fe2a0  6689844eac000000     mov word ptr [esi + ecx*2 + 0xac], ax
// 005fe2a8  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005fe2ac  83c501               add ebp, 1
// 005fe2af  eb0d                 jmp 0x5fe2be
// 005fe2b1  57                   push edi
// 005fe2b2  e8e9400000           call 0x6023a0
// 005fe2b7  83c404               add esp, 4
// 005fe2ba  804e4a02             or byte ptr [esi + 0x4a], 2
// 005fe2be  807e4a00             cmp byte ptr [esi + 0x4a], 0
// 005fe2c2  7514                 jne 0x5fe2d8
// 005fe2c4  837f102c             cmp dword ptr [edi + 0x10], 0x2c
// 005fe2c8  750e                 jne 0x5fe2d8
// 005fe2ca  57                   push edi
// 005fe2cb  e8d0400000           call 0x6023a0
// 005fe2d0  83c404               add esp, 4
// 005fe2d3  e928ffffff           jmp 0x5fe200
// 005fe2d8  8bd5                 mov edx, ebp
// 005fe2da  8bc7                 mov eax, edi
// 005fe2dc  e88ff3ffff           call 0x5fd670
// 005fe2e1  8a564a               mov dl, byte ptr [esi + 0x4a]
// 005fe2e4  8a4332               mov al, byte ptr [ebx + 0x32]
// 005fe2e7  80e201               and dl, 1
// 005fe2ea  2ac2                 sub al, dl
// 005fe2ec  884649               mov byte ptr [esi + 0x49], al
// 005fe2ef  0fb64b32             movzx ecx, byte ptr [ebx + 0x32]
// 005fe2f3  51                   push ecx
// 005fe2f4  53                   push ebx
// 005fe2f5  e8e6630100           call 0x6146e0
// 005fe2fa  83c408               add esp, 8
// 005fe2fd  5e                   pop esi
// 005fe2fe  5d                   pop ebp
// 005fe2ff  5b                   pop ebx
// 005fe300  83c408               add esp, 8
// 005fe303  c3                   ret 
// library lua-5.1.2/roc_espeon_nativeparlistcontext810a97d37dd18cf0.cpp (function ?parlist@@YAXPAULexState@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.2 roc_espeon_nativeparlistcontext810a97d37dd18cf0.cpp
