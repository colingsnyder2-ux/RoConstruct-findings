// from server: 100% by auto
// roc 2011-06 007da830  unit: seg_007d0000  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007da830
//
// 007da830  53                   push ebx
// 007da831  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 007da835  55                   push ebp
// 007da836  56                   push esi
// 007da837  57                   push edi
// 007da838  85db                 test ebx, ebx
// 007da83a  7470                 je 0x7da8ac
// 007da83c  8b742414             mov esi, dword ptr [esp + 0x14]
// 007da840  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 007da844  833e00               cmp dword ptr [esi], 0
// 007da847  753a                 jne 0x7da883
// 007da849  8b560c               mov edx, dword ptr [esi + 0xc]
// 007da84c  8b4610               mov eax, dword ptr [esi + 0x10]
// 007da84f  8d4c241c             lea ecx, [esp + 0x1c]
// 007da853  51                   push ecx
// 007da854  52                   push edx
// 007da855  50                   push eax
// 007da856  8b4608               mov eax, dword ptr [esi + 8]
// 007da859  ffd0                 call eax
// 007da85b  83c40c               add esp, 0xc
// 007da85e  85c0                 test eax, eax
// 007da860  7451                 je 0x7da8b3
// 007da862  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007da866  85c9                 test ecx, ecx
// 007da868  7449                 je 0x7da8b3
// 007da86a  49                   dec ecx
// 007da86b  894604               mov dword ptr [esi + 4], eax
// 007da86e  890e                 mov dword ptr [esi], ecx
// 007da870  0fb610               movzx edx, byte ptr [eax]
// 007da873  40                   inc eax
// 007da874  894604               mov dword ptr [esi + 4], eax
// 007da877  83faff               cmp edx, -1
// 007da87a  7437                 je 0x7da8b3
// 007da87c  41                   inc ecx
// 007da87d  48                   dec eax
// 007da87e  890e                 mov dword ptr [esi], ecx
// 007da880  894604               mov dword ptr [esi + 4], eax
// 007da883  8b4604               mov eax, dword ptr [esi + 4]
// 007da886  0fb608               movzx ecx, byte ptr [eax]
// 007da889  83f9ff               cmp ecx, -1
// 007da88c  7425                 je 0x7da8b3
// 007da88e  8b3e                 mov edi, dword ptr [esi]
// 007da890  3bdf                 cmp ebx, edi
// 007da892  7702                 ja 0x7da896
// 007da894  8bfb                 mov edi, ebx
// 007da896  57                   push edi
// 007da897  50                   push eax
// 007da898  55                   push ebp
// 007da899  e83e0d0300           call 0x80b5dc
// 007da89e  293e                 sub dword ptr [esi], edi
// 007da8a0  017e04               add dword ptr [esi + 4], edi
// 007da8a3  83c40c               add esp, 0xc
// 007da8a6  03ef                 add ebp, edi
// 007da8a8  2bdf                 sub ebx, edi
// 007da8aa  7598                 jne 0x7da844
// 007da8ac  5f                   pop edi
// 007da8ad  5e                   pop esi
// 007da8ae  5d                   pop ebp
// 007da8af  33c0                 xor eax, eax
// 007da8b1  5b                   pop ebx
// 007da8b2  c3                   ret 
// 007da8b3  5f                   pop edi
// 007da8b4  5e                   pop esi
// 007da8b5  5d                   pop ebp
// 007da8b6  8bc3                 mov eax, ebx
// 007da8b8  5b                   pop ebx
// 007da8b9  c3                   ret 
// library lua-5.1.4/lzio.c (function _luaZ_read)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lzio.c
