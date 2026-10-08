// roc 2008-06 004d5d80  unit: CSHA1  size: 430 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d5d80
//
// 004d5d80  83ec24               sub esp, 0x24
// 004d5d83  53                   push ebx
// 004d5d84  55                   push ebp
// 004d5d85  8b2d08279700         mov ebp, dword ptr [0x972708]
// 004d5d8b  8d55fa               lea edx, [ebp - 6]
// 004d5d8e  8d42ff               lea eax, [edx - 1]
// 004d5d91  56                   push esi
// 004d5d92  57                   push edi
// 004d5d93  85c0                 test eax, eax
// 004d5d95  7c1a                 jl 0x4d5db1
// 004d5d97  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 004d5d9b  8d742414             lea esi, [esp + 0x14]
// 004d5d9f  2bce                 sub ecx, esi
// 004d5da1  8d3481               lea esi, [ecx + eax*4]
// 004d5da4  83e801               sub eax, 1
// 004d5da7  8b743414             mov esi, dword ptr [esp + esi + 0x14]
// 004d5dab  89748418             mov dword ptr [esp + eax*4 + 0x18], esi
// 004d5daf  79f0                 jns 0x4d5da1
// 004d5db1  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 004d5db5  33f6                 xor esi, esi
// 004d5db7  33c9                 xor ecx, ecx
// 004d5db9  33c0                 xor eax, eax
// 004d5dbb  85d2                 test edx, edx
// 004d5dbd  7e38                 jle 0x4d5df7
// 004d5dbf  90                   nop 
// 004d5dc0  8d5d01               lea ebx, [ebp + 1]
// 004d5dc3  3bf3                 cmp esi, ebx
// 004d5dc5  7d30                 jge 0x4d5df7
// 004d5dc7  3bc2                 cmp eax, edx
// 004d5dc9  7d20                 jge 0x4d5deb
// 004d5dcb  eb03                 jmp 0x4d5dd0
// 004d5dcd  8d4900               lea ecx, [ecx]
// 004d5dd0  83f904               cmp ecx, 4
// 004d5dd3  7d10                 jge 0x4d5de5
// 004d5dd5  8b6c8414             mov ebp, dword ptr [esp + eax*4 + 0x14]
// 004d5dd9  8d1cb1               lea ebx, [ecx + esi*4]
// 004d5ddc  40                   inc eax
// 004d5ddd  41                   inc ecx
// 004d5dde  3bc2                 cmp eax, edx
// 004d5de0  892c9f               mov dword ptr [edi + ebx*4], ebp
// 004d5de3  7ceb                 jl 0x4d5dd0
// 004d5de5  8b2d08279700         mov ebp, dword ptr [0x972708]
// 004d5deb  83f904               cmp ecx, 4
// 004d5dee  7503                 jne 0x4d5df3
// 004d5df0  46                   inc esi
// 004d5df1  33c9                 xor ecx, ecx
// 004d5df3  3bc2                 cmp eax, edx
// 004d5df5  7cc9                 jl 0x4d5dc0
// 004d5df7  8d4501               lea eax, [ebp + 1]
// 004d5dfa  3bf0                 cmp esi, eax
// 004d5dfc  0f8d22010000         jge 0x4d5f24
// 004d5e02  c7442410c8059400     mov dword ptr [esp + 0x10], 0x9405c8
// 004d5e0a  8d9b00000000         lea ebx, [ebx]
// 004d5e10  0fb6449411           movzx eax, byte ptr [esp + edx*4 + 0x11]
// 004d5e15  0fb680c8d29300       movzx eax, byte ptr [eax + 0x93d2c8]
// 004d5e1c  30442414             xor byte ptr [esp + 0x14], al
// 004d5e20  0fb6449412           movzx eax, byte ptr [esp + edx*4 + 0x12]
// 004d5e25  0fb680c8d29300       movzx eax, byte ptr [eax + 0x93d2c8]
// 004d5e2c  30442415             xor byte ptr [esp + 0x15], al
// 004d5e30  0fb6449413           movzx eax, byte ptr [esp + edx*4 + 0x13]
// 004d5e35  0fb680c8d29300       movzx eax, byte ptr [eax + 0x93d2c8]
// 004d5e3c  30442416             xor byte ptr [esp + 0x16], al
// 004d5e40  0fb6449410           movzx eax, byte ptr [esp + edx*4 + 0x10]
// 004d5e45  0fb680c8d29300       movzx eax, byte ptr [eax + 0x93d2c8]
// 004d5e4c  30442417             xor byte ptr [esp + 0x17], al
// 004d5e50  8b442410             mov eax, dword ptr [esp + 0x10]
// 004d5e54  8a18                 mov bl, byte ptr [eax]
// 004d5e56  305c2414             xor byte ptr [esp + 0x14], bl
// 004d5e5a  83c004               add eax, 4
// 004d5e5d  89442410             mov dword ptr [esp + 0x10], eax
// 004d5e61  b801000000           mov eax, 1
// 004d5e66  83fa08               cmp edx, 8
// 004d5e69  7415                 je 0x4d5e80
// 004d5e6b  3bd0                 cmp edx, eax
// 004d5e6d  7e72                 jle 0x4d5ee1
// 004d5e6f  90                   nop 
// 004d5e70  8b5c8410             mov ebx, dword ptr [esp + eax*4 + 0x10]
// 004d5e74  315c8414             xor dword ptr [esp + eax*4 + 0x14], ebx
// 004d5e78  40                   inc eax
// 004d5e79  3bc2                 cmp eax, edx
// 004d5e7b  7cf3                 jl 0x4d5e70
// 004d5e7d  eb62                 jmp 0x4d5ee1
// 004d5e7f  90                   nop 
// 004d5e80  8b5c8410             mov ebx, dword ptr [esp + eax*4 + 0x10]
// 004d5e84  315c8414             xor dword ptr [esp + eax*4 + 0x14], ebx
// 004d5e88  40                   inc eax
// 004d5e89  83f804               cmp eax, 4
// 004d5e8c  7cf2                 jl 0x4d5e80
// 004d5e8e  0fb6442420           movzx eax, byte ptr [esp + 0x20]
// 004d5e93  0fb680c8d29300       movzx eax, byte ptr [eax + 0x93d2c8]
// 004d5e9a  30442424             xor byte ptr [esp + 0x24], al
// 004d5e9e  0fb6442421           movzx eax, byte ptr [esp + 0x21]
// 004d5ea3  0fb680c8d29300       movzx eax, byte ptr [eax + 0x93d2c8]
// 004d5eaa  30442425             xor byte ptr [esp + 0x25], al
// 004d5eae  0fb6442422           movzx eax, byte ptr [esp + 0x22]
// 004d5eb3  0fb680c8d29300       movzx eax, byte ptr [eax + 0x93d2c8]
// 004d5eba  30442426             xor byte ptr [esp + 0x26], al
// 004d5ebe  0fb6442423           movzx eax, byte ptr [esp + 0x23]
// 004d5ec3  0fb680c8d29300       movzx eax, byte ptr [eax + 0x93d2c8]
// 004d5eca  30442427             xor byte ptr [esp + 0x27], al
// 004d5ece  b805000000           mov eax, 5
// 004d5ed3  8b5c8410             mov ebx, dword ptr [esp + eax*4 + 0x10]
// 004d5ed7  315c8414             xor dword ptr [esp + eax*4 + 0x14], ebx
// 004d5edb  40                   inc eax
// 004d5edc  83f808               cmp eax, 8
// 004d5edf  7cf2                 jl 0x4d5ed3
// 004d5ee1  33c0                 xor eax, eax
// 004d5ee3  85d2                 test edx, edx
// 004d5ee5  7e32                 jle 0x4d5f19
// 004d5ee7  8d5d01               lea ebx, [ebp + 1]
// 004d5eea  3bf3                 cmp esi, ebx
// 004d5eec  7d2b                 jge 0x4d5f19
// 004d5eee  3bc2                 cmp eax, edx
// 004d5ef0  7d1b                 jge 0x4d5f0d
// 004d5ef2  83f904               cmp ecx, 4
// 004d5ef5  7d10                 jge 0x4d5f07
// 004d5ef7  8b6c8414             mov ebp, dword ptr [esp + eax*4 + 0x14]
// 004d5efb  8d1cb1               lea ebx, [ecx + esi*4]
// 004d5efe  40                   inc eax
// 004d5eff  41                   inc ecx
// 004d5f00  3bc2                 cmp eax, edx
// 004d5f02  892c9f               mov dword ptr [edi + ebx*4], ebp
// 004d5f05  7ceb                 jl 0x4d5ef2
// 004d5f07  8b2d08279700         mov ebp, dword ptr [0x972708]
// 004d5f0d  83f904               cmp ecx, 4
// 004d5f10  7503                 jne 0x4d5f15
// 004d5f12  46                   inc esi
// 004d5f13  33c9                 xor ecx, ecx
// 004d5f15  3bc2                 cmp eax, edx
// 004d5f17  7cce                 jl 0x4d5ee7
// 004d5f19  8d4501               lea eax, [ebp + 1]
// 004d5f1c  3bf0                 cmp esi, eax
// 004d5f1e  0f8cecfeffff         jl 0x4d5e10
// 004d5f24  5f                   pop edi
// 004d5f25  5e                   pop esi
// 004d5f26  5d                   pop ebp
// 004d5f27  33c0                 xor eax, eax
// 004d5f29  5b                   pop ebx
// 004d5f2a  83c424               add esp, 0x24
// 004d5f2d  c3                   ret 
// library rbxgs-raknet/rijndael.cpp (function ?rijndaelKeySched@@YAHQAY03EHQAY133E@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet rijndael.cpp
