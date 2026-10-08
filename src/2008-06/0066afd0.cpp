// from server: 100% by auto
// roc 2008-06 0066afd0  unit: RBX::GroupDragTool  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066afd0
//
// 0066afd0  8b442408             mov eax, dword ptr [esp + 8]
// 0066afd4  8b08                 mov ecx, dword ptr [eax]
// 0066afd6  83f90d               cmp ecx, 0xd
// 0066afd9  7522                 jne 0x66affd
// 0066afdb  8b542404             mov edx, dword ptr [esp + 4]
// 0066afdf  8b4808               mov ecx, dword ptr [eax + 8]
// 0066afe2  c7000c000000         mov dword ptr [eax], 0xc
// 0066afe8  8b12                 mov edx, dword ptr [edx]
// 0066afea  8b520c               mov edx, dword ptr [edx + 0xc]
// 0066afed  8b0c8a               mov ecx, dword ptr [edx + ecx*4]
// 0066aff0  c1e906               shr ecx, 6
// 0066aff3  81e1ff000000         and ecx, 0xff
// 0066aff9  894808               mov dword ptr [eax + 8], ecx
// 0066affc  c3                   ret 
// 0066affd  83f90e               cmp ecx, 0xe
// 0066b000  7525                 jne 0x66b027
// 0066b002  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0066b006  8b09                 mov ecx, dword ptr [ecx]
// 0066b008  8b5008               mov edx, dword ptr [eax + 8]
// 0066b00b  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0066b00e  8d0c91               lea ecx, [ecx + edx*4]
// 0066b011  8b11                 mov edx, dword ptr [ecx]
// 0066b013  81e2ffff7f00         and edx, 0x7fffff
// 0066b019  81ca00000001         or edx, 0x1000000
// 0066b01f  8911                 mov dword ptr [ecx], edx
// 0066b021  c7000b000000         mov dword ptr [eax], 0xb
// 0066b027  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_setoneret)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
