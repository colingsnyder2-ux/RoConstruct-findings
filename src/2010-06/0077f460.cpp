// from server: 100% by auto
// roc 2010-06 0077f460  unit: seg_00770000  size: 198 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077f460
//
// 0077f460  83ec34               sub esp, 0x34
// 0077f463  817b101d010000       cmp dword ptr [ebx + 0x10], 0x11d
// 0077f46a  55                   push ebp
// 0077f46b  8b6b30               mov ebp, dword ptr [ebx + 0x30]
// 0077f46e  8b4524               mov eax, dword ptr [ebp + 0x24]
// 0077f471  56                   push esi
// 0077f472  57                   push edi
// 0077f473  8944240c             mov dword ptr [esp + 0xc], eax
// 0077f477  7527                 jne 0x77f4a0
// 0077f479  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0077f47d  bafdffff7f           mov edx, 0x7ffffffd
// 0077f482  39511c               cmp dword ptr [ecx + 0x1c], edx
// 0077f485  7e0c                 jle 0x77f493
// 0077f487  b93431a500           mov ecx, 0xa53134
// 0077f48c  8bf5                 mov esi, ebp
// 0077f48e  e84df6ffff           call 0x77eae0
// 0077f493  8d7c2410             lea edi, [esp + 0x10]
// 0077f497  8bf3                 mov esi, ebx
// 0077f499  e822f7ffff           call 0x77ebc0
// 0077f49e  eb0b                 jmp 0x77f4ab
// 0077f4a0  8d7c2410             lea edi, [esp + 0x10]
// 0077f4a4  8bf3                 mov esi, ebx
// 0077f4a6  e865ffffff           call 0x77f410
// 0077f4ab  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 0077f4af  ff471c               inc dword ptr [edi + 0x1c]
// 0077f4b2  837b103d             cmp dword ptr [ebx + 0x10], 0x3d
// 0077f4b6  7421                 je 0x77f4d9
// 0077f4b8  6a3d                 push 0x3d
// 0077f4ba  53                   push ebx
// 0077f4bb  e8d02f0000           call 0x782490
// 0077f4c0  8b5334               mov edx, dword ptr [ebx + 0x34]
// 0077f4c3  50                   push eax
// 0077f4c4  683830a500           push 0xa53038
// 0077f4c9  52                   push edx
// 0077f4ca  e81139fbff           call 0x732de0
// 0077f4cf  50                   push eax
// 0077f4d0  53                   push ebx
// 0077f4d1  e8ba300000           call 0x782590
// 0077f4d6  83c41c               add esp, 0x1c
// 0077f4d9  53                   push ebx
// 0077f4da  e8a1440000           call 0x783980
// 0077f4df  8d442414             lea eax, [esp + 0x14]
// 0077f4e3  50                   push eax
// 0077f4e4  55                   push ebp
// 0077f4e5  e8760d0100           call 0x790260
// 0077f4ea  6a00                 push 0
// 0077f4ec  8d4c2438             lea ecx, [esp + 0x38]
// 0077f4f0  51                   push ecx
// 0077f4f1  53                   push ebx
// 0077f4f2  8bf0                 mov esi, eax
// 0077f4f4  e8070e0000           call 0x780300
// 0077f4f9  8d542440             lea edx, [esp + 0x40]
// 0077f4fd  52                   push edx
// 0077f4fe  55                   push ebp
// 0077f4ff  e85c0d0100           call 0x790260
// 0077f504  50                   push eax
// 0077f505  8b4718               mov eax, dword ptr [edi + 0x18]
// 0077f508  8b4808               mov ecx, dword ptr [eax + 8]
// 0077f50b  56                   push esi
// 0077f50c  51                   push ecx
// 0077f50d  6a09                 push 9
// 0077f50f  55                   push ebp
// 0077f510  e84b060100           call 0x78fb60
// 0077f515  8b542440             mov edx, dword ptr [esp + 0x40]
// 0077f519  83c434               add esp, 0x34
// 0077f51c  5f                   pop edi
// 0077f51d  5e                   pop esi
// 0077f51e  895524               mov dword ptr [ebp + 0x24], edx
// 0077f521  5d                   pop ebp
// 0077f522  83c434               add esp, 0x34
// 0077f525  c3                   ret 
// library lua-5.1.4/lparser.c (function _recfield)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
