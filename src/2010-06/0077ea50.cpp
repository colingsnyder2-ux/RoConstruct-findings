// roc 2010-06 0077ea50  unit: seg_00770000  size: 137 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077ea50
//
// 0077ea50  53                   push ebx
// 0077ea51  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0077ea55  56                   push esi
// 0077ea56  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0077ea5a  8bc6                 mov eax, esi
// 0077ea5c  99                   cdq 
// 0077ea5d  57                   push edi
// 0077ea5e  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0077ea62  8b0f                 mov ecx, dword ptr [edi]
// 0077ea64  2bc2                 sub eax, edx
// 0077ea66  d1f8                 sar eax, 1
// 0077ea68  3bc8                 cmp ecx, eax
// 0077ea6a  7c14                 jl 0x77ea80
// 0077ea6c  3bce                 cmp ecx, esi
// 0077ea6e  7c1d                 jl 0x77ea8d
// 0077ea70  8b442424             mov eax, dword ptr [esp + 0x24]
// 0077ea74  50                   push eax
// 0077ea75  53                   push ebx
// 0077ea76  e82551fbff           call 0x733ba0
// 0077ea7b  83c408               add esp, 8
// 0077ea7e  eb0d                 jmp 0x77ea8d
// 0077ea80  8d3409               lea esi, [ecx + ecx]
// 0077ea83  83fe04               cmp esi, 4
// 0077ea86  7d05                 jge 0x77ea8d
// 0077ea88  be04000000           mov esi, 4
// 0077ea8d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0077ea91  33d2                 xor edx, edx
// 0077ea93  b8fdffffff           mov eax, 0xfffffffd
// 0077ea98  f7f1                 div ecx
// 0077ea9a  55                   push ebp
// 0077ea9b  8d6e01               lea ebp, [esi + 1]
// 0077ea9e  3be8                 cmp ebp, eax
// 0077eaa0  5d                   pop ebp
// 0077eaa1  7720                 ja 0x77eac3
// 0077eaa3  8b07                 mov eax, dword ptr [edi]
// 0077eaa5  8bd6                 mov edx, esi
// 0077eaa7  0fafc1               imul eax, ecx
// 0077eaaa  0fafd1               imul edx, ecx
// 0077eaad  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0077eab1  52                   push edx
// 0077eab2  50                   push eax
// 0077eab3  51                   push ecx
// 0077eab4  53                   push ebx
// 0077eab5  e846ffffff           call 0x77ea00
// 0077eaba  83c410               add esp, 0x10
// 0077eabd  8937                 mov dword ptr [edi], esi
// 0077eabf  5f                   pop edi
// 0077eac0  5e                   pop esi
// 0077eac1  5b                   pop ebx
// 0077eac2  c3                   ret 
// 0077eac3  68f02fa500           push 0xa52ff0
// 0077eac8  53                   push ebx
// 0077eac9  e8d250fbff           call 0x733ba0
// 0077eace  83c408               add esp, 8
// 0077ead1  8937                 mov dword ptr [edi], esi
// 0077ead3  5f                   pop edi
// 0077ead4  5e                   pop esi
// 0077ead5  33c0                 xor eax, eax
// 0077ead7  5b                   pop ebx
// 0077ead8  c3                   ret 
// library lua-5.1.4/lmem.c (function _luaM_growaux_)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmem.c
