// roc 2008-06 00660740  unit: RBX::FilterStairs  size: 137 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00660740
//
// 00660740  53                   push ebx
// 00660741  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00660745  56                   push esi
// 00660746  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0066074a  8bc6                 mov eax, esi
// 0066074c  99                   cdq 
// 0066074d  57                   push edi
// 0066074e  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00660752  8b0f                 mov ecx, dword ptr [edi]
// 00660754  2bc2                 sub eax, edx
// 00660756  d1f8                 sar eax, 1
// 00660758  3bc8                 cmp ecx, eax
// 0066075a  7c14                 jl 0x660770
// 0066075c  3bce                 cmp ecx, esi
// 0066075e  7c1d                 jl 0x66077d
// 00660760  8b442424             mov eax, dword ptr [esp + 0x24]
// 00660764  50                   push eax
// 00660765  53                   push ebx
// 00660766  e86530fcff           call 0x6237d0
// 0066076b  83c408               add esp, 8
// 0066076e  eb0d                 jmp 0x66077d
// 00660770  8d3409               lea esi, [ecx + ecx]
// 00660773  83fe04               cmp esi, 4
// 00660776  7d05                 jge 0x66077d
// 00660778  be04000000           mov esi, 4
// 0066077d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00660781  33d2                 xor edx, edx
// 00660783  b8fdffffff           mov eax, 0xfffffffd
// 00660788  f7f1                 div ecx
// 0066078a  55                   push ebp
// 0066078b  8d6e01               lea ebp, [esi + 1]
// 0066078e  3be8                 cmp ebp, eax
// 00660790  5d                   pop ebp
// 00660791  7720                 ja 0x6607b3
// 00660793  8b07                 mov eax, dword ptr [edi]
// 00660795  8bd6                 mov edx, esi
// 00660797  0fafc1               imul eax, ecx
// 0066079a  0fafd1               imul edx, ecx
// 0066079d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006607a1  52                   push edx
// 006607a2  50                   push eax
// 006607a3  51                   push ecx
// 006607a4  53                   push ebx
// 006607a5  e846ffffff           call 0x6606f0
// 006607aa  83c410               add esp, 0x10
// 006607ad  8937                 mov dword ptr [edi], esi
// 006607af  5f                   pop edi
// 006607b0  5e                   pop esi
// 006607b1  5b                   pop ebx
// 006607b2  c3                   ret 
// 006607b3  6878c48400           push 0x84c478
// 006607b8  53                   push ebx
// 006607b9  e81230fcff           call 0x6237d0
// 006607be  83c408               add esp, 8
// 006607c1  8937                 mov dword ptr [edi], esi
// 006607c3  5f                   pop edi
// 006607c4  5e                   pop esi
// 006607c5  33c0                 xor eax, eax
// 006607c7  5b                   pop ebx
// 006607c8  c3                   ret 
// library lua-5.1.4/lmem.c (function _luaM_growaux_)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmem.c
