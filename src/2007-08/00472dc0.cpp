// roc 2007-08 00472dc0  unit: G3D::VARArea  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00472dc0
//
// 00472dc0  55                   push ebp
// 00472dc1  33ed                 xor ebp, ebp
// 00472dc3  392dbcd08b00         cmp dword ptr [0x8bd0bc], ebp
// 00472dc9  0f8eba000000         jle 0x472e89
// 00472dcf  53                   push ebx
// 00472dd0  56                   push esi
// 00472dd1  57                   push edi
// 00472dd2  a1b8d08b00           mov eax, dword ptr [0x8bd0b8]
// 00472dd7  8b04a8               mov eax, dword ptr [eax + ebp*4]
// 00472dda  8b4804               mov ecx, dword ptr [eax + 4]
// 00472ddd  83c004               add eax, 4
// 00472de0  83f901               cmp ecx, 1
// 00472de3  0f858e000000         jne 0x472e77
// 00472de9  a1b8d08b00           mov eax, dword ptr [0x8bd0b8]
// 00472dee  8b15bcd08b00         mov edx, dword ptr [0x8bd0bc]
// 00472df4  8b5c90fc             mov ebx, dword ptr [eax + edx*4 - 4]
// 00472df8  8d3ca8               lea edi, [eax + ebp*4]
// 00472dfb  8b07                 mov eax, dword ptr [edi]
// 00472dfd  3bd8                 cmp ebx, eax
// 00472dff  745e                 je 0x472e5f
// 00472e01  85c0                 test eax, eax
// 00472e03  744a                 je 0x472e4f
// 00472e05  83c004               add eax, 4
// 00472e08  50                   push eax
// 00472e09  ff15e8d27700         call dword ptr [0x77d2e8]
// 00472e0f  85c0                 test eax, eax
// 00472e11  7536                 jne 0x472e49
// 00472e13  8b07                 mov eax, dword ptr [edi]
// 00472e15  8b7008               mov esi, dword ptr [eax + 8]
// 00472e18  85f6                 test esi, esi
// 00472e1a  741f                 je 0x472e3b
// 00472e1c  8d642400             lea esp, [esp]
// 00472e20  8b0e                 mov ecx, dword ptr [esi]
// 00472e22  8b11                 mov edx, dword ptr [ecx]
// 00472e24  8b4204               mov eax, dword ptr [edx + 4]
// 00472e27  ffd0                 call eax
// 00472e29  8bc6                 mov eax, esi
// 00472e2b  8b7604               mov esi, dword ptr [esi + 4]
// 00472e2e  50                   push eax
// 00472e2f  e82ece1b00           call 0x62fc62
// 00472e34  83c404               add esp, 4
// 00472e37  85f6                 test esi, esi
// 00472e39  75e5                 jne 0x472e20
// 00472e3b  8b0f                 mov ecx, dword ptr [edi]
// 00472e3d  85c9                 test ecx, ecx
// 00472e3f  7408                 je 0x472e49
// 00472e41  8b11                 mov edx, dword ptr [ecx]
// 00472e43  8b02                 mov eax, dword ptr [edx]
// 00472e45  6a01                 push 1
// 00472e47  ffd0                 call eax
// 00472e49  c70700000000         mov dword ptr [edi], 0
// 00472e4f  85db                 test ebx, ebx
// 00472e51  740c                 je 0x472e5f
// 00472e53  891f                 mov dword ptr [edi], ebx
// 00472e55  83c304               add ebx, 4
// 00472e58  53                   push ebx
// 00472e59  ff15ecd27700         call dword ptr [0x77d2ec]
// 00472e5f  8b0dbcd08b00         mov ecx, dword ptr [0x8bd0bc]
// 00472e65  83c1ff               add ecx, -1
// 00472e68  6a01                 push 1
// 00472e6a  51                   push ecx
// 00472e6b  b9b8d08b00           mov ecx, 0x8bd0b8
// 00472e70  e85bfcffff           call 0x472ad0
// 00472e75  eb03                 jmp 0x472e7a
// 00472e77  83c501               add ebp, 1
// 00472e7a  3b2dbcd08b00         cmp ebp, dword ptr [0x8bd0bc]
// 00472e80  0f8c4cffffff         jl 0x472dd2
// 00472e86  5f                   pop edi
// 00472e87  5e                   pop esi
// 00472e88  5b                   pop ebx
// 00472e89  5d                   pop ebp
// 00472e8a  c3                   ret 
// library g3d-6.09/GLG3Dcpp\VARArea.cpp (function ?cleanCache@VARArea@G3D@@CAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/VARArea.cpp
