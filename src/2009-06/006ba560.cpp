// roc 2009-06 006ba560  unit: RBX::UniversalTool  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ba560
//
// 006ba560  53                   push ebx
// 006ba561  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 006ba565  85db                 test ebx, ebx
// 006ba567  744c                 je 0x6ba5b5
// 006ba569  55                   push ebp
// 006ba56a  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 006ba56e  56                   push esi
// 006ba56f  8b742410             mov esi, dword ptr [esp + 0x10]
// 006ba573  57                   push edi
// 006ba574  8b06                 mov eax, dword ptr [esi]
// 006ba576  8d8e0c020000         lea ecx, [esi + 0x20c]
// 006ba57c  4b                   dec ebx
// 006ba57d  3bc1                 cmp eax, ecx
// 006ba57f  7223                 jb 0x6ba5a4
// 006ba581  2bc6                 sub eax, esi
// 006ba583  83e80c               sub eax, 0xc
// 006ba586  741c                 je 0x6ba5a4
// 006ba588  50                   push eax
// 006ba589  8b4608               mov eax, dword ptr [esi + 8]
// 006ba58c  8d7e0c               lea edi, [esi + 0xc]
// 006ba58f  57                   push edi
// 006ba590  50                   push eax
// 006ba591  e8eaedffff           call 0x6b9380
// 006ba596  ff4604               inc dword ptr [esi + 4]
// 006ba599  56                   push esi
// 006ba59a  893e                 mov dword ptr [esi], edi
// 006ba59c  e80fffffff           call 0x6ba4b0
// 006ba5a1  83c410               add esp, 0x10
// 006ba5a4  8a5500               mov dl, byte ptr [ebp]
// 006ba5a7  8b0e                 mov ecx, dword ptr [esi]
// 006ba5a9  8811                 mov byte ptr [ecx], dl
// 006ba5ab  ff06                 inc dword ptr [esi]
// 006ba5ad  45                   inc ebp
// 006ba5ae  85db                 test ebx, ebx
// 006ba5b0  75c2                 jne 0x6ba574
// 006ba5b2  5f                   pop edi
// 006ba5b3  5e                   pop esi
// 006ba5b4  5d                   pop ebp
// 006ba5b5  5b                   pop ebx
// 006ba5b6  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_addlstring)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
