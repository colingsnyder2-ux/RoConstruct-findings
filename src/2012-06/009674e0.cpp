// from server: 100% by auto
// roc 2012-06 009674e0  unit: RBX::CellContact  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009674e0
//
// 009674e0  8b442408             mov eax, dword ptr [esp + 8]
// 009674e4  8b08                 mov ecx, dword ptr [eax]
// 009674e6  83f90d               cmp ecx, 0xd
// 009674e9  7522                 jne 0x96750d
// 009674eb  8b542404             mov edx, dword ptr [esp + 4]
// 009674ef  8b4808               mov ecx, dword ptr [eax + 8]
// 009674f2  c7000c000000         mov dword ptr [eax], 0xc
// 009674f8  8b12                 mov edx, dword ptr [edx]
// 009674fa  8b520c               mov edx, dword ptr [edx + 0xc]
// 009674fd  8b0c8a               mov ecx, dword ptr [edx + ecx*4]
// 00967500  c1e906               shr ecx, 6
// 00967503  81e1ff000000         and ecx, 0xff
// 00967509  894808               mov dword ptr [eax + 8], ecx
// 0096750c  c3                   ret 
// 0096750d  83f90e               cmp ecx, 0xe
// 00967510  7525                 jne 0x967537
// 00967512  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00967516  8b09                 mov ecx, dword ptr [ecx]
// 00967518  8b5008               mov edx, dword ptr [eax + 8]
// 0096751b  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0096751e  8d0c91               lea ecx, [ecx + edx*4]
// 00967521  8b11                 mov edx, dword ptr [ecx]
// 00967523  81e2ffff7f00         and edx, 0x7fffff
// 00967529  81ca00000001         or edx, 0x1000000
// 0096752f  8911                 mov dword ptr [ecx], edx
// 00967531  c7000b000000         mov dword ptr [eax], 0xb
// 00967537  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_setoneret)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
