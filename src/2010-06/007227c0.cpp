// from server: 100% by auto
// roc 2010-06 007227c0  unit: RBX::UniversalTool  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007227c0
//
// 007227c0  53                   push ebx
// 007227c1  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 007227c5  85db                 test ebx, ebx
// 007227c7  744c                 je 0x722815
// 007227c9  55                   push ebp
// 007227ca  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 007227ce  56                   push esi
// 007227cf  8b742410             mov esi, dword ptr [esp + 0x10]
// 007227d3  57                   push edi
// 007227d4  8b06                 mov eax, dword ptr [esi]
// 007227d6  8d8e0c020000         lea ecx, [esi + 0x20c]
// 007227dc  4b                   dec ebx
// 007227dd  3bc1                 cmp eax, ecx
// 007227df  7223                 jb 0x722804
// 007227e1  2bc6                 sub eax, esi
// 007227e3  83e80c               sub eax, 0xc
// 007227e6  741c                 je 0x722804
// 007227e8  50                   push eax
// 007227e9  8b4608               mov eax, dword ptr [esi + 8]
// 007227ec  8d7e0c               lea edi, [esi + 0xc]
// 007227ef  57                   push edi
// 007227f0  50                   push eax
// 007227f1  e85aedffff           call 0x721550
// 007227f6  ff4604               inc dword ptr [esi + 4]
// 007227f9  56                   push esi
// 007227fa  893e                 mov dword ptr [esi], edi
// 007227fc  e80fffffff           call 0x722710
// 00722801  83c410               add esp, 0x10
// 00722804  8a5500               mov dl, byte ptr [ebp]
// 00722807  8b0e                 mov ecx, dword ptr [esi]
// 00722809  8811                 mov byte ptr [ecx], dl
// 0072280b  ff06                 inc dword ptr [esi]
// 0072280d  45                   inc ebp
// 0072280e  85db                 test ebx, ebx
// 00722810  75c2                 jne 0x7227d4
// 00722812  5f                   pop edi
// 00722813  5e                   pop esi
// 00722814  5d                   pop ebp
// 00722815  5b                   pop ebx
// 00722816  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_addlstring)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
