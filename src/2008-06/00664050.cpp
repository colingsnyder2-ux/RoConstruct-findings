// roc 2008-06 00664050  unit: RBX::FilterStairs  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00664050
//
// 00664050  56                   push esi
// 00664051  8b733c               mov esi, dword ptr [ebx + 0x3c]
// 00664054  8b4e04               mov ecx, dword ptr [esi + 4]
// 00664057  8b4608               mov eax, dword ptr [esi + 8]
// 0066405a  41                   inc ecx
// 0066405b  3bc8                 cmp ecx, eax
// 0066405d  764b                 jbe 0x6640aa
// 0066405f  3dfeffff7f           cmp eax, 0x7ffffffe
// 00664064  7210                 jb 0x664076
// 00664066  6a00                 push 0
// 00664068  6880ca8400           push 0x84ca80
// 0066406d  53                   push ebx
// 0066406e  e8fd000000           call 0x664170
// 00664073  83c40c               add esp, 0xc
// 00664076  8b4608               mov eax, dword ptr [esi + 8]
// 00664079  57                   push edi
// 0066407a  8d3c00               lea edi, [eax + eax]
// 0066407d  8d5701               lea edx, [edi + 1]
// 00664080  83fafd               cmp edx, -3
// 00664083  7713                 ja 0x664098
// 00664085  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 00664088  57                   push edi
// 00664089  50                   push eax
// 0066408a  8b06                 mov eax, dword ptr [esi]
// 0066408c  50                   push eax
// 0066408d  51                   push ecx
// 0066408e  e85dc6ffff           call 0x6606f0
// 00664093  83c410               add esp, 0x10
// 00664096  eb0c                 jmp 0x6640a4
// 00664098  8b5334               mov edx, dword ptr [ebx + 0x34]
// 0066409b  52                   push edx
// 0066409c  e82fc6ffff           call 0x6606d0
// 006640a1  83c404               add esp, 4
// 006640a4  897e08               mov dword ptr [esi + 8], edi
// 006640a7  8906                 mov dword ptr [esi], eax
// 006640a9  5f                   pop edi
// 006640aa  8b4604               mov eax, dword ptr [esi + 4]
// 006640ad  8b0e                 mov ecx, dword ptr [esi]
// 006640af  8a542408             mov dl, byte ptr [esp + 8]
// 006640b3  881408               mov byte ptr [eax + ecx], dl
// 006640b6  ff4604               inc dword ptr [esi + 4]
// 006640b9  5e                   pop esi
// 006640ba  c3                   ret 
// library lua-5.1.4/llex.c (function _save)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 llex.c
