// from server: 100% by auto
// roc 2009-06 006f9bf0  unit: RBX::GroupDragTool  size: 186 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f9bf0
//
// 006f9bf0  51                   push ecx
// 006f9bf1  55                   push ebp
// 006f9bf2  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 006f9bf6  57                   push edi
// 006f9bf7  8bf8                 mov edi, eax
// 006f9bf9  83ffff               cmp edi, -1
// 006f9bfc  0f84a4000000         je 0x6f9ca6
// 006f9c02  53                   push ebx
// 006f9c03  56                   push esi
// 006f9c04  eb0a                 jmp 0x6f9c10
// 006f9c06  8da42400000000       lea esp, [esp]
// 006f9c0d  8d4900               lea ecx, [ecx]
// 006f9c10  8b4500               mov eax, dword ptr [ebp]
// 006f9c13  8b480c               mov ecx, dword ptr [eax + 0xc]
// 006f9c16  8d34bd00000000       lea esi, [edi*4]
// 006f9c1d  8b040e               mov eax, dword ptr [esi + ecx]
// 006f9c20  c1e80e               shr eax, 0xe
// 006f9c23  2dffff0100           sub eax, 0x1ffff
// 006f9c28  83f8ff               cmp eax, -1
// 006f9c2b  7506                 jne 0x6f9c33
// 006f9c2d  89442410             mov dword ptr [esp + 0x10], eax
// 006f9c31  eb08                 jmp 0x6f9c3b
// 006f9c33  8d543801             lea edx, [eax + edi + 1]
// 006f9c37  89542410             mov dword ptr [esp + 0x10], edx
// 006f9c3b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006f9c3f  8bc7                 mov eax, edi
// 006f9c41  8bd5                 mov edx, ebp
// 006f9c43  e898feffff           call 0x6f9ae0
// 006f9c48  85c0                 test eax, eax
// 006f9c4a  8b4500               mov eax, dword ptr [ebp]
// 006f9c4d  8b580c               mov ebx, dword ptr [eax + 0xc]
// 006f9c50  7408                 je 0x6f9c5a
// 006f9c52  03de                 add ebx, esi
// 006f9c54  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 006f9c58  eb06                 jmp 0x6f9c60
// 006f9c5a  03de                 add ebx, esi
// 006f9c5c  8b742424             mov esi, dword ptr [esp + 0x24]
// 006f9c60  2bf7                 sub esi, edi
// 006f9c62  4e                   dec esi
// 006f9c63  8bc6                 mov eax, esi
// 006f9c65  99                   cdq 
// 006f9c66  33c2                 xor eax, edx
// 006f9c68  2bc2                 sub eax, edx
// 006f9c6a  3dffff0100           cmp eax, 0x1ffff
// 006f9c6f  7e11                 jle 0x6f9c82
// 006f9c71  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 006f9c74  6820ea8e00           push 0x8eea20
// 006f9c79  51                   push ecx
// 006f9c7a  e87176ffff           call 0x6f12f0
// 006f9c7f  83c408               add esp, 8
// 006f9c82  8b13                 mov edx, dword ptr [ebx]
// 006f9c84  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006f9c88  81c6ffff0100         add esi, 0x1ffff
// 006f9c8e  81e2ff3f0000         and edx, 0x3fff
// 006f9c94  c1e60e               shl esi, 0xe
// 006f9c97  33f2                 xor esi, edx
// 006f9c99  8933                 mov dword ptr [ebx], esi
// 006f9c9b  83ffff               cmp edi, -1
// 006f9c9e  0f856cffffff         jne 0x6f9c10
// 006f9ca4  5e                   pop esi
// 006f9ca5  5b                   pop ebx
// 006f9ca6  5f                   pop edi
// 006f9ca7  5d                   pop ebp
// 006f9ca8  59                   pop ecx
// 006f9ca9  c3                   ret 
// library lua-5.1.4/lcode.c (function _patchlistaux)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
