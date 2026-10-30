// from server: 100% by auto
// roc 2011-06 007dae90  unit: seg_007d0000  size: 137 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007dae90
//
// 007dae90  53                   push ebx
// 007dae91  8b5c2408             mov ebx, dword ptr [esp + 8]
// 007dae95  56                   push esi
// 007dae96  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 007dae9a  8bc6                 mov eax, esi
// 007dae9c  99                   cdq 
// 007dae9d  57                   push edi
// 007dae9e  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 007daea2  8b0f                 mov ecx, dword ptr [edi]
// 007daea4  2bc2                 sub eax, edx
// 007daea6  d1f8                 sar eax, 1
// 007daea8  3bc8                 cmp ecx, eax
// 007daeaa  7c14                 jl 0x7daec0
// 007daeac  3bce                 cmp ecx, esi
// 007daeae  7c1d                 jl 0x7daecd
// 007daeb0  8b442424             mov eax, dword ptr [esp + 0x24]
// 007daeb4  50                   push eax
// 007daeb5  53                   push ebx
// 007daeb6  e8352dfaff           call 0x77dbf0
// 007daebb  83c408               add esp, 8
// 007daebe  eb0d                 jmp 0x7daecd
// 007daec0  8d3409               lea esi, [ecx + ecx]
// 007daec3  83fe04               cmp esi, 4
// 007daec6  7d05                 jge 0x7daecd
// 007daec8  be04000000           mov esi, 4
// 007daecd  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007daed1  33d2                 xor edx, edx
// 007daed3  b8fdffffff           mov eax, 0xfffffffd
// 007daed8  f7f1                 div ecx
// 007daeda  55                   push ebp
// 007daedb  8d6e01               lea ebp, [esi + 1]
// 007daede  3be8                 cmp ebp, eax
// 007daee0  5d                   pop ebp
// 007daee1  7720                 ja 0x7daf03
// 007daee3  8b07                 mov eax, dword ptr [edi]
// 007daee5  8bd6                 mov edx, esi
// 007daee7  0fafc1               imul eax, ecx
// 007daeea  0fafd1               imul edx, ecx
// 007daeed  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007daef1  52                   push edx
// 007daef2  50                   push eax
// 007daef3  51                   push ecx
// 007daef4  53                   push ebx
// 007daef5  e846ffffff           call 0x7dae40
// 007daefa  83c410               add esp, 0x10
// 007daefd  8937                 mov dword ptr [edi], esi
// 007daeff  5f                   pop edi
// 007daf00  5e                   pop esi
// 007daf01  5b                   pop ebx
// 007daf02  c3                   ret 
// 007daf03  68e4e0ab00           push 0xabe0e4
// 007daf08  53                   push ebx
// 007daf09  e8e22cfaff           call 0x77dbf0
// 007daf0e  83c408               add esp, 8
// 007daf11  8937                 mov dword ptr [edi], esi
// 007daf13  5f                   pop edi
// 007daf14  5e                   pop esi
// 007daf15  33c0                 xor eax, eax
// 007daf17  5b                   pop ebx
// 007daf18  c3                   ret 
// library lua-5.1.4/lmem.c (function _luaM_growaux_)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmem.c
