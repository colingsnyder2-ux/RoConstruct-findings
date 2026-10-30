// from server: 100% by auto
// roc 2008-06 0066ad60  unit: RBX::GroupDragTool  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066ad60
//
// 0066ad60  53                   push ebx
// 0066ad61  56                   push esi
// 0066ad62  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0066ad66  8b06                 mov eax, dword ptr [esi]
// 0066ad68  8b5e24               mov ebx, dword ptr [esi + 0x24]
// 0066ad6b  0fb6484b             movzx ecx, byte ptr [eax + 0x4b]
// 0066ad6f  035c2410             add ebx, dword ptr [esp + 0x10]
// 0066ad73  3bd9                 cmp ebx, ecx
// 0066ad75  7e1e                 jle 0x66ad95
// 0066ad77  81fbfa000000         cmp ebx, 0xfa
// 0066ad7d  7c11                 jl 0x66ad90
// 0066ad7f  8b560c               mov edx, dword ptr [esi + 0xc]
// 0066ad82  6888d08400           push 0x84d088
// 0066ad87  52                   push edx
// 0066ad88  e88394ffff           call 0x664210
// 0066ad8d  83c408               add esp, 8
// 0066ad90  8b06                 mov eax, dword ptr [esi]
// 0066ad92  88584b               mov byte ptr [eax + 0x4b], bl
// 0066ad95  5e                   pop esi
// 0066ad96  5b                   pop ebx
// 0066ad97  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_checkstack)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
