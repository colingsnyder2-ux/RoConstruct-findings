// from server: 100% by auto
// roc 2011-06 007f2540  unit: RBX::AdvLuaDragTool  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007f2540
//
// 007f2540  8b442408             mov eax, dword ptr [esp + 8]
// 007f2544  8b08                 mov ecx, dword ptr [eax]
// 007f2546  83f90d               cmp ecx, 0xd
// 007f2549  7522                 jne 0x7f256d
// 007f254b  8b542404             mov edx, dword ptr [esp + 4]
// 007f254f  8b4808               mov ecx, dword ptr [eax + 8]
// 007f2552  c7000c000000         mov dword ptr [eax], 0xc
// 007f2558  8b12                 mov edx, dword ptr [edx]
// 007f255a  8b520c               mov edx, dword ptr [edx + 0xc]
// 007f255d  8b0c8a               mov ecx, dword ptr [edx + ecx*4]
// 007f2560  c1e906               shr ecx, 6
// 007f2563  81e1ff000000         and ecx, 0xff
// 007f2569  894808               mov dword ptr [eax + 8], ecx
// 007f256c  c3                   ret 
// 007f256d  83f90e               cmp ecx, 0xe
// 007f2570  7525                 jne 0x7f2597
// 007f2572  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007f2576  8b09                 mov ecx, dword ptr [ecx]
// 007f2578  8b5008               mov edx, dword ptr [eax + 8]
// 007f257b  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 007f257e  8d0c91               lea ecx, [ecx + edx*4]
// 007f2581  8b11                 mov edx, dword ptr [ecx]
// 007f2583  81e2ffff7f00         and edx, 0x7fffff
// 007f2589  81ca00000001         or edx, 0x1000000
// 007f258f  8911                 mov dword ptr [ecx], edx
// 007f2591  c7000b000000         mov dword ptr [eax], 0xb
// 007f2597  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_setoneret)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
