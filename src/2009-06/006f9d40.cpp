// roc 2009-06 006f9d40  unit: RBX::GroupDragTool  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f9d40
//
// 006f9d40  53                   push ebx
// 006f9d41  56                   push esi
// 006f9d42  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006f9d46  8b06                 mov eax, dword ptr [esi]
// 006f9d48  8b5e24               mov ebx, dword ptr [esi + 0x24]
// 006f9d4b  0fb6484b             movzx ecx, byte ptr [eax + 0x4b]
// 006f9d4f  57                   push edi
// 006f9d50  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 006f9d54  03df                 add ebx, edi
// 006f9d56  3bd9                 cmp ebx, ecx
// 006f9d58  7e1e                 jle 0x6f9d78
// 006f9d5a  81fbfa000000         cmp ebx, 0xfa
// 006f9d60  7c11                 jl 0x6f9d73
// 006f9d62  8b560c               mov edx, dword ptr [esi + 0xc]
// 006f9d65  683cea8e00           push 0x8eea3c
// 006f9d6a  52                   push edx
// 006f9d6b  e88075ffff           call 0x6f12f0
// 006f9d70  83c408               add esp, 8
// 006f9d73  8b06                 mov eax, dword ptr [esi]
// 006f9d75  88584b               mov byte ptr [eax + 0x4b], bl
// 006f9d78  017e24               add dword ptr [esi + 0x24], edi
// 006f9d7b  5f                   pop edi
// 006f9d7c  5e                   pop esi
// 006f9d7d  5b                   pop ebx
// 006f9d7e  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_reserveregs)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
