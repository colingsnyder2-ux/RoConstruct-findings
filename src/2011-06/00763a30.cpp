// from server: 100% by auto
// roc 2011-06 00763a30  unit: seg_00760000  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00763a30
//
// 00763a30  53                   push ebx
// 00763a31  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00763a35  85db                 test ebx, ebx
// 00763a37  744c                 je 0x763a85
// 00763a39  55                   push ebp
// 00763a3a  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00763a3e  56                   push esi
// 00763a3f  8b742410             mov esi, dword ptr [esp + 0x10]
// 00763a43  57                   push edi
// 00763a44  8b06                 mov eax, dword ptr [esi]
// 00763a46  8d8e0c020000         lea ecx, [esi + 0x20c]
// 00763a4c  4b                   dec ebx
// 00763a4d  3bc1                 cmp eax, ecx
// 00763a4f  7223                 jb 0x763a74
// 00763a51  2bc6                 sub eax, esi
// 00763a53  83e80c               sub eax, 0xc
// 00763a56  741c                 je 0x763a74
// 00763a58  50                   push eax
// 00763a59  8b4608               mov eax, dword ptr [esi + 8]
// 00763a5c  8d7e0c               lea edi, [esi + 0xc]
// 00763a5f  57                   push edi
// 00763a60  50                   push eax
// 00763a61  e8faeeffff           call 0x762960
// 00763a66  ff4604               inc dword ptr [esi + 4]
// 00763a69  56                   push esi
// 00763a6a  893e                 mov dword ptr [esi], edi
// 00763a6c  e80fffffff           call 0x763980
// 00763a71  83c410               add esp, 0x10
// 00763a74  8a5500               mov dl, byte ptr [ebp]
// 00763a77  8b0e                 mov ecx, dword ptr [esi]
// 00763a79  8811                 mov byte ptr [ecx], dl
// 00763a7b  ff06                 inc dword ptr [esi]
// 00763a7d  45                   inc ebp
// 00763a7e  85db                 test ebx, ebx
// 00763a80  75c2                 jne 0x763a44
// 00763a82  5f                   pop edi
// 00763a83  5e                   pop esi
// 00763a84  5d                   pop ebp
// 00763a85  5b                   pop ebx
// 00763a86  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_addlstring)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
