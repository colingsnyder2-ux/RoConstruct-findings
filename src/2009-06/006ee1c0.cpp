// roc 2009-06 006ee1c0  unit: seg_006e0000  size: 198 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ee1c0
//
// 006ee1c0  83ec34               sub esp, 0x34
// 006ee1c3  817b101d010000       cmp dword ptr [ebx + 0x10], 0x11d
// 006ee1ca  55                   push ebp
// 006ee1cb  8b6b30               mov ebp, dword ptr [ebx + 0x30]
// 006ee1ce  8b4524               mov eax, dword ptr [ebp + 0x24]
// 006ee1d1  56                   push esi
// 006ee1d2  57                   push edi
// 006ee1d3  8944240c             mov dword ptr [esp + 0xc], eax
// 006ee1d7  7527                 jne 0x6ee200
// 006ee1d9  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 006ee1dd  bafdffff7f           mov edx, 0x7ffffffd
// 006ee1e2  39511c               cmp dword ptr [ecx + 0x1c], edx
// 006ee1e5  7e0c                 jle 0x6ee1f3
// 006ee1e7  b9b4de8e00           mov ecx, 0x8edeb4
// 006ee1ec  8bf5                 mov esi, ebp
// 006ee1ee  e84df6ffff           call 0x6ed840
// 006ee1f3  8d7c2410             lea edi, [esp + 0x10]
// 006ee1f7  8bf3                 mov esi, ebx
// 006ee1f9  e822f7ffff           call 0x6ed920
// 006ee1fe  eb0b                 jmp 0x6ee20b
// 006ee200  8d7c2410             lea edi, [esp + 0x10]
// 006ee204  8bf3                 mov esi, ebx
// 006ee206  e865ffffff           call 0x6ee170
// 006ee20b  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 006ee20f  ff471c               inc dword ptr [edi + 0x1c]
// 006ee212  837b103d             cmp dword ptr [ebx + 0x10], 0x3d
// 006ee216  7421                 je 0x6ee239
// 006ee218  6a3d                 push 0x3d
// 006ee21a  53                   push ebx
// 006ee21b  e8d02f0000           call 0x6f11f0
// 006ee220  8b5334               mov edx, dword ptr [ebx + 0x34]
// 006ee223  50                   push eax
// 006ee224  68b8dd8e00           push 0x8eddb8
// 006ee229  52                   push edx
// 006ee22a  e871aefdff           call 0x6c90a0
// 006ee22f  50                   push eax
// 006ee230  53                   push ebx
// 006ee231  e8ba300000           call 0x6f12f0
// 006ee236  83c41c               add esp, 0x1c
// 006ee239  53                   push ebx
// 006ee23a  e8a1440000           call 0x6f26e0
// 006ee23f  8d442414             lea eax, [esp + 0x14]
// 006ee243  50                   push eax
// 006ee244  55                   push ebp
// 006ee245  e886c60000           call 0x6fa8d0
// 006ee24a  6a00                 push 0
// 006ee24c  8d4c2438             lea ecx, [esp + 0x38]
// 006ee250  51                   push ecx
// 006ee251  53                   push ebx
// 006ee252  8bf0                 mov esi, eax
// 006ee254  e8070e0000           call 0x6ef060
// 006ee259  8d542440             lea edx, [esp + 0x40]
// 006ee25d  52                   push edx
// 006ee25e  55                   push ebp
// 006ee25f  e86cc60000           call 0x6fa8d0
// 006ee264  50                   push eax
// 006ee265  8b4718               mov eax, dword ptr [edi + 0x18]
// 006ee268  8b4808               mov ecx, dword ptr [eax + 8]
// 006ee26b  56                   push esi
// 006ee26c  51                   push ecx
// 006ee26d  6a09                 push 9
// 006ee26f  55                   push ebp
// 006ee270  e85bbf0000           call 0x6fa1d0
// 006ee275  8b542440             mov edx, dword ptr [esp + 0x40]
// 006ee279  83c434               add esp, 0x34
// 006ee27c  5f                   pop edi
// 006ee27d  5e                   pop esi
// 006ee27e  895524               mov dword ptr [ebp + 0x24], edx
// 006ee281  5d                   pop ebp
// 006ee282  83c434               add esp, 0x34
// 006ee285  c3                   ret 
// library lua-5.1.4/lparser.c (function _recfield)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
