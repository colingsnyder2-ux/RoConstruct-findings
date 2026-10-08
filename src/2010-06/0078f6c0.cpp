// from server: 100% by auto
// roc 2010-06 0078f6c0  unit: RBX::GroupDragTool  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0078f6c0
//
// 0078f6c0  53                   push ebx
// 0078f6c1  56                   push esi
// 0078f6c2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0078f6c6  8b06                 mov eax, dword ptr [esi]
// 0078f6c8  8b5e24               mov ebx, dword ptr [esi + 0x24]
// 0078f6cb  0fb6484b             movzx ecx, byte ptr [eax + 0x4b]
// 0078f6cf  57                   push edi
// 0078f6d0  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0078f6d4  03df                 add ebx, edi
// 0078f6d6  3bd9                 cmp ebx, ecx
// 0078f6d8  7e1e                 jle 0x78f6f8
// 0078f6da  81fbfa000000         cmp ebx, 0xfa
// 0078f6e0  7c11                 jl 0x78f6f3
// 0078f6e2  8b560c               mov edx, dword ptr [esi + 0xc]
// 0078f6e5  68143ea500           push 0xa53e14
// 0078f6ea  52                   push edx
// 0078f6eb  e8a02effff           call 0x782590
// 0078f6f0  83c408               add esp, 8
// 0078f6f3  8b06                 mov eax, dword ptr [esi]
// 0078f6f5  88584b               mov byte ptr [eax + 0x4b], bl
// 0078f6f8  017e24               add dword ptr [esi + 0x24], edi
// 0078f6fb  5f                   pop edi
// 0078f6fc  5e                   pop esi
// 0078f6fd  5b                   pop ebx
// 0078f6fe  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_reserveregs)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
