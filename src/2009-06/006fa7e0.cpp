// roc 2009-06 006fa7e0  unit: RBX::GroupDragTool  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006fa7e0
//
// 006fa7e0  53                   push ebx
// 006fa7e1  56                   push esi
// 006fa7e2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006fa7e6  57                   push edi
// 006fa7e7  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 006fa7eb  57                   push edi
// 006fa7ec  56                   push esi
// 006fa7ed  e85efcffff           call 0x6fa450
// 006fa7f2  83c408               add esp, 8
// 006fa7f5  833f0c               cmp dword ptr [edi], 0xc
// 006fa7f8  7515                 jne 0x6fa80f
// 006fa7fa  8b4708               mov eax, dword ptr [edi + 8]
// 006fa7fd  a900010000           test eax, 0x100
// 006fa802  750b                 jne 0x6fa80f
// 006fa804  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 006fa808  3bc1                 cmp eax, ecx
// 006fa80a  7c03                 jl 0x6fa80f
// 006fa80c  ff4e24               dec dword ptr [esi + 0x24]
// 006fa80f  8b16                 mov edx, dword ptr [esi]
// 006fa811  8b5e24               mov ebx, dword ptr [esi + 0x24]
// 006fa814  0fb6424b             movzx eax, byte ptr [edx + 0x4b]
// 006fa818  43                   inc ebx
// 006fa819  3bd8                 cmp ebx, eax
// 006fa81b  7e1e                 jle 0x6fa83b
// 006fa81d  81fbfa000000         cmp ebx, 0xfa
// 006fa823  7c11                 jl 0x6fa836
// 006fa825  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 006fa828  683cea8e00           push 0x8eea3c
// 006fa82d  51                   push ecx
// 006fa82e  e8bd6affff           call 0x6f12f0
// 006fa833  83c408               add esp, 8
// 006fa836  8b16                 mov edx, dword ptr [esi]
// 006fa838  885a4b               mov byte ptr [edx + 0x4b], bl
// 006fa83b  ff4624               inc dword ptr [esi + 0x24]
// 006fa83e  8b4624               mov eax, dword ptr [esi + 0x24]
// 006fa841  48                   dec eax
// 006fa842  50                   push eax
// 006fa843  8bc7                 mov eax, edi
// 006fa845  8bce                 mov ecx, esi
// 006fa847  e874feffff           call 0x6fa6c0
// 006fa84c  83c404               add esp, 4
// 006fa84f  5f                   pop edi
// 006fa850  5e                   pop esi
// 006fa851  5b                   pop ebx
// 006fa852  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_exp2nextreg)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
