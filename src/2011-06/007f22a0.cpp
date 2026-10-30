// from server: 100% by auto
// roc 2011-06 007f22a0  unit: RBX::AdvLuaDragTool  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007f22a0
//
// 007f22a0  53                   push ebx
// 007f22a1  56                   push esi
// 007f22a2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007f22a6  8b06                 mov eax, dword ptr [esi]
// 007f22a8  8b5e24               mov ebx, dword ptr [esi + 0x24]
// 007f22ab  0fb6484b             movzx ecx, byte ptr [eax + 0x4b]
// 007f22af  035c2410             add ebx, dword ptr [esp + 0x10]
// 007f22b3  3bd9                 cmp ebx, ecx
// 007f22b5  7e1e                 jle 0x7f22d5
// 007f22b7  81fbfa000000         cmp ebx, 0xfa
// 007f22bd  7c11                 jl 0x7f22d0
// 007f22bf  8b560c               mov edx, dword ptr [esi + 0xc]
// 007f22c2  6850f2ab00           push 0xabf250
// 007f22c7  52                   push edx
// 007f22c8  e8a3c7feff           call 0x7dea70
// 007f22cd  83c408               add esp, 8
// 007f22d0  8b06                 mov eax, dword ptr [esi]
// 007f22d2  88584b               mov byte ptr [eax + 0x4b], bl
// 007f22d5  5e                   pop esi
// 007f22d6  5b                   pop ebx
// 007f22d7  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_checkstack)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
