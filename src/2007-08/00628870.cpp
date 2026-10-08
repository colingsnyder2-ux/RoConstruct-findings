// from server: 100% by auto
// roc 2007-08 00628870  unit: RBX::AssemblyStage  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00628870
//
// 00628870  53                   push ebx
// 00628871  56                   push esi
// 00628872  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00628876  8b06                 mov eax, dword ptr [esi]
// 00628878  8b5e24               mov ebx, dword ptr [esi + 0x24]
// 0062887b  0fb6484b             movzx ecx, byte ptr [eax + 0x4b]
// 0062887f  035c2410             add ebx, dword ptr [esp + 0x10]
// 00628883  3bd9                 cmp ebx, ecx
// 00628885  7e1e                 jle 0x6288a5
// 00628887  81fbfa000000         cmp ebx, 0xfa
// 0062888d  7c11                 jl 0x6288a0
// 0062888f  8b560c               mov edx, dword ptr [esi + 0xc]
// 00628892  68fc4b7c00           push 0x7c4bfc
// 00628897  52                   push edx
// 00628898  e823edfeff           call 0x6175c0
// 0062889d  83c408               add esp, 8
// 006288a0  8b06                 mov eax, dword ptr [esi]
// 006288a2  88584b               mov byte ptr [eax + 0x4b], bl
// 006288a5  5e                   pop esi
// 006288a6  5b                   pop ebx
// 006288a7  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_checkstack)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
