// roc 2012-06 008319f0  unit: RBX::PAVPrimitive::$$A6AXU?$pair::?$signal::Vslot::?$callable  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008319f0
//
// 008319f0  8b442408             mov eax, dword ptr [esp + 8]
// 008319f4  3d401f0000           cmp eax, 0x1f40
// 008319f9  53                   push ebx
// 008319fa  56                   push esi
// 008319fb  bb01000000           mov ebx, 1
// 00831a00  7f4c                 jg 0x831a4e
// 00831a02  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00831a06  8b4e08               mov ecx, dword ptr [esi + 8]
// 00831a09  8bd1                 mov edx, ecx
// 00831a0b  2b560c               sub edx, dword ptr [esi + 0xc]
// 00831a0e  c1fa04               sar edx, 4
// 00831a11  03d0                 add edx, eax
// 00831a13  81fa401f0000         cmp edx, 0x1f40
// 00831a19  7f33                 jg 0x831a4e
// 00831a1b  85c0                 test eax, eax
// 00831a1d  7e2a                 jle 0x831a49
// 00831a1f  8b561c               mov edx, dword ptr [esi + 0x1c]
// 00831a22  57                   push edi
// 00831a23  8bf8                 mov edi, eax
// 00831a25  c1e704               shl edi, 4
// 00831a28  2bd1                 sub edx, ecx
// 00831a2a  3bd7                 cmp edx, edi
// 00831a2c  7f0a                 jg 0x831a38
// 00831a2e  50                   push eax
// 00831a2f  56                   push esi
// 00831a30  e82b2d0200           call 0x854760
// 00831a35  83c408               add esp, 8
// 00831a38  8b4608               mov eax, dword ptr [esi + 8]
// 00831a3b  8b7614               mov esi, dword ptr [esi + 0x14]
// 00831a3e  03c7                 add eax, edi
// 00831a40  5f                   pop edi
// 00831a41  394608               cmp dword ptr [esi + 8], eax
// 00831a44  7303                 jae 0x831a49
// 00831a46  894608               mov dword ptr [esi + 8], eax
// 00831a49  5e                   pop esi
// 00831a4a  8bc3                 mov eax, ebx
// 00831a4c  5b                   pop ebx
// 00831a4d  c3                   ret 
// 00831a4e  5e                   pop esi
// 00831a4f  33c0                 xor eax, eax
// 00831a51  5b                   pop ebx
// 00831a52  c3                   ret 
// library lua-5.1.4/lapi.c (function _lua_checkstack)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lapi.c
