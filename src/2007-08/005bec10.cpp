// roc 2007-08 005bec10  unit: boost::detail::H::?$sp_counted_impl_p  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bec10
//
// 005bec10  53                   push ebx
// 005bec11  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005bec15  85db                 test ebx, ebx
// 005bec17  7452                 je 0x5bec6b
// 005bec19  55                   push ebp
// 005bec1a  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 005bec1e  56                   push esi
// 005bec1f  8b742410             mov esi, dword ptr [esp + 0x10]
// 005bec23  57                   push edi
// 005bec24  8b06                 mov eax, dword ptr [esi]
// 005bec26  8d8e0c020000         lea ecx, [esi + 0x20c]
// 005bec2c  83eb01               sub ebx, 1
// 005bec2f  3bc1                 cmp eax, ecx
// 005bec31  7224                 jb 0x5bec57
// 005bec33  2bc6                 sub eax, esi
// 005bec35  83e80c               sub eax, 0xc
// 005bec38  741d                 je 0x5bec57
// 005bec3a  50                   push eax
// 005bec3b  8b4608               mov eax, dword ptr [esi + 8]
// 005bec3e  8d7e0c               lea edi, [esi + 0xc]
// 005bec41  57                   push edi
// 005bec42  50                   push eax
// 005bec43  e868efffff           call 0x5bdbb0
// 005bec48  83460401             add dword ptr [esi + 4], 1
// 005bec4c  56                   push esi
// 005bec4d  893e                 mov dword ptr [esi], edi
// 005bec4f  e8fcfeffff           call 0x5beb50
// 005bec54  83c410               add esp, 0x10
// 005bec57  8a5500               mov dl, byte ptr [ebp]
// 005bec5a  8b0e                 mov ecx, dword ptr [esi]
// 005bec5c  8811                 mov byte ptr [ecx], dl
// 005bec5e  830601               add dword ptr [esi], 1
// 005bec61  83c501               add ebp, 1
// 005bec64  85db                 test ebx, ebx
// 005bec66  75bc                 jne 0x5bec24
// 005bec68  5f                   pop edi
// 005bec69  5e                   pop esi
// 005bec6a  5d                   pop ebp
// 005bec6b  5b                   pop ebx
// 005bec6c  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_addlstring)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
