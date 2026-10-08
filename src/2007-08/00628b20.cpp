// from server: 100% by auto
// roc 2007-08 00628b20  unit: RBX::AssemblyStage  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00628b20
//
// 00628b20  8b442408             mov eax, dword ptr [esp + 8]
// 00628b24  8b08                 mov ecx, dword ptr [eax]
// 00628b26  83f90d               cmp ecx, 0xd
// 00628b29  7522                 jne 0x628b4d
// 00628b2b  8b542404             mov edx, dword ptr [esp + 4]
// 00628b2f  8b4808               mov ecx, dword ptr [eax + 8]
// 00628b32  c7000c000000         mov dword ptr [eax], 0xc
// 00628b38  8b12                 mov edx, dword ptr [edx]
// 00628b3a  8b520c               mov edx, dword ptr [edx + 0xc]
// 00628b3d  8b0c8a               mov ecx, dword ptr [edx + ecx*4]
// 00628b40  c1e906               shr ecx, 6
// 00628b43  81e1ff000000         and ecx, 0xff
// 00628b49  894808               mov dword ptr [eax + 8], ecx
// 00628b4c  c3                   ret 
// 00628b4d  83f90e               cmp ecx, 0xe
// 00628b50  7525                 jne 0x628b77
// 00628b52  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00628b56  8b09                 mov ecx, dword ptr [ecx]
// 00628b58  8b5008               mov edx, dword ptr [eax + 8]
// 00628b5b  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 00628b5e  8d0c91               lea ecx, [ecx + edx*4]
// 00628b61  8b11                 mov edx, dword ptr [ecx]
// 00628b63  81e2ffff7f00         and edx, 0x7fffff
// 00628b69  81ca00000001         or edx, 0x1000000
// 00628b6f  8911                 mov dword ptr [ecx], edx
// 00628b71  c7000b000000         mov dword ptr [eax], 0xb
// 00628b77  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_setoneret)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
