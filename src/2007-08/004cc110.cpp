// from server: 100% by auto
// roc 2007-08 004cc110  unit: CSHA1  size: 478 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004cc110
//
// 004cc110  83ec28               sub esp, 0x28
// 004cc113  a188518b00           mov eax, dword ptr [0x8b5188]
// 004cc118  33c4                 xor eax, esp
// 004cc11a  89442424             mov dword ptr [esp + 0x24], eax
// 004cc11e  53                   push ebx
// 004cc11f  55                   push ebp
// 004cc120  8b2dccf98b00         mov ebp, dword ptr [0x8bf9cc]
// 004cc126  8d55fa               lea edx, [ebp - 6]
// 004cc129  56                   push esi
// 004cc12a  8d42ff               lea eax, [edx - 1]
// 004cc12d  85c0                 test eax, eax
// 004cc12f  57                   push edi
// 004cc130  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 004cc134  7c1a                 jl 0x4cc150
// 004cc136  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 004cc13a  8d742414             lea esi, [esp + 0x14]
// 004cc13e  2bce                 sub ecx, esi
// 004cc140  8d3481               lea esi, [ecx + eax*4]
// 004cc143  83e801               sub eax, 1
// 004cc146  8b743414             mov esi, dword ptr [esp + esi + 0x14]
// 004cc14a  89748418             mov dword ptr [esp + eax*4 + 0x18], esi
// 004cc14e  79f0                 jns 0x4cc140
// 004cc150  33f6                 xor esi, esi
// 004cc152  33c9                 xor ecx, ecx
// 004cc154  33c0                 xor eax, eax
// 004cc156  85d2                 test edx, edx
// 004cc158  7e43                 jle 0x4cc19d
// 004cc15a  8d9b00000000         lea ebx, [ebx]
// 004cc160  8d5d01               lea ebx, [ebp + 1]
// 004cc163  3bf3                 cmp esi, ebx
// 004cc165  7d36                 jge 0x4cc19d
// 004cc167  3bc2                 cmp eax, edx
// 004cc169  7d24                 jge 0x4cc18f
// 004cc16b  eb03                 jmp 0x4cc170
// 004cc16d  8d4900               lea ecx, [ecx]
// 004cc170  83f904               cmp ecx, 4
// 004cc173  7d14                 jge 0x4cc189
// 004cc175  8b6c8414             mov ebp, dword ptr [esp + eax*4 + 0x14]
// 004cc179  8d1cb1               lea ebx, [ecx + esi*4]
// 004cc17c  83c001               add eax, 1
// 004cc17f  83c101               add ecx, 1
// 004cc182  3bc2                 cmp eax, edx
// 004cc184  892c9f               mov dword ptr [edi + ebx*4], ebp
// 004cc187  7ce7                 jl 0x4cc170
// 004cc189  8b2dccf98b00         mov ebp, dword ptr [0x8bf9cc]
// 004cc18f  83f904               cmp ecx, 4
// 004cc192  7505                 jne 0x4cc199
// 004cc194  83c601               add esi, 1
// 004cc197  33c9                 xor ecx, ecx
// 004cc199  3bc2                 cmp eax, edx
// 004cc19b  7cc3                 jl 0x4cc160
// 004cc19d  8d4501               lea eax, [ebp + 1]
// 004cc1a0  3bf0                 cmp esi, eax
// 004cc1a2  0f8d31010000         jge 0x4cc2d9
// 004cc1a8  c744241018658900     mov dword ptr [esp + 0x10], 0x896518
// 004cc1b0  0fb6449411           movzx eax, byte ptr [esp + edx*4 + 0x11]
// 004cc1b5  0fb68018328900       movzx eax, byte ptr [eax + 0x893218]
// 004cc1bc  30442414             xor byte ptr [esp + 0x14], al
// 004cc1c0  0fb6449412           movzx eax, byte ptr [esp + edx*4 + 0x12]
// 004cc1c5  0fb68018328900       movzx eax, byte ptr [eax + 0x893218]
// 004cc1cc  30442415             xor byte ptr [esp + 0x15], al
// 004cc1d0  0fb6449413           movzx eax, byte ptr [esp + edx*4 + 0x13]
// 004cc1d5  0fb68018328900       movzx eax, byte ptr [eax + 0x893218]
// 004cc1dc  30442416             xor byte ptr [esp + 0x16], al
// 004cc1e0  0fb6449410           movzx eax, byte ptr [esp + edx*4 + 0x10]
// 004cc1e5  0fb68018328900       movzx eax, byte ptr [eax + 0x893218]
// 004cc1ec  30442417             xor byte ptr [esp + 0x17], al
// 004cc1f0  8b442410             mov eax, dword ptr [esp + 0x10]
// 004cc1f4  8a18                 mov bl, byte ptr [eax]
// 004cc1f6  305c2414             xor byte ptr [esp + 0x14], bl
// 004cc1fa  83c004               add eax, 4
// 004cc1fd  83fa08               cmp edx, 8
// 004cc200  89442410             mov dword ptr [esp + 0x10], eax
// 004cc204  b801000000           mov eax, 1
// 004cc209  7419                 je 0x4cc224
// 004cc20b  3bd0                 cmp edx, eax
// 004cc20d  0f8e7d000000         jle 0x4cc290
// 004cc213  8b5c8410             mov ebx, dword ptr [esp + eax*4 + 0x10]
// 004cc217  315c8414             xor dword ptr [esp + eax*4 + 0x14], ebx
// 004cc21b  83c001               add eax, 1
// 004cc21e  3bc2                 cmp eax, edx
// 004cc220  7cf1                 jl 0x4cc213
// 004cc222  eb6c                 jmp 0x4cc290
// 004cc224  8b5c8410             mov ebx, dword ptr [esp + eax*4 + 0x10]
// 004cc228  315c8414             xor dword ptr [esp + eax*4 + 0x14], ebx
// 004cc22c  83c001               add eax, 1
// 004cc22f  83f804               cmp eax, 4
// 004cc232  7cf0                 jl 0x4cc224
// 004cc234  0fb6442420           movzx eax, byte ptr [esp + 0x20]
// 004cc239  0fb68018328900       movzx eax, byte ptr [eax + 0x893218]
// 004cc240  30442424             xor byte ptr [esp + 0x24], al
// 004cc244  0fb6442421           movzx eax, byte ptr [esp + 0x21]
// 004cc249  0fb68018328900       movzx eax, byte ptr [eax + 0x893218]
// 004cc250  30442425             xor byte ptr [esp + 0x25], al
// 004cc254  0fb6442422           movzx eax, byte ptr [esp + 0x22]
// 004cc259  0fb68018328900       movzx eax, byte ptr [eax + 0x893218]
// 004cc260  30442426             xor byte ptr [esp + 0x26], al
// 004cc264  0fb6442423           movzx eax, byte ptr [esp + 0x23]
// 004cc269  0fb68018328900       movzx eax, byte ptr [eax + 0x893218]
// 004cc270  30442427             xor byte ptr [esp + 0x27], al
// 004cc274  b805000000           mov eax, 5
// 004cc279  8da42400000000       lea esp, [esp]
// 004cc280  8b5c8410             mov ebx, dword ptr [esp + eax*4 + 0x10]
// 004cc284  315c8414             xor dword ptr [esp + eax*4 + 0x14], ebx
// 004cc288  83c001               add eax, 1
// 004cc28b  83f808               cmp eax, 8
// 004cc28e  7cf0                 jl 0x4cc280
// 004cc290  33c0                 xor eax, eax
// 004cc292  85d2                 test edx, edx
// 004cc294  7e38                 jle 0x4cc2ce
// 004cc296  8d5d01               lea ebx, [ebp + 1]
// 004cc299  3bf3                 cmp esi, ebx
// 004cc29b  7d31                 jge 0x4cc2ce
// 004cc29d  3bc2                 cmp eax, edx
// 004cc29f  7d1f                 jge 0x4cc2c0
// 004cc2a1  83f904               cmp ecx, 4
// 004cc2a4  7d14                 jge 0x4cc2ba
// 004cc2a6  8b6c8414             mov ebp, dword ptr [esp + eax*4 + 0x14]
// 004cc2aa  8d1cb1               lea ebx, [ecx + esi*4]
// 004cc2ad  83c001               add eax, 1
// 004cc2b0  83c101               add ecx, 1
// 004cc2b3  3bc2                 cmp eax, edx
// 004cc2b5  892c9f               mov dword ptr [edi + ebx*4], ebp
// 004cc2b8  7ce7                 jl 0x4cc2a1
// 004cc2ba  8b2dccf98b00         mov ebp, dword ptr [0x8bf9cc]
// 004cc2c0  83f904               cmp ecx, 4
// 004cc2c3  7505                 jne 0x4cc2ca
// 004cc2c5  83c601               add esi, 1
// 004cc2c8  33c9                 xor ecx, ecx
// 004cc2ca  3bc2                 cmp eax, edx
// 004cc2cc  7cc8                 jl 0x4cc296
// 004cc2ce  8d4501               lea eax, [ebp + 1]
// 004cc2d1  3bf0                 cmp esi, eax
// 004cc2d3  0f8cd7feffff         jl 0x4cc1b0
// 004cc2d9  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 004cc2dd  5f                   pop edi
// 004cc2de  5e                   pop esi
// 004cc2df  5d                   pop ebp
// 004cc2e0  5b                   pop ebx
// 004cc2e1  33cc                 xor ecx, esp
// 004cc2e3  33c0                 xor eax, eax
// 004cc2e5  e834471600           call 0x630a1e
// 004cc2ea  83c428               add esp, 0x28
// 004cc2ed  c3                   ret 

// from server: 87% by colin
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet rijndael.cpp