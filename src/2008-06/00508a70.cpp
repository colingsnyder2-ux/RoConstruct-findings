// from server: 100% by auto
// roc 2008-06 00508a70  unit: G3D::Shader  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00508a70
//
// 00508a70  56                   push esi
// 00508a71  57                   push edi
// 00508a72  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00508a76  8bf1                 mov esi, ecx
// 00508a78  85ff                 test edi, edi
// 00508a7a  750f                 jne 0x508a8b
// 00508a7c  8b442410             mov eax, dword ptr [esp + 0x10]
// 00508a80  50                   push eax
// 00508a81  e81af0ffff           call 0x507aa0
// 00508a86  5f                   pop edi
// 00508a87  5e                   pop esi
// 00508a88  c20800               ret 8
// 00508a8b  8b860c280400         mov eax, dword ptr [esi + 0x4280c]
// 00508a91  53                   push ebx
// 00508a92  3bf8                 cmp edi, eax
// 00508a94  724e                 jb 0x508ae4
// 00508a96  0500007d00           add eax, 0x7d0000
// 00508a9b  3bf8                 cmp edi, eax
// 00508a9d  7345                 jae 0x508ae4
// 00508a9f  8b442414             mov eax, dword ptr [esp + 0x14]
// 00508aa3  3d80000000           cmp eax, 0x80
// 00508aa8  7708                 ja 0x508ab2
// 00508aaa  5b                   pop ebx
// 00508aab  8bc7                 mov eax, edi
// 00508aad  5f                   pop edi
// 00508aae  5e                   pop esi
// 00508aaf  c20800               ret 8
// 00508ab2  50                   push eax
// 00508ab3  e8e8efffff           call 0x507aa0
// 00508ab8  6880000000           push 0x80
// 00508abd  8bd8                 mov ebx, eax
// 00508abf  57                   push edi
// 00508ac0  53                   push ebx
// 00508ac1  e81affffff           call 0x5089e0
// 00508ac6  8b8e08280400         mov ecx, dword ptr [esi + 0x42808]
// 00508acc  83c40c               add esp, 0xc
// 00508acf  89bc8e08400000       mov dword ptr [esi + ecx*4 + 0x4008], edi
// 00508ad6  ff8608280400         inc dword ptr [esi + 0x42808]
// 00508adc  8bc3                 mov eax, ebx
// 00508ade  5b                   pop ebx
// 00508adf  5f                   pop edi
// 00508ae0  5e                   pop esi
// 00508ae1  c20800               ret 8
// 00508ae4  8b442414             mov eax, dword ptr [esp + 0x14]
// 00508ae8  55                   push ebp
// 00508ae9  8b6ffc               mov ebp, dword ptr [edi - 4]
// 00508aec  3bc5                 cmp eax, ebp
// 00508aee  7709                 ja 0x508af9
// 00508af0  5d                   pop ebp
// 00508af1  5b                   pop ebx
// 00508af2  8bc7                 mov eax, edi
// 00508af4  5f                   pop edi
// 00508af5  5e                   pop esi
// 00508af6  c20800               ret 8
// 00508af9  50                   push eax
// 00508afa  e8a1efffff           call 0x507aa0
// 00508aff  55                   push ebp
// 00508b00  8bd8                 mov ebx, eax
// 00508b02  57                   push edi
// 00508b03  53                   push ebx
// 00508b04  e8d7feffff           call 0x5089e0
// 00508b09  83c40c               add esp, 0xc
// 00508b0c  57                   push edi
// 00508b0d  8bce                 mov ecx, esi
// 00508b0f  e8ecf0ffff           call 0x507c00
// 00508b14  5d                   pop ebp
// 00508b15  8bc3                 mov eax, ebx
// 00508b17  5b                   pop ebx
// 00508b18  5f                   pop edi
// 00508b19  5e                   pop esi
// 00508b1a  c20800               ret 8
// library g3d-6.09/G3Dcpp\System.cpp (function ?realloc@BufferPool@G3D@@QAEPAXPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
