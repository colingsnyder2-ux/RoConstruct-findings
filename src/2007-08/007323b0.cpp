// from server: 100% by tester
// roc 2007-03 00734b20  unit: seg_00730000  size: 395 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00734b20
//
// 00734b20  6aff                 push -1
// 00734b22  6890d37600           push 0x76d390
// 00734b27  64a100000000         mov eax, dword ptr fs:[0]
// 00734b2d  50                   push eax
// 00734b2e  51                   push ecx
// 00734b2f  53                   push ebx
// 00734b30  56                   push esi
// 00734b31  57                   push edi
// 00734b32  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 00734b37  33c4                 xor eax, esp
// 00734b39  50                   push eax
// 00734b3a  8d442414             lea eax, [esp + 0x14]
// 00734b3e  64a300000000         mov dword ptr fs:[0], eax
// 00734b44  8bf1                 mov esi, ecx
// 00734b46  89742410             mov dword ptr [esp + 0x10], esi
// 00734b4a  c7060ca87e00         mov dword ptr [esi], 0x7ea80c
// 00734b50  8b4644               mov eax, dword ptr [esi + 0x44]
// 00734b53  50                   push eax
// 00734b54  c744242007000000     mov dword ptr [esp + 0x20], 7
// 00734b5c  e81fe8dbff           call 0x4f3380
// 00734b61  33db                 xor ebx, ebx
// 00734b63  895e44               mov dword ptr [esi + 0x44], ebx
// 00734b66  895e48               mov dword ptr [esi + 0x48], ebx
// 00734b69  895e4c               mov dword ptr [esi + 0x4c], ebx
// 00734b6c  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 00734b6f  51                   push ecx
// 00734b70  c644242406           mov byte ptr [esp + 0x24], 6
// 00734b75  e806e8dbff           call 0x4f3380
// 00734b7a  8b3da8d27700         mov edi, dword ptr [0x77d2a8]
// 00734b80  895e38               mov dword ptr [esi + 0x38], ebx
// 00734b83  895e3c               mov dword ptr [esi + 0x3c], ebx
// 00734b86  895e40               mov dword ptr [esi + 0x40], ebx
// 00734b89  8b4634               mov eax, dword ptr [esi + 0x34]
// 00734b8c  83c408               add esp, 8
// 00734b8f  3bc3                 cmp eax, ebx
// 00734b91  c644241c05           mov byte ptr [esp + 0x1c], 5
// 00734b96  7424                 je 0x734bbc
// 00734b98  83c004               add eax, 4
// 00734b9b  50                   push eax
// 00734b9c  ffd7                 call edi
// 00734b9e  85c0                 test eax, eax
// 00734ba0  7517                 jne 0x734bb9
// 00734ba2  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00734ba5  e816e8d2ff           call 0x4633c0
// 00734baa  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00734bad  3bcb                 cmp ecx, ebx
// 00734baf  7408                 je 0x734bb9
// 00734bb1  8b11                 mov edx, dword ptr [ecx]
// 00734bb3  8b02                 mov eax, dword ptr [edx]
// 00734bb5  6a01                 push 1
// 00734bb7  ffd0                 call eax
// 00734bb9  895e34               mov dword ptr [esi + 0x34], ebx
// 00734bbc  8b4630               mov eax, dword ptr [esi + 0x30]
// 00734bbf  3bc3                 cmp eax, ebx
// 00734bc1  c644241c04           mov byte ptr [esp + 0x1c], 4
// 00734bc6  7424                 je 0x734bec
// 00734bc8  83c004               add eax, 4
// 00734bcb  50                   push eax
// 00734bcc  ffd7                 call edi
// 00734bce  85c0                 test eax, eax
// 00734bd0  7517                 jne 0x734be9
// 00734bd2  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 00734bd5  e8e6e7d2ff           call 0x4633c0
// 00734bda  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 00734bdd  3bcb                 cmp ecx, ebx
// 00734bdf  7408                 je 0x734be9
// 00734be1  8b11                 mov edx, dword ptr [ecx]
// 00734be3  8b02                 mov eax, dword ptr [edx]
// 00734be5  6a01                 push 1
// 00734be7  ffd0                 call eax
// 00734be9  895e30               mov dword ptr [esi + 0x30], ebx
// 00734bec  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00734bef  3bc3                 cmp eax, ebx
// 00734bf1  c644241c03           mov byte ptr [esp + 0x1c], 3
// 00734bf6  7424                 je 0x734c1c
// 00734bf8  83c004               add eax, 4
// 00734bfb  50                   push eax
// 00734bfc  ffd7                 call edi
// 00734bfe  85c0                 test eax, eax
// 00734c00  7517                 jne 0x734c19
// 00734c02  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 00734c05  e8b6e7d2ff           call 0x4633c0
// 00734c0a  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 00734c0d  3bcb                 cmp ecx, ebx
// 00734c0f  7408                 je 0x734c19
// 00734c11  8b11                 mov edx, dword ptr [ecx]
// 00734c13  8b02                 mov eax, dword ptr [edx]
// 00734c15  6a01                 push 1
// 00734c17  ffd0                 call eax
// 00734c19  895e2c               mov dword ptr [esi + 0x2c], ebx
// 00734c1c  8b4628               mov eax, dword ptr [esi + 0x28]
// 00734c1f  3bc3                 cmp eax, ebx
// 00734c21  c644241c02           mov byte ptr [esp + 0x1c], 2
// 00734c26  7424                 je 0x734c4c
// 00734c28  83c004               add eax, 4
// 00734c2b  50                   push eax
// 00734c2c  ffd7                 call edi
// 00734c2e  85c0                 test eax, eax
// 00734c30  7517                 jne 0x734c49
// 00734c32  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 00734c35  e886e7d2ff           call 0x4633c0
// 00734c3a  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 00734c3d  3bcb                 cmp ecx, ebx
// 00734c3f  7408                 je 0x734c49
// 00734c41  8b11                 mov edx, dword ptr [ecx]
// 00734c43  8b02                 mov eax, dword ptr [edx]
// 00734c45  6a01                 push 1
// 00734c47  ffd0                 call eax
// 00734c49  895e28               mov dword ptr [esi + 0x28], ebx
// 00734c4c  8b4624               mov eax, dword ptr [esi + 0x24]
// 00734c4f  3bc3                 cmp eax, ebx
// 00734c51  c644241c01           mov byte ptr [esp + 0x1c], 1
// 00734c56  7424                 je 0x734c7c
// 00734c58  83c004               add eax, 4
// 00734c5b  50                   push eax
// 00734c5c  ffd7                 call edi
// 00734c5e  85c0                 test eax, eax
// 00734c60  7517                 jne 0x734c79
// 00734c62  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00734c65  e856e7d2ff           call 0x4633c0
// 00734c6a  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00734c6d  3bcb                 cmp ecx, ebx
// 00734c6f  7408                 je 0x734c79
// 00734c71  8b11                 mov edx, dword ptr [ecx]
// 00734c73  8b02                 mov eax, dword ptr [edx]
// 00734c75  6a01                 push 1
// 00734c77  ffd0                 call eax
// 00734c79  895e24               mov dword ptr [esi + 0x24], ebx
// 00734c7c  68c0594700           push 0x4759c0
// 00734c81  6a06                 push 6
// 00734c83  6a04                 push 4
// 00734c85  8d4e0c               lea ecx, [esi + 0xc]
// 00734c88  51                   push ecx
// 00734c89  885c242c             mov byte ptr [esp + 0x2c], bl
// 00734c8d  e8f3a2eeff           call 0x61ef85
// 00734c92  c706946d7900         mov dword ptr [esi], 0x796d94
// 00734c98  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00734c9c  64890d00000000       mov dword ptr fs:[0], ecx
// 00734ca3  59                   pop ecx
// 00734ca4  5f                   pop edi
// 00734ca5  5e                   pop esi
// 00734ca6  5b                   pop ebx
// 00734ca7  83c410               add esp, 0x10
// 00734caa  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Sky.cpp (function ??1Sky@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Sky.cpp
