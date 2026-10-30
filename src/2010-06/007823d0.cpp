// from server: 100% by auto
// roc 2010-06 007823d0  unit: seg_00780000  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007823d0
//
// 007823d0  56                   push esi
// 007823d1  8b733c               mov esi, dword ptr [ebx + 0x3c]
// 007823d4  8b4e04               mov ecx, dword ptr [esi + 4]
// 007823d7  8b4608               mov eax, dword ptr [esi + 8]
// 007823da  41                   inc ecx
// 007823db  3bc8                 cmp ecx, eax
// 007823dd  764b                 jbe 0x78242a
// 007823df  3dfeffff7f           cmp eax, 0x7ffffffe
// 007823e4  7210                 jb 0x7823f6
// 007823e6  6a00                 push 0
// 007823e8  682036a500           push 0xa53620
// 007823ed  53                   push ebx
// 007823ee  e8fd000000           call 0x7824f0
// 007823f3  83c40c               add esp, 0xc
// 007823f6  8b4608               mov eax, dword ptr [esi + 8]
// 007823f9  57                   push edi
// 007823fa  8d3c00               lea edi, [eax + eax]
// 007823fd  8d5701               lea edx, [edi + 1]
// 00782400  83fafd               cmp edx, -3
// 00782403  7713                 ja 0x782418
// 00782405  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 00782408  57                   push edi
// 00782409  50                   push eax
// 0078240a  8b06                 mov eax, dword ptr [esi]
// 0078240c  50                   push eax
// 0078240d  51                   push ecx
// 0078240e  e8edc5ffff           call 0x77ea00
// 00782413  83c410               add esp, 0x10
// 00782416  eb0c                 jmp 0x782424
// 00782418  8b5334               mov edx, dword ptr [ebx + 0x34]
// 0078241b  52                   push edx
// 0078241c  e8bfc5ffff           call 0x77e9e0
// 00782421  83c404               add esp, 4
// 00782424  897e08               mov dword ptr [esi + 8], edi
// 00782427  8906                 mov dword ptr [esi], eax
// 00782429  5f                   pop edi
// 0078242a  8b4604               mov eax, dword ptr [esi + 4]
// 0078242d  8b0e                 mov ecx, dword ptr [esi]
// 0078242f  8a542408             mov dl, byte ptr [esp + 8]
// 00782433  881408               mov byte ptr [eax + ecx], dl
// 00782436  ff4604               inc dword ptr [esi + 4]
// 00782439  5e                   pop esi
// 0078243a  c3                   ret 
// library lua-5.1.4/llex.c (function _save)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 llex.c
