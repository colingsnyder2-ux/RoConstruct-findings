// from server: 100% by auto
// roc 2009-06 006f9d00  unit: RBX::GroupDragTool  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f9d00
//
// 006f9d00  53                   push ebx
// 006f9d01  56                   push esi
// 006f9d02  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006f9d06  8b06                 mov eax, dword ptr [esi]
// 006f9d08  8b5e24               mov ebx, dword ptr [esi + 0x24]
// 006f9d0b  0fb6484b             movzx ecx, byte ptr [eax + 0x4b]
// 006f9d0f  035c2410             add ebx, dword ptr [esp + 0x10]
// 006f9d13  3bd9                 cmp ebx, ecx
// 006f9d15  7e1e                 jle 0x6f9d35
// 006f9d17  81fbfa000000         cmp ebx, 0xfa
// 006f9d1d  7c11                 jl 0x6f9d30
// 006f9d1f  8b560c               mov edx, dword ptr [esi + 0xc]
// 006f9d22  683cea8e00           push 0x8eea3c
// 006f9d27  52                   push edx
// 006f9d28  e8c375ffff           call 0x6f12f0
// 006f9d2d  83c408               add esp, 8
// 006f9d30  8b06                 mov eax, dword ptr [esi]
// 006f9d32  88584b               mov byte ptr [eax + 0x4b], bl
// 006f9d35  5e                   pop esi
// 006f9d36  5b                   pop ebx
// 006f9d37  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_checkstack)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
