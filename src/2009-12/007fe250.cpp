// roc 2009-12 007fe250  unit: CXTPPaintManager  size: 649 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007fe250
//
// 007fe250  6aff                 push -1
// 007fe252  680e919500           push 0x95910e
// 007fe257  64a100000000         mov eax, dword ptr fs:[0]
// 007fe25d  50                   push eax
// 007fe25e  83ec08               sub esp, 8
// 007fe261  53                   push ebx
// 007fe262  55                   push ebp
// 007fe263  56                   push esi
// 007fe264  57                   push edi
// 007fe265  a10052b600           mov eax, dword ptr [0xb65200]
// 007fe26a  33c4                 xor eax, esp
// 007fe26c  50                   push eax
// 007fe26d  8d44241c             lea eax, [esp + 0x1c]
// 007fe271  64a300000000         mov dword ptr fs:[0], eax
// 007fe277  8bf1                 mov esi, ecx
// 007fe279  89742418             mov dword ptr [esp + 0x18], esi
// 007fe27d  e8c0811200           call 0x926442
// 007fe282  33ff                 xor edi, edi
// 007fe284  8d4e28               lea ecx, [esi + 0x28]
// 007fe287  897c2424             mov dword ptr [esp + 0x24], edi
// 007fe28b  c70684299f00         mov dword ptr [esi], 0x9f2984
// 007fe291  e89a0b0300           call 0x82ee30
// 007fe296  8d4e48               lea ecx, [esi + 0x48]
// 007fe299  e8720b0300           call 0x82ee10
// 007fe29e  8d4e54               lea ecx, [esi + 0x54]
// 007fe2a1  e86a0b0300           call 0x82ee10
// 007fe2a6  b844299f00           mov eax, 0x9f2944
// 007fe2ab  bd01000000           mov ebp, 1
// 007fe2b0  89be9c000000         mov dword ptr [esi + 0x9c], edi
// 007fe2b6  898698000000         mov dword ptr [esi + 0x98], eax
// 007fe2bc  89aea0000000         mov dword ptr [esi + 0xa0], ebp
// 007fe2c2  89bea8000000         mov dword ptr [esi + 0xa8], edi
// 007fe2c8  8986a4000000         mov dword ptr [esi + 0xa4], eax
// 007fe2ce  89aeac000000         mov dword ptr [esi + 0xac], ebp
// 007fe2d4  89beb4000000         mov dword ptr [esi + 0xb4], edi
// 007fe2da  8986b0000000         mov dword ptr [esi + 0xb0], eax
// 007fe2e0  89aeb8000000         mov dword ptr [esi + 0xb8], ebp
// 007fe2e6  89bec0000000         mov dword ptr [esi + 0xc0], edi
// 007fe2ec  8986bc000000         mov dword ptr [esi + 0xbc], eax
// 007fe2f2  89aec4000000         mov dword ptr [esi + 0xc4], ebp
// 007fe2f8  b898019b00           mov eax, 0x9b0198
// 007fe2fd  89bef4000000         mov dword ptr [esi + 0xf4], edi
// 007fe303  8986f0000000         mov dword ptr [esi + 0xf0], eax
// 007fe309  89befc000000         mov dword ptr [esi + 0xfc], edi
// 007fe30f  8986f8000000         mov dword ptr [esi + 0xf8], eax
// 007fe315  89be04010000         mov dword ptr [esi + 0x104], edi
// 007fe31b  898600010000         mov dword ptr [esi + 0x100], eax
// 007fe321  89be0c010000         mov dword ptr [esi + 0x10c], edi
// 007fe327  898608010000         mov dword ptr [esi + 0x108], eax
// 007fe32d  8d8e1c010000         lea ecx, [esi + 0x11c]
// 007fe333  ff1574de9800         call dword ptr [0x98de74]
// 007fe339  55                   push ebp
// 007fe33a  8d8e2c010000         lea ecx, [esi + 0x12c]
// 007fe340  c644242809           mov byte ptr [esp + 0x28], 9
// 007fe345  e8f6d30600           call 0x86b740
// 007fe34a  55                   push ebp
// 007fe34b  8d8e38010000         lea ecx, [esi + 0x138]
// 007fe351  c64424280a           mov byte ptr [esp + 0x28], 0xa
// 007fe356  e8e5d30600           call 0x86b740
// 007fe35b  c64424240b           mov byte ptr [esp + 0x24], 0xb
// 007fe360  8d9e64010000         lea ebx, [esi + 0x164]
// 007fe366  c74424143e000000     mov dword ptr [esp + 0x14], 0x3e
// 007fe36e  8bff                 mov edi, edi
// 007fe370  8bcb                 mov ecx, ebx
// 007fe372  e8990a0300           call 0x82ee10
// 007fe377  83c30c               add ebx, 0xc
// 007fe37a  296c2414             sub dword ptr [esp + 0x14], ebp
// 007fe37e  79f0                 jns 0x7fe370
// 007fe380  68f82f9c00           push 0x9c2ff8
// 007fe385  8d8e1c010000         lea ecx, [esi + 0x11c]
// 007fe38b  897e78               mov dword ptr [esi + 0x78], edi
// 007fe38e  897e7c               mov dword ptr [esi + 0x7c], edi
// 007fe391  89be10010000         mov dword ptr [esi + 0x110], edi
// 007fe397  89be18010000         mov dword ptr [esi + 0x118], edi
// 007fe39d  ff155cde9800         call dword ptr [0x98de5c]
// 007fe3a3  57                   push edi
// 007fe3a4  57                   push edi
// 007fe3a5  b814000000           mov eax, 0x14
// 007fe3aa  57                   push edi
// 007fe3ab  8986d4000000         mov dword ptr [esi + 0xd4], eax
// 007fe3b1  8986cc000000         mov dword ptr [esi + 0xcc], eax
// 007fe3b7  57                   push edi
// 007fe3b8  8d86e0000000         lea eax, [esi + 0xe0]
// 007fe3be  50                   push eax
// 007fe3bf  89ae20010000         mov dword ptr [esi + 0x120], ebp
// 007fe3c5  896e64               mov dword ptr [esi + 0x64], ebp
// 007fe3c8  89ae24010000         mov dword ptr [esi + 0x124], ebp
// 007fe3ce  89be28010000         mov dword ptr [esi + 0x128], edi
// 007fe3d4  897e68               mov dword ptr [esi + 0x68], edi
// 007fe3d7  897e6c               mov dword ptr [esi + 0x6c], edi
// 007fe3da  89be48010000         mov dword ptr [esi + 0x148], edi
// 007fe3e0  89be50010000         mov dword ptr [esi + 0x150], edi
// 007fe3e6  89be4c010000         mov dword ptr [esi + 0x14c], edi
// 007fe3ec  89be54010000         mov dword ptr [esi + 0x154], edi
// 007fe3f2  c786580100000a000000 mov dword ptr [esi + 0x158], 0xa
// 007fe3fc  c7865c01000064000000 mov dword ptr [esi + 0x15c], 0x64
// 007fe406  897e60               mov dword ptr [esi + 0x60], edi
// 007fe409  897e70               mov dword ptr [esi + 0x70], edi
// 007fe40c  c7865804000007000000 mov dword ptr [esi + 0x458], 7
// 007fe416  c78660010000ffffffff mov dword ptr [esi + 0x160], 0xffffffff
// 007fe420  c786c80000000b000000 mov dword ptr [esi + 0xc8], 0xb
// 007fe42a  c7868000000004000000 mov dword ptr [esi + 0x80], 4
// 007fe434  89be84000000         mov dword ptr [esi + 0x84], edi
// 007fe43a  89be88000000         mov dword ptr [esi + 0x88], edi
// 007fe440  89be8c000000         mov dword ptr [esi + 0x8c], edi
// 007fe446  89ae90000000         mov dword ptr [esi + 0x90], ebp
// 007fe44c  89be14010000         mov dword ptr [esi + 0x114], edi
// 007fe452  89bed0000000         mov dword ptr [esi + 0xd0], edi
// 007fe458  89ae94000000         mov dword ptr [esi + 0x94], ebp
// 007fe45e  897e74               mov dword ptr [esi + 0x74], edi
// 007fe461  ff1538ca9800         call dword ptr [0x98ca38]
// 007fe467  e844200100           call 0x8104b0
// 007fe46c  8bc8                 mov ecx, eax
// 007fe46e  e89de40000           call 0x80c910
// 007fe473  6a30                 push 0x30
// 007fe475  e8e653ffff           call 0x7f3860
// 007fe47a  83c404               add esp, 4
// 007fe47d  89442414             mov dword ptr [esp + 0x14], eax
// 007fe481  c64424240c           mov byte ptr [esp + 0x24], 0xc
// 007fe486  3bc7                 cmp eax, edi
// 007fe488  740a                 je 0x7fe494
// 007fe48a  56                   push esi
// 007fe48b  8bc8                 mov ecx, eax
// 007fe48d  e89e960700           call 0x877b30
// 007fe492  eb02                 jmp 0x7fe496
// 007fe494  33c0                 xor eax, eax
// 007fe496  6874299f00           push 0x9f2974
// 007fe49b  8986d8000000         mov dword ptr [esi + 0xd8], eax
// 007fe4a1  89bedc000000         mov dword ptr [esi + 0xdc], edi
// 007fe4a7  ff151cb29800         call dword ptr [0x98b21c]
// 007fe4ad  3bc7                 cmp eax, edi
// 007fe4af  7412                 je 0x7fe4c3
// 007fe4b1  6858299f00           push 0x9f2958
// 007fe4b6  50                   push eax
// 007fe4b7  ff1520b29800         call dword ptr [0x98b220]
// 007fe4bd  8986dc000000         mov dword ptr [esi + 0xdc], eax
// 007fe4c3  8bc6                 mov eax, esi
// 007fe4c5  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007fe4c9  64890d00000000       mov dword ptr fs:[0], ecx
// 007fe4d0  59                   pop ecx
// 007fe4d1  5f                   pop edi
// 007fe4d2  5e                   pop esi
// 007fe4d3  5d                   pop ebp
// 007fe4d4  5b                   pop ebx
// 007fe4d5  83c414               add esp, 0x14
// 007fe4d8  c3                   ret 
// copied from an identical function in another client (function ??0CXTPPaintManager@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPPaintManager.cpp