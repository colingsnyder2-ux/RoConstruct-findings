// roc 2011-06 007f22e0  unit: RBX::AdvLuaDragTool  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007f22e0
//
// 007f22e0  53                   push ebx
// 007f22e1  56                   push esi
// 007f22e2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007f22e6  8b06                 mov eax, dword ptr [esi]
// 007f22e8  8b5e24               mov ebx, dword ptr [esi + 0x24]
// 007f22eb  0fb6484b             movzx ecx, byte ptr [eax + 0x4b]
// 007f22ef  57                   push edi
// 007f22f0  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 007f22f4  03df                 add ebx, edi
// 007f22f6  3bd9                 cmp ebx, ecx
// 007f22f8  7e1e                 jle 0x7f2318
// 007f22fa  81fbfa000000         cmp ebx, 0xfa
// 007f2300  7c11                 jl 0x7f2313
// 007f2302  8b560c               mov edx, dword ptr [esi + 0xc]
// 007f2305  6850f2ab00           push 0xabf250
// 007f230a  52                   push edx
// 007f230b  e860c7feff           call 0x7dea70
// 007f2310  83c408               add esp, 8
// 007f2313  8b06                 mov eax, dword ptr [esi]
// 007f2315  88584b               mov byte ptr [eax + 0x4b], bl
// 007f2318  017e24               add dword ptr [esi + 0x24], edi
// 007f231b  5f                   pop edi
// 007f231c  5e                   pop esi
// 007f231d  5b                   pop ebx
// 007f231e  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_reserveregs)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
