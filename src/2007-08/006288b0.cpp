// roc 2007-08 006288b0  unit: RBX::AssemblyStage  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006288b0
//
// 006288b0  53                   push ebx
// 006288b1  56                   push esi
// 006288b2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006288b6  8b06                 mov eax, dword ptr [esi]
// 006288b8  8b5e24               mov ebx, dword ptr [esi + 0x24]
// 006288bb  0fb6484b             movzx ecx, byte ptr [eax + 0x4b]
// 006288bf  57                   push edi
// 006288c0  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 006288c4  03df                 add ebx, edi
// 006288c6  3bd9                 cmp ebx, ecx
// 006288c8  7e1e                 jle 0x6288e8
// 006288ca  81fbfa000000         cmp ebx, 0xfa
// 006288d0  7c11                 jl 0x6288e3
// 006288d2  8b560c               mov edx, dword ptr [esi + 0xc]
// 006288d5  68fc4b7c00           push 0x7c4bfc
// 006288da  52                   push edx
// 006288db  e8e0ecfeff           call 0x6175c0
// 006288e0  83c408               add esp, 8
// 006288e3  8b06                 mov eax, dword ptr [esi]
// 006288e5  88584b               mov byte ptr [eax + 0x4b], bl
// 006288e8  017e24               add dword ptr [esi + 0x24], edi
// 006288eb  5f                   pop edi
// 006288ec  5e                   pop esi
// 006288ed  5b                   pop ebx
// 006288ee  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_reserveregs)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
