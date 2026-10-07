// roc 2012-06 00967280  unit: RBX::CellContact  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00967280
//
// 00967280  53                   push ebx
// 00967281  56                   push esi
// 00967282  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00967286  8b06                 mov eax, dword ptr [esi]
// 00967288  8b5e24               mov ebx, dword ptr [esi + 0x24]
// 0096728b  0fb6484b             movzx ecx, byte ptr [eax + 0x4b]
// 0096728f  57                   push edi
// 00967290  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00967294  03df                 add ebx, edi
// 00967296  3bd9                 cmp ebx, ecx
// 00967298  7e1e                 jle 0x9672b8
// 0096729a  81fbfa000000         cmp ebx, 0xfa
// 009672a0  7c11                 jl 0x9672b3
// 009672a2  8b560c               mov edx, dword ptr [esi + 0xc]
// 009672a5  68807cc000           push 0xc07c80
// 009672aa  52                   push edx
// 009672ab  e860fffcff           call 0x937210
// 009672b0  83c408               add esp, 8
// 009672b3  8b06                 mov eax, dword ptr [esi]
// 009672b5  88584b               mov byte ptr [eax + 0x4b], bl
// 009672b8  017e24               add dword ptr [esi + 0x24], edi
// 009672bb  5f                   pop edi
// 009672bc  5e                   pop esi
// 009672bd  5b                   pop ebx
// 009672be  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_reserveregs)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
