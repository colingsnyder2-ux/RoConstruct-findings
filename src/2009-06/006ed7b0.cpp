// from server: 100% by auto
// roc 2009-06 006ed7b0  unit: seg_006e0000  size: 137 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ed7b0
//
// 006ed7b0  53                   push ebx
// 006ed7b1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 006ed7b5  56                   push esi
// 006ed7b6  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 006ed7ba  8bc6                 mov eax, esi
// 006ed7bc  99                   cdq 
// 006ed7bd  57                   push edi
// 006ed7be  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 006ed7c2  8b0f                 mov ecx, dword ptr [edi]
// 006ed7c4  2bc2                 sub eax, edx
// 006ed7c6  d1f8                 sar eax, 1
// 006ed7c8  3bc8                 cmp ecx, eax
// 006ed7ca  7c14                 jl 0x6ed7e0
// 006ed7cc  3bce                 cmp ecx, esi
// 006ed7ce  7c1d                 jl 0x6ed7ed
// 006ed7d0  8b442424             mov eax, dword ptr [esp + 0x24]
// 006ed7d4  50                   push eax
// 006ed7d5  53                   push ebx
// 006ed7d6  e865b0fdff           call 0x6c8840
// 006ed7db  83c408               add esp, 8
// 006ed7de  eb0d                 jmp 0x6ed7ed
// 006ed7e0  8d3409               lea esi, [ecx + ecx]
// 006ed7e3  83fe04               cmp esi, 4
// 006ed7e6  7d05                 jge 0x6ed7ed
// 006ed7e8  be04000000           mov esi, 4
// 006ed7ed  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006ed7f1  33d2                 xor edx, edx
// 006ed7f3  b8fdffffff           mov eax, 0xfffffffd
// 006ed7f8  f7f1                 div ecx
// 006ed7fa  55                   push ebp
// 006ed7fb  8d6e01               lea ebp, [esi + 1]
// 006ed7fe  3be8                 cmp ebp, eax
// 006ed800  5d                   pop ebp
// 006ed801  7720                 ja 0x6ed823
// 006ed803  8b07                 mov eax, dword ptr [edi]
// 006ed805  8bd6                 mov edx, esi
// 006ed807  0fafc1               imul eax, ecx
// 006ed80a  0fafd1               imul edx, ecx
// 006ed80d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006ed811  52                   push edx
// 006ed812  50                   push eax
// 006ed813  51                   push ecx
// 006ed814  53                   push ebx
// 006ed815  e846ffffff           call 0x6ed760
// 006ed81a  83c410               add esp, 0x10
// 006ed81d  8937                 mov dword ptr [edi], esi
// 006ed81f  5f                   pop edi
// 006ed820  5e                   pop esi
// 006ed821  5b                   pop ebx
// 006ed822  c3                   ret 
// 006ed823  6870dd8e00           push 0x8edd70
// 006ed828  53                   push ebx
// 006ed829  e812b0fdff           call 0x6c8840
// 006ed82e  83c408               add esp, 8
// 006ed831  8937                 mov dword ptr [edi], esi
// 006ed833  5f                   pop edi
// 006ed834  5e                   pop esi
// 006ed835  33c0                 xor eax, eax
// 006ed837  5b                   pop ebx
// 006ed838  c3                   ret 
// library lua-5.1.4/lmem.c (function _luaM_growaux_)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmem.c
