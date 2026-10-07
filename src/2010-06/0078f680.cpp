// roc 2010-06 0078f680  unit: RBX::GroupDragTool  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0078f680
//
// 0078f680  53                   push ebx
// 0078f681  56                   push esi
// 0078f682  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0078f686  8b06                 mov eax, dword ptr [esi]
// 0078f688  8b5e24               mov ebx, dword ptr [esi + 0x24]
// 0078f68b  0fb6484b             movzx ecx, byte ptr [eax + 0x4b]
// 0078f68f  035c2410             add ebx, dword ptr [esp + 0x10]
// 0078f693  3bd9                 cmp ebx, ecx
// 0078f695  7e1e                 jle 0x78f6b5
// 0078f697  81fbfa000000         cmp ebx, 0xfa
// 0078f69d  7c11                 jl 0x78f6b0
// 0078f69f  8b560c               mov edx, dword ptr [esi + 0xc]
// 0078f6a2  68143ea500           push 0xa53e14
// 0078f6a7  52                   push edx
// 0078f6a8  e8e32effff           call 0x782590
// 0078f6ad  83c408               add esp, 8
// 0078f6b0  8b06                 mov eax, dword ptr [esi]
// 0078f6b2  88584b               mov byte ptr [eax + 0x4b], bl
// 0078f6b5  5e                   pop esi
// 0078f6b6  5b                   pop ebx
// 0078f6b7  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_checkstack)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
