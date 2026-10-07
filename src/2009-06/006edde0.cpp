// roc 2009-06 006edde0  unit: seg_006e0000  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006edde0
//
// 006edde0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006edde4  53                   push ebx
// 006edde5  55                   push ebp
// 006edde6  56                   push esi
// 006edde7  8b7130               mov esi, dword ptr [ecx + 0x30]
// 006eddea  8b1e                 mov ebx, dword ptr [esi]
// 006eddec  8b462c               mov eax, dword ptr [esi + 0x2c]
// 006eddef  8d6b34               lea ebp, [ebx + 0x34]
// 006eddf2  57                   push edi
// 006eddf3  8b7d00               mov edi, dword ptr [ebp]
// 006eddf6  40                   inc eax
// 006eddf7  3bc7                 cmp eax, edi
// 006eddf9  7e24                 jle 0x6ede1f
// 006eddfb  8b5310               mov edx, dword ptr [ebx + 0x10]
// 006eddfe  8b4134               mov eax, dword ptr [ecx + 0x34]
// 006ede01  689cde8e00           push 0x8ede9c
// 006ede06  68ffff0300           push 0x3ffff
// 006ede0b  6a04                 push 4
// 006ede0d  55                   push ebp
// 006ede0e  52                   push edx
// 006ede0f  50                   push eax
// 006ede10  e89bf9ffff           call 0x6ed7b0
// 006ede15  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006ede19  83c418               add esp, 0x18
// 006ede1c  894310               mov dword ptr [ebx + 0x10], eax
// 006ede1f  3b7d00               cmp edi, dword ptr [ebp]
// 006ede22  7d10                 jge 0x6ede34
// 006ede24  8b5310               mov edx, dword ptr [ebx + 0x10]
// 006ede27  c704ba00000000       mov dword ptr [edx + edi*4], 0
// 006ede2e  47                   inc edi
// 006ede2f  3b7d00               cmp edi, dword ptr [ebp]
// 006ede32  7cf0                 jl 0x6ede24
// 006ede34  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 006ede38  8b462c               mov eax, dword ptr [esi + 0x2c]
// 006ede3b  8b5310               mov edx, dword ptr [ebx + 0x10]
// 006ede3e  8b7d00               mov edi, dword ptr [ebp]
// 006ede41  893c82               mov dword ptr [edx + eax*4], edi
// 006ede44  ff462c               inc dword ptr [esi + 0x2c]
// 006ede47  8b4500               mov eax, dword ptr [ebp]
// 006ede4a  f6400503             test byte ptr [eax + 5], 3
// 006ede4e  7414                 je 0x6ede64
// 006ede50  f6430504             test byte ptr [ebx + 5], 4
// 006ede54  740e                 je 0x6ede64
// 006ede56  50                   push eax
// 006ede57  8b4134               mov eax, dword ptr [ecx + 0x34]
// 006ede5a  53                   push ebx
// 006ede5b  50                   push eax
// 006ede5c  e84fbeffff           call 0x6e9cb0
// 006ede61  83c40c               add esp, 0xc
// 006ede64  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 006ede67  49                   dec ecx
// 006ede68  51                   push ecx
// 006ede69  6a00                 push 0
// 006ede6b  6a24                 push 0x24
// 006ede6d  56                   push esi
// 006ede6e  e88dc30000           call 0x6fa200
// 006ede73  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006ede77  83caff               or edx, 0xffffffff
// 006ede7a  895110               mov dword ptr [ecx + 0x10], edx
// 006ede7d  895114               mov dword ptr [ecx + 0x14], edx
// 006ede80  c7010b000000         mov dword ptr [ecx], 0xb
// 006ede86  894108               mov dword ptr [ecx + 8], eax
// 006ede89  8b5500               mov edx, dword ptr [ebp]
// 006ede8c  33db                 xor ebx, ebx
// 006ede8e  83c410               add esp, 0x10
// 006ede91  385a48               cmp byte ptr [edx + 0x48], bl
// 006ede94  7638                 jbe 0x6edece
// 006ede96  8d7d33               lea edi, [ebp + 0x33]
// 006ede99  8da42400000000       lea esp, [esp]
// 006edea0  0fb64701             movzx eax, byte ptr [edi + 1]
// 006edea4  33c9                 xor ecx, ecx
// 006edea6  803f06               cmp byte ptr [edi], 6
// 006edea9  6a00                 push 0
// 006edeab  0f94c1               sete cl
// 006edeae  50                   push eax
// 006edeaf  6a00                 push 0
// 006edeb1  49                   dec ecx
// 006edeb2  83e104               and ecx, 4
// 006edeb5  51                   push ecx
// 006edeb6  56                   push esi
// 006edeb7  e814c30000           call 0x6fa1d0
// 006edebc  8b5500               mov edx, dword ptr [ebp]
// 006edebf  0fb64248             movzx eax, byte ptr [edx + 0x48]
// 006edec3  43                   inc ebx
// 006edec4  83c414               add esp, 0x14
// 006edec7  83c702               add edi, 2
// 006edeca  3bd8                 cmp ebx, eax
// 006edecc  7cd2                 jl 0x6edea0
// 006edece  5f                   pop edi
// 006edecf  5e                   pop esi
// 006eded0  5d                   pop ebp
// 006eded1  5b                   pop ebx
// 006eded2  c3                   ret 
// library lua-5.1.4/lparser.c (function _pushclosure)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
