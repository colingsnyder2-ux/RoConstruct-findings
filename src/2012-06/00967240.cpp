// roc 2012-06 00967240  unit: RBX::CellContact  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00967240
//
// 00967240  53                   push ebx
// 00967241  56                   push esi
// 00967242  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00967246  8b06                 mov eax, dword ptr [esi]
// 00967248  8b5e24               mov ebx, dword ptr [esi + 0x24]
// 0096724b  0fb6484b             movzx ecx, byte ptr [eax + 0x4b]
// 0096724f  035c2410             add ebx, dword ptr [esp + 0x10]
// 00967253  3bd9                 cmp ebx, ecx
// 00967255  7e1e                 jle 0x967275
// 00967257  81fbfa000000         cmp ebx, 0xfa
// 0096725d  7c11                 jl 0x967270
// 0096725f  8b560c               mov edx, dword ptr [esi + 0xc]
// 00967262  68807cc000           push 0xc07c80
// 00967267  52                   push edx
// 00967268  e8a3fffcff           call 0x937210
// 0096726d  83c408               add esp, 8
// 00967270  8b06                 mov eax, dword ptr [esi]
// 00967272  88584b               mov byte ptr [eax + 0x4b], bl
// 00967275  5e                   pop esi
// 00967276  5b                   pop ebx
// 00967277  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_checkstack)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
