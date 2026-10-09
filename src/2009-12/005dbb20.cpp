// roc 2009-12 005dbb20  unit: boost::bad_lexical_cast  size: 266 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005dbb20
//
// 005dbb20  6aff                 push -1
// 005dbb22  68a9e59200           push 0x92e5a9
// 005dbb27  64a100000000         mov eax, dword ptr fs:[0]
// 005dbb2d  50                   push eax
// 005dbb2e  64892500000000       mov dword ptr fs:[0], esp
// 005dbb35  83ec28               sub esp, 0x28
// 005dbb38  53                   push ebx
// 005dbb39  55                   push ebp
// 005dbb3a  68e0149c00           push 0x9c14e0
// 005dbb3f  8d4c2418             lea ecx, [esp + 0x18]
// 005dbb43  ff15f4b69800         call dword ptr [0x98b6f4]
// 005dbb49  8d44240c             lea eax, [esp + 0xc]
// 005dbb4d  50                   push eax
// 005dbb4e  8d4c2418             lea ecx, [esp + 0x18]
// 005dbb52  33ed                 xor ebp, ebp
// 005dbb54  51                   push ecx
// 005dbb55  896c2440             mov dword ptr [esp + 0x40], ebp
// 005dbb59  e862f92000           call 0x7eb4c0
// 005dbb5e  83c408               add esp, 8
// 005dbb61  8d4c2414             lea ecx, [esp + 0x14]
// 005dbb65  8ad8                 mov bl, al
// 005dbb67  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 005dbb6f  ff15e4b69800         call dword ptr [0x98b6e4]
// 005dbb75  84db                 test bl, bl
// 005dbb77  740f                 je 0x5dbb88
// 005dbb79  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005dbb7d  3d2c010000           cmp eax, 0x12c
// 005dbb82  0f8f91000000         jg 0x5dbc19
// 005dbb88  56                   push esi
// 005dbb89  57                   push edi
// 005dbb8a  33f6                 xor esi, esi
// 005dbb8c  33ff                 xor edi, edi
// 005dbb8e  33db                 xor ebx, ebx
// 005dbb90  c744241002000000     mov dword ptr [esp + 0x10], 2
// 005dbb98  eb06                 jmp 0x5dbba0
// 005dbb9a  8d9b00000000         lea ebx, [ebx]
// 005dbba0  6a32                 push 0x32
// 005dbba2  68e0b85d00           push 0x5db8e0
// 005dbba7  e884fcffff           call 0x5db830
// 005dbbac  03f0                 add esi, eax
// 005dbbae  6a32                 push 0x32
// 005dbbb0  6850b95d00           push 0x5db950
// 005dbbb5  13fa                 adc edi, edx
// 005dbbb7  e874fcffff           call 0x5db830
// 005dbbbc  83c410               add esp, 0x10
// 005dbbbf  03e8                 add ebp, eax
// 005dbbc1  13da                 adc ebx, edx
// 005dbbc3  836c241001           sub dword ptr [esp + 0x10], 1
// 005dbbc8  75d6                 jne 0x5dbba0
// 005dbbca  6a00                 push 0
// 005dbbcc  2bf5                 sub esi, ebp
// 005dbbce  6a02                 push 2
// 005dbbd0  1bfb                 sbb edi, ebx
// 005dbbd2  57                   push edi
// 005dbbd3  56                   push esi
// 005dbbd4  e8c78f2100           call 0x7f4ba0
// 005dbbd9  6a00                 push 0
// 005dbbdb  6a32                 push 0x32
// 005dbbdd  52                   push edx
// 005dbbde  50                   push eax
// 005dbbdf  e8bc8f2100           call 0x7f4ba0
// 005dbbe4  6a00                 push 0
// 005dbbe6  68e8030000           push 0x3e8
// 005dbbeb  52                   push edx
// 005dbbec  50                   push eax
// 005dbbed  e8ae8f2100           call 0x7f4ba0
// 005dbbf2  5f                   pop edi
// 005dbbf3  5e                   pop esi
// 005dbbf4  85d2                 test edx, edx
// 005dbbf6  7c14                 jl 0x5dbc0c
// 005dbbf8  7f05                 jg 0x5dbbff
// 005dbbfa  83f864               cmp eax, 0x64
// 005dbbfd  720d                 jb 0x5dbc0c
// 005dbbff  85d2                 test edx, edx
// 005dbc01  7c16                 jl 0x5dbc19
// 005dbc03  7f07                 jg 0x5dbc0c
// 005dbc05  3d50c30000           cmp eax, 0xc350
// 005dbc0a  760d                 jbe 0x5dbc19
// 005dbc0c  b878050000           mov eax, 0x578
// 005dbc11  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005dbc19  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005dbc1d  5d                   pop ebp
// 005dbc1e  5b                   pop ebx
// 005dbc1f  64890d00000000       mov dword ptr fs:[0], ecx
// 005dbc26  83c434               add esp, 0x34
// 005dbc29  c3                   ret 
// library openrbx-client/Rendering\RenderLib\Profiler.cpp (function ?getCPUSpeed@Render@RBX@@YAHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/Profiler.cpp
