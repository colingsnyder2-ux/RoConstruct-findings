// from server: 100% by auto
// roc 2010-06 0078f8f0  unit: RBX::GroupDragTool  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0078f8f0
//
// 0078f8f0  8b442408             mov eax, dword ptr [esp + 8]
// 0078f8f4  8b08                 mov ecx, dword ptr [eax]
// 0078f8f6  83f90d               cmp ecx, 0xd
// 0078f8f9  7522                 jne 0x78f91d
// 0078f8fb  8b542404             mov edx, dword ptr [esp + 4]
// 0078f8ff  8b4808               mov ecx, dword ptr [eax + 8]
// 0078f902  c7000c000000         mov dword ptr [eax], 0xc
// 0078f908  8b12                 mov edx, dword ptr [edx]
// 0078f90a  8b520c               mov edx, dword ptr [edx + 0xc]
// 0078f90d  8b0c8a               mov ecx, dword ptr [edx + ecx*4]
// 0078f910  c1e906               shr ecx, 6
// 0078f913  81e1ff000000         and ecx, 0xff
// 0078f919  894808               mov dword ptr [eax + 8], ecx
// 0078f91c  c3                   ret 
// 0078f91d  83f90e               cmp ecx, 0xe
// 0078f920  7525                 jne 0x78f947
// 0078f922  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0078f926  8b09                 mov ecx, dword ptr [ecx]
// 0078f928  8b5008               mov edx, dword ptr [eax + 8]
// 0078f92b  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0078f92e  8d0c91               lea ecx, [ecx + edx*4]
// 0078f931  8b11                 mov edx, dword ptr [ecx]
// 0078f933  81e2ffff7f00         and edx, 0x7fffff
// 0078f939  81ca00000001         or edx, 0x1000000
// 0078f93f  8911                 mov dword ptr [ecx], edx
// 0078f941  c7000b000000         mov dword ptr [eax], 0xb
// 0078f947  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_setoneret)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
