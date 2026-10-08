// roc 2007-03 004c0cb0  unit: seg_004c0000  size: 451 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c0cb0
//
// 004c0cb0  83ec24               sub esp, 0x24
// 004c0cb3  53                   push ebx
// 004c0cb4  55                   push ebp
// 004c0cb5  8b2d949e8b00         mov ebp, dword ptr [0x8b9e94]
// 004c0cbb  8d55fa               lea edx, [ebp - 6]
// 004c0cbe  8d42ff               lea eax, [edx - 1]
// 004c0cc1  85c0                 test eax, eax
// 004c0cc3  56                   push esi
// 004c0cc4  57                   push edi
// 004c0cc5  7c1a                 jl 0x4c0ce1
// 004c0cc7  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 004c0ccb  8d742414             lea esi, [esp + 0x14]
// 004c0ccf  2bce                 sub ecx, esi
// 004c0cd1  8d3481               lea esi, [ecx + eax*4]
// 004c0cd4  83e801               sub eax, 1
// 004c0cd7  8b743414             mov esi, dword ptr [esp + esi + 0x14]
// 004c0cdb  89748418             mov dword ptr [esp + eax*4 + 0x18], esi
// 004c0cdf  79f0                 jns 0x4c0cd1
// 004c0ce1  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 004c0ce5  33f6                 xor esi, esi
// 004c0ce7  33c9                 xor ecx, ecx
// 004c0ce9  33c0                 xor eax, eax
// 004c0ceb  85d2                 test edx, edx
// 004c0ced  7e3e                 jle 0x4c0d2d
// 004c0cef  90                   nop 
// 004c0cf0  8d5d01               lea ebx, [ebp + 1]
// 004c0cf3  3bf3                 cmp esi, ebx
// 004c0cf5  7d36                 jge 0x4c0d2d
// 004c0cf7  3bc2                 cmp eax, edx
// 004c0cf9  7d24                 jge 0x4c0d1f
// 004c0cfb  eb03                 jmp 0x4c0d00
// 004c0cfd  8d4900               lea ecx, [ecx]
// 004c0d00  83f904               cmp ecx, 4
// 004c0d03  7d14                 jge 0x4c0d19
// 004c0d05  8b6c8414             mov ebp, dword ptr [esp + eax*4 + 0x14]
// 004c0d09  8d1cb1               lea ebx, [ecx + esi*4]
// 004c0d0c  83c001               add eax, 1
// 004c0d0f  83c101               add ecx, 1
// 004c0d12  3bc2                 cmp eax, edx
// 004c0d14  892c9f               mov dword ptr [edi + ebx*4], ebp
// 004c0d17  7ce7                 jl 0x4c0d00
// 004c0d19  8b2d949e8b00         mov ebp, dword ptr [0x8b9e94]
// 004c0d1f  83f904               cmp ecx, 4
// 004c0d22  7505                 jne 0x4c0d29
// 004c0d24  83c601               add esi, 1
// 004c0d27  33c9                 xor ecx, ecx
// 004c0d29  3bc2                 cmp eax, edx
// 004c0d2b  7cc3                 jl 0x4c0cf0
// 004c0d2d  8d4501               lea eax, [ebp + 1]
// 004c0d30  3bf0                 cmp esi, eax
// 004c0d32  0f8d31010000         jge 0x4c0e69
// 004c0d38  c7442410884a8900     mov dword ptr [esp + 0x10], 0x894a88
// 004c0d40  0fb6449411           movzx eax, byte ptr [esp + edx*4 + 0x11]
// 004c0d45  0fb68088178900       movzx eax, byte ptr [eax + 0x891788]
// 004c0d4c  30442414             xor byte ptr [esp + 0x14], al
// 004c0d50  0fb6449412           movzx eax, byte ptr [esp + edx*4 + 0x12]
// 004c0d55  0fb68088178900       movzx eax, byte ptr [eax + 0x891788]
// 004c0d5c  30442415             xor byte ptr [esp + 0x15], al
// 004c0d60  0fb6449413           movzx eax, byte ptr [esp + edx*4 + 0x13]
// 004c0d65  0fb68088178900       movzx eax, byte ptr [eax + 0x891788]
// 004c0d6c  30442416             xor byte ptr [esp + 0x16], al
// 004c0d70  0fb6449410           movzx eax, byte ptr [esp + edx*4 + 0x10]
// 004c0d75  0fb68088178900       movzx eax, byte ptr [eax + 0x891788]
// 004c0d7c  30442417             xor byte ptr [esp + 0x17], al
// 004c0d80  8b442410             mov eax, dword ptr [esp + 0x10]
// 004c0d84  8a18                 mov bl, byte ptr [eax]
// 004c0d86  305c2414             xor byte ptr [esp + 0x14], bl
// 004c0d8a  83c004               add eax, 4
// 004c0d8d  83fa08               cmp edx, 8
// 004c0d90  89442410             mov dword ptr [esp + 0x10], eax
// 004c0d94  b801000000           mov eax, 1
// 004c0d99  7419                 je 0x4c0db4
// 004c0d9b  3bd0                 cmp edx, eax
// 004c0d9d  0f8e7d000000         jle 0x4c0e20
// 004c0da3  8b5c8410             mov ebx, dword ptr [esp + eax*4 + 0x10]
// 004c0da7  315c8414             xor dword ptr [esp + eax*4 + 0x14], ebx
// 004c0dab  83c001               add eax, 1
// 004c0dae  3bc2                 cmp eax, edx
// 004c0db0  7cf1                 jl 0x4c0da3
// 004c0db2  eb6c                 jmp 0x4c0e20
// 004c0db4  8b5c8410             mov ebx, dword ptr [esp + eax*4 + 0x10]
// 004c0db8  315c8414             xor dword ptr [esp + eax*4 + 0x14], ebx
// 004c0dbc  83c001               add eax, 1
// 004c0dbf  83f804               cmp eax, 4
// 004c0dc2  7cf0                 jl 0x4c0db4
// 004c0dc4  0fb6442420           movzx eax, byte ptr [esp + 0x20]
// 004c0dc9  0fb68088178900       movzx eax, byte ptr [eax + 0x891788]
// 004c0dd0  30442424             xor byte ptr [esp + 0x24], al
// 004c0dd4  0fb6442421           movzx eax, byte ptr [esp + 0x21]
// 004c0dd9  0fb68088178900       movzx eax, byte ptr [eax + 0x891788]
// 004c0de0  30442425             xor byte ptr [esp + 0x25], al
// 004c0de4  0fb6442422           movzx eax, byte ptr [esp + 0x22]
// 004c0de9  0fb68088178900       movzx eax, byte ptr [eax + 0x891788]
// 004c0df0  30442426             xor byte ptr [esp + 0x26], al
// 004c0df4  0fb6442423           movzx eax, byte ptr [esp + 0x23]
// 004c0df9  0fb68088178900       movzx eax, byte ptr [eax + 0x891788]
// 004c0e00  30442427             xor byte ptr [esp + 0x27], al
// 004c0e04  b805000000           mov eax, 5
// 004c0e09  8da42400000000       lea esp, [esp]
// 004c0e10  8b5c8410             mov ebx, dword ptr [esp + eax*4 + 0x10]
// 004c0e14  315c8414             xor dword ptr [esp + eax*4 + 0x14], ebx
// 004c0e18  83c001               add eax, 1
// 004c0e1b  83f808               cmp eax, 8
// 004c0e1e  7cf0                 jl 0x4c0e10
// 004c0e20  33c0                 xor eax, eax
// 004c0e22  85d2                 test edx, edx
// 004c0e24  7e38                 jle 0x4c0e5e
// 004c0e26  8d5d01               lea ebx, [ebp + 1]
// 004c0e29  3bf3                 cmp esi, ebx
// 004c0e2b  7d31                 jge 0x4c0e5e
// 004c0e2d  3bc2                 cmp eax, edx
// 004c0e2f  7d1f                 jge 0x4c0e50
// 004c0e31  83f904               cmp ecx, 4
// 004c0e34  7d14                 jge 0x4c0e4a
// 004c0e36  8b6c8414             mov ebp, dword ptr [esp + eax*4 + 0x14]
// 004c0e3a  8d1cb1               lea ebx, [ecx + esi*4]
// 004c0e3d  83c001               add eax, 1
// 004c0e40  83c101               add ecx, 1
// 004c0e43  3bc2                 cmp eax, edx
// 004c0e45  892c9f               mov dword ptr [edi + ebx*4], ebp
// 004c0e48  7ce7                 jl 0x4c0e31
// 004c0e4a  8b2d949e8b00         mov ebp, dword ptr [0x8b9e94]
// 004c0e50  83f904               cmp ecx, 4
// 004c0e53  7505                 jne 0x4c0e5a
// 004c0e55  83c601               add esi, 1
// 004c0e58  33c9                 xor ecx, ecx
// 004c0e5a  3bc2                 cmp eax, edx
// 004c0e5c  7cc8                 jl 0x4c0e26
// 004c0e5e  8d4501               lea eax, [ebp + 1]
// 004c0e61  3bf0                 cmp esi, eax
// 004c0e63  0f8cd7feffff         jl 0x4c0d40
// 004c0e69  5f                   pop edi
// 004c0e6a  5e                   pop esi
// 004c0e6b  5d                   pop ebp
// 004c0e6c  33c0                 xor eax, eax
// 004c0e6e  5b                   pop ebx
// 004c0e6f  83c424               add esp, 0x24
// 004c0e72  c3                   ret 
// library rbxgs-raknet/rijndael.cpp (function ?rijndaelKeySched@@YAHQAY03EHQAY133E@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet rijndael.cpp
