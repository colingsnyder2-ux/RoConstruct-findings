// roc 2007-03 00526ca0  unit: seg_00520000  size: 227 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00526ca0
//
// 00526ca0  55                   push ebp
// 00526ca1  56                   push esi
// 00526ca2  57                   push edi
// 00526ca3  8bf8                 mov edi, eax
// 00526ca5  8b442414             mov eax, dword ptr [esp + 0x14]
// 00526ca9  0fbf00               movsx eax, word ptr [eax]
// 00526cac  2b442418             sub eax, dword ptr [esp + 0x18]
// 00526cb0  7902                 jns 0x526cb4
// 00526cb2  f7d8                 neg eax
// 00526cb4  33f6                 xor esi, esi
// 00526cb6  85c0                 test eax, eax
// 00526cb8  7429                 je 0x526ce3
// 00526cba  8d9b00000000         lea ebx, [ebx]
// 00526cc0  83c601               add esi, 1
// 00526cc3  d1f8                 sar eax, 1
// 00526cc5  75f9                 jne 0x526cc0
// 00526cc7  83fe0b               cmp esi, 0xb
// 00526cca  7e17                 jle 0x526ce3
// 00526ccc  8b442410             mov eax, dword ptr [esp + 0x10]
// 00526cd0  8b08                 mov ecx, dword ptr [eax]
// 00526cd2  c7411406000000       mov dword ptr [ecx + 0x14], 6
// 00526cd9  8b10                 mov edx, dword ptr [eax]
// 00526cdb  50                   push eax
// 00526cdc  8b02                 mov eax, dword ptr [edx]
// 00526cde  ffd0                 call eax
// 00526ce0  83c404               add esp, 4
// 00526ce3  8304b701             add dword ptr [edi + esi*4], 1
// 00526ce7  33f6                 xor esi, esi
// 00526ce9  bd242c7a00           mov ebp, 0x7a2c24
// 00526cee  8bff                 mov edi, edi
// 00526cf0  8b4d00               mov ecx, dword ptr [ebp]
// 00526cf3  8b542414             mov edx, dword ptr [esp + 0x14]
// 00526cf7  0fbf0c4a             movsx ecx, word ptr [edx + ecx*2]
// 00526cfb  85c9                 test ecx, ecx
// 00526cfd  7505                 jne 0x526d04
// 00526cff  83c601               add esi, 1
// 00526d02  eb65                 jmp 0x526d69
// 00526d04  83fe0f               cmp esi, 0xf
// 00526d07  7e20                 jle 0x526d29
// 00526d09  8b93c0030000         mov edx, dword ptr [ebx + 0x3c0]
// 00526d0f  8d46f0               lea eax, [esi - 0x10]
// 00526d12  c1e804               shr eax, 4
// 00526d15  83c001               add eax, 1
// 00526d18  8bf8                 mov edi, eax
// 00526d1a  f7df                 neg edi
// 00526d1c  c1e704               shl edi, 4
// 00526d1f  03f7                 add esi, edi
// 00526d21  03d0                 add edx, eax
// 00526d23  8993c0030000         mov dword ptr [ebx + 0x3c0], edx
// 00526d29  85c9                 test ecx, ecx
// 00526d2b  7d02                 jge 0x526d2f
// 00526d2d  f7d9                 neg ecx
// 00526d2f  d1f9                 sar ecx, 1
// 00526d31  bf01000000           mov edi, 1
// 00526d36  7423                 je 0x526d5b
// 00526d38  83c701               add edi, 1
// 00526d3b  d1f9                 sar ecx, 1
// 00526d3d  75f9                 jne 0x526d38
// 00526d3f  83ff0a               cmp edi, 0xa
// 00526d42  7e17                 jle 0x526d5b
// 00526d44  8b442410             mov eax, dword ptr [esp + 0x10]
// 00526d48  8b08                 mov ecx, dword ptr [eax]
// 00526d4a  c7411406000000       mov dword ptr [ecx + 0x14], 6
// 00526d51  8b10                 mov edx, dword ptr [eax]
// 00526d53  50                   push eax
// 00526d54  8b02                 mov eax, dword ptr [edx]
// 00526d56  ffd0                 call eax
// 00526d58  83c404               add esp, 4
// 00526d5b  c1e604               shl esi, 4
// 00526d5e  03f7                 add esi, edi
// 00526d60  8304b301             add dword ptr [ebx + esi*4], 1
// 00526d64  8d04b3               lea eax, [ebx + esi*4]
// 00526d67  33f6                 xor esi, esi
// 00526d69  83c504               add ebp, 4
// 00526d6c  81fd202d7a00         cmp ebp, 0x7a2d20
// 00526d72  0f8c78ffffff         jl 0x526cf0
// 00526d78  5f                   pop edi
// 00526d79  85f6                 test esi, esi
// 00526d7b  5e                   pop esi
// 00526d7c  5d                   pop ebp
// 00526d7d  7e03                 jle 0x526d82
// 00526d7f  830301               add dword ptr [ebx], 1
// 00526d82  c3                   ret 
// library jpeg-6b/jchuff.c (function _htest_one_block)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
