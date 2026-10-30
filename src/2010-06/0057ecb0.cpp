// from server: 100% by auto
// roc 2010-06 0057ecb0  unit: seg_00570000  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0057ecb0
//
// 0057ecb0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0057ecb4  8b442404             mov eax, dword ptr [esp + 4]
// 0057ecb8  53                   push ebx
// 0057ecb9  33db                 xor ebx, ebx
// 0057ecbb  2bcb                 sub ecx, ebx
// 0057ecbd  56                   push esi
// 0057ecbe  8bb084010000         mov esi, dword ptr [eax + 0x184]
// 0057ecc4  7425                 je 0x57eceb
// 0057ecc6  83e902               sub ecx, 2
// 0057ecc9  7416                 je 0x57ece1
// 0057eccb  8b08                 mov ecx, dword ptr [eax]
// 0057eccd  c7411404000000       mov dword ptr [ecx + 0x14], 4
// 0057ecd4  8b10                 mov edx, dword ptr [eax]
// 0057ecd6  50                   push eax
// 0057ecd7  8b02                 mov eax, dword ptr [edx]
// 0057ecd9  ffd0                 call eax
// 0057ecdb  83c404               add esp, 4
// 0057ecde  5e                   pop esi
// 0057ecdf  5b                   pop ebx
// 0057ece0  c3                   ret 
// 0057ece1  c7460480ec5700       mov dword ptr [esi + 4], 0x57ec80
// 0057ece8  5e                   pop esi
// 0057ece9  5b                   pop ebx
// 0057ecea  c3                   ret 
// 0057eceb  8b88a0010000         mov ecx, dword ptr [eax + 0x1a0]
// 0057ecf1  385908               cmp byte ptr [ecx + 8], bl
// 0057ecf4  7422                 je 0x57ed18
// 0057ecf6  50                   push eax
// 0057ecf7  c7460440eb5700       mov dword ptr [esi + 4], 0x57eb40
// 0057ecfe  e80dfbffff           call 0x57e810
// 0057ed03  83c404               add esp, 4
// 0057ed06  895e40               mov dword ptr [esi + 0x40], ebx
// 0057ed09  895e44               mov dword ptr [esi + 0x44], ebx
// 0057ed0c  895e4c               mov dword ptr [esi + 0x4c], ebx
// 0057ed0f  885e30               mov byte ptr [esi + 0x30], bl
// 0057ed12  895e34               mov dword ptr [esi + 0x34], ebx
// 0057ed15  5e                   pop esi
// 0057ed16  5b                   pop ebx
// 0057ed17  c3                   ret 
// 0057ed18  885e30               mov byte ptr [esi + 0x30], bl
// 0057ed1b  895e34               mov dword ptr [esi + 0x34], ebx
// 0057ed1e  c74604d0ea5700       mov dword ptr [esi + 4], 0x57ead0
// 0057ed25  5e                   pop esi
// 0057ed26  5b                   pop ebx
// 0057ed27  c3                   ret 
// library jpeg-6b/jdmainct.c (function _start_pass_main)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmainct.c
