// roc 2009-06 006f9f70  unit: RBX::GroupDragTool  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f9f70
//
// 006f9f70  8b442408             mov eax, dword ptr [esp + 8]
// 006f9f74  8b08                 mov ecx, dword ptr [eax]
// 006f9f76  83f90d               cmp ecx, 0xd
// 006f9f79  7522                 jne 0x6f9f9d
// 006f9f7b  8b542404             mov edx, dword ptr [esp + 4]
// 006f9f7f  8b4808               mov ecx, dword ptr [eax + 8]
// 006f9f82  c7000c000000         mov dword ptr [eax], 0xc
// 006f9f88  8b12                 mov edx, dword ptr [edx]
// 006f9f8a  8b520c               mov edx, dword ptr [edx + 0xc]
// 006f9f8d  8b0c8a               mov ecx, dword ptr [edx + ecx*4]
// 006f9f90  c1e906               shr ecx, 6
// 006f9f93  81e1ff000000         and ecx, 0xff
// 006f9f99  894808               mov dword ptr [eax + 8], ecx
// 006f9f9c  c3                   ret 
// 006f9f9d  83f90e               cmp ecx, 0xe
// 006f9fa0  7525                 jne 0x6f9fc7
// 006f9fa2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006f9fa6  8b09                 mov ecx, dword ptr [ecx]
// 006f9fa8  8b5008               mov edx, dword ptr [eax + 8]
// 006f9fab  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 006f9fae  8d0c91               lea ecx, [ecx + edx*4]
// 006f9fb1  8b11                 mov edx, dword ptr [ecx]
// 006f9fb3  81e2ffff7f00         and edx, 0x7fffff
// 006f9fb9  81ca00000001         or edx, 0x1000000
// 006f9fbf  8911                 mov dword ptr [ecx], edx
// 006f9fc1  c7000b000000         mov dword ptr [eax], 0xb
// 006f9fc7  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_setoneret)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
