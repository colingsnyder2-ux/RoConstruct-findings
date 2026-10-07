// roc 2012-06 008331c0  unit: RBX::PAVPrimitive::$$A6AXU?$pair::?$signal::Vslot::?$callable  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008331c0
//
// 008331c0  53                   push ebx
// 008331c1  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 008331c5  85db                 test ebx, ebx
// 008331c7  744c                 je 0x833215
// 008331c9  55                   push ebp
// 008331ca  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 008331ce  56                   push esi
// 008331cf  8b742410             mov esi, dword ptr [esp + 0x10]
// 008331d3  57                   push edi
// 008331d4  8b06                 mov eax, dword ptr [esi]
// 008331d6  8d8e0c020000         lea ecx, [esi + 0x20c]
// 008331dc  4b                   dec ebx
// 008331dd  3bc1                 cmp eax, ecx
// 008331df  7223                 jb 0x833204
// 008331e1  2bc6                 sub eax, esi
// 008331e3  83e80c               sub eax, 0xc
// 008331e6  741c                 je 0x833204
// 008331e8  50                   push eax
// 008331e9  8b4608               mov eax, dword ptr [esi + 8]
// 008331ec  8d7e0c               lea edi, [esi + 0xc]
// 008331ef  57                   push edi
// 008331f0  50                   push eax
// 008331f1  e8faeeffff           call 0x8320f0
// 008331f6  ff4604               inc dword ptr [esi + 4]
// 008331f9  56                   push esi
// 008331fa  893e                 mov dword ptr [esi], edi
// 008331fc  e80fffffff           call 0x833110
// 00833201  83c410               add esp, 0x10
// 00833204  8a5500               mov dl, byte ptr [ebp]
// 00833207  8b0e                 mov ecx, dword ptr [esi]
// 00833209  8811                 mov byte ptr [ecx], dl
// 0083320b  ff06                 inc dword ptr [esi]
// 0083320d  45                   inc ebp
// 0083320e  85db                 test ebx, ebx
// 00833210  75c2                 jne 0x8331d4
// 00833212  5f                   pop edi
// 00833213  5e                   pop esi
// 00833214  5d                   pop ebp
// 00833215  5b                   pop ebx
// 00833216  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_addlstring)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
