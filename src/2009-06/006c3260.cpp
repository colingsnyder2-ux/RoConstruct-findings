// from server: 100% by auto
// roc 2009-06 006c3260  unit: lua_exception  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c3260
//
// 006c3260  8b4628               mov eax, dword ptr [esi + 0x28]
// 006c3263  894614               mov dword ptr [esi + 0x14], eax
// 006c3266  8b00                 mov eax, dword ptr [eax]
// 006c3268  50                   push eax
// 006c3269  56                   push esi
// 006c326a  89460c               mov dword ptr [esi + 0xc], eax
// 006c326d  e8ce9b0200           call 0x6ece40
// 006c3272  8b460c               mov eax, dword ptr [esi + 0xc]
// 006c3275  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006c3279  50                   push eax
// 006c327a  51                   push ecx
// 006c327b  56                   push esi
// 006c327c  e8dff7ffff           call 0x6c2a60
// 006c3281  668b5636             mov dx, word ptr [esi + 0x36]
// 006c3285  83c414               add esp, 0x14
// 006c3288  817e30204e0000       cmp dword ptr [esi + 0x30], 0x4e20
// 006c328f  66895634             mov word ptr [esi + 0x34], dx
// 006c3293  c6463901             mov byte ptr [esi + 0x39], 1
// 006c3297  7e2f                 jle 0x6c32c8
// 006c3299  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 006c329c  2b4e28               sub ecx, dword ptr [esi + 0x28]
// 006c329f  b8abaaaa2a           mov eax, 0x2aaaaaab
// 006c32a4  f7e9                 imul ecx
// 006c32a6  c1fa02               sar edx, 2
// 006c32a9  8bc2                 mov eax, edx
// 006c32ab  c1e81f               shr eax, 0x1f
// 006c32ae  8d4c0201             lea ecx, [edx + eax + 1]
// 006c32b2  81f9204e0000         cmp ecx, 0x4e20
// 006c32b8  7d0e                 jge 0x6c32c8
// 006c32ba  68204e0000           push 0x4e20
// 006c32bf  56                   push esi
// 006c32c0  e87bfaffff           call 0x6c2d40
// 006c32c5  83c408               add esp, 8
// 006c32c8  33c0                 xor eax, eax
// 006c32ca  894674               mov dword ptr [esi + 0x74], eax
// 006c32cd  894670               mov dword ptr [esi + 0x70], eax
// 006c32d0  c3                   ret 
// library lua-5.1.4/ldo.c (function _resetstack)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
