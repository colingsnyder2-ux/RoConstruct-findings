// from server: 100% by auto
// roc 2007-08 00613a40  unit: seg_00610000  size: 137 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00613a40
//
// 00613a40  53                   push ebx
// 00613a41  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00613a45  56                   push esi
// 00613a46  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00613a4a  8bc6                 mov eax, esi
// 00613a4c  99                   cdq 
// 00613a4d  57                   push edi
// 00613a4e  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00613a52  8b0f                 mov ecx, dword ptr [edi]
// 00613a54  2bc2                 sub eax, edx
// 00613a56  d1f8                 sar eax, 1
// 00613a58  3bc8                 cmp ecx, eax
// 00613a5a  7c14                 jl 0x613a70
// 00613a5c  3bce                 cmp ecx, esi
// 00613a5e  7c1d                 jl 0x613a7d
// 00613a60  8b442424             mov eax, dword ptr [esp + 0x24]
// 00613a64  50                   push eax
// 00613a65  53                   push ebx
// 00613a66  e89535fbff           call 0x5c7000
// 00613a6b  83c408               add esp, 8
// 00613a6e  eb0d                 jmp 0x613a7d
// 00613a70  8d3409               lea esi, [ecx + ecx]
// 00613a73  83fe04               cmp esi, 4
// 00613a76  7d05                 jge 0x613a7d
// 00613a78  be04000000           mov esi, 4
// 00613a7d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00613a81  33d2                 xor edx, edx
// 00613a83  b8fdffffff           mov eax, 0xfffffffd
// 00613a88  f7f1                 div ecx
// 00613a8a  55                   push ebp
// 00613a8b  8d6e01               lea ebp, [esi + 1]
// 00613a8e  3be8                 cmp ebp, eax
// 00613a90  5d                   pop ebp
// 00613a91  7720                 ja 0x613ab3
// 00613a93  8b07                 mov eax, dword ptr [edi]
// 00613a95  8bd6                 mov edx, esi
// 00613a97  0fafc1               imul eax, ecx
// 00613a9a  0fafd1               imul edx, ecx
// 00613a9d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00613aa1  52                   push edx
// 00613aa2  50                   push eax
// 00613aa3  51                   push ecx
// 00613aa4  53                   push ebx
// 00613aa5  e846ffffff           call 0x6139f0
// 00613aaa  83c410               add esp, 0x10
// 00613aad  8937                 mov dword ptr [edi], esi
// 00613aaf  5f                   pop edi
// 00613ab0  5e                   pop esi
// 00613ab1  5b                   pop ebx
// 00613ab2  c3                   ret 
// 00613ab3  6828337c00           push 0x7c3328
// 00613ab8  53                   push ebx
// 00613ab9  e84235fbff           call 0x5c7000
// 00613abe  83c408               add esp, 8
// 00613ac1  8937                 mov dword ptr [edi], esi
// 00613ac3  5f                   pop edi
// 00613ac4  5e                   pop esi
// 00613ac5  33c0                 xor eax, eax
// 00613ac7  5b                   pop ebx
// 00613ac8  c3                   ret 
// library lua-5.1.4/lmem.c (function _luaM_growaux_)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmem.c
