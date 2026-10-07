// roc 2008-06 005286c0  unit: G3D::Line  size: 204 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005286c0
//
// 005286c0  83ec0c               sub esp, 0xc
// 005286c3  53                   push ebx
// 005286c4  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 005286c8  83fb02               cmp ebx, 2
// 005286cb  56                   push esi
// 005286cc  8b742418             mov esi, dword ptr [esp + 0x18]
// 005286d0  7c0e                 jl 0x5286e0
// 005286d2  683cba8200           push 0x82ba3c
// 005286d7  56                   push esi
// 005286d8  e873130000           call 0x529a50
// 005286dd  83c408               add esp, 8
// 005286e0  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005286e4  8bc8                 mov ecx, eax
// 005286e6  c1f918               sar ecx, 0x18
// 005286e9  884c2408             mov byte ptr [esp + 8], cl
// 005286ed  8bd0                 mov edx, eax
// 005286ef  c1fa10               sar edx, 0x10
// 005286f2  88542409             mov byte ptr [esp + 9], dl
// 005286f6  8bc8                 mov ecx, eax
// 005286f8  8844240b             mov byte ptr [esp + 0xb], al
// 005286fc  8b442420             mov eax, dword ptr [esp + 0x20]
// 00528700  c1f908               sar ecx, 8
// 00528703  8bd0                 mov edx, eax
// 00528705  c1fa18               sar edx, 0x18
// 00528708  884c240a             mov byte ptr [esp + 0xa], cl
// 0052870c  8854240c             mov byte ptr [esp + 0xc], dl
// 00528710  6a09                 push 9
// 00528712  8bc8                 mov ecx, eax
// 00528714  8bd0                 mov edx, eax
// 00528716  c1f910               sar ecx, 0x10
// 00528719  c1fa08               sar edx, 8
// 0052871c  6894948200           push 0x829494
// 00528721  56                   push esi
// 00528722  884c2419             mov byte ptr [esp + 0x19], cl
// 00528726  8854241a             mov byte ptr [esp + 0x1a], dl
// 0052872a  8844241b             mov byte ptr [esp + 0x1b], al
// 0052872e  885c241c             mov byte ptr [esp + 0x1c], bl
// 00528732  e8e9dcffff           call 0x526420
// 00528737  6a09                 push 9
// 00528739  8d442418             lea eax, [esp + 0x18]
// 0052873d  50                   push eax
// 0052873e  56                   push esi
// 0052873f  e83c56ffff           call 0x51dd80
// 00528744  6a09                 push 9
// 00528746  8d4c2424             lea ecx, [esp + 0x24]
// 0052874a  51                   push ecx
// 0052874b  56                   push esi
// 0052874c  e85f53ffff           call 0x51dab0
// 00528751  8b8610010000         mov eax, dword ptr [esi + 0x110]
// 00528757  8bd0                 mov edx, eax
// 00528759  c1ea18               shr edx, 0x18
// 0052875c  88542448             mov byte ptr [esp + 0x48], dl
// 00528760  8bc8                 mov ecx, eax
// 00528762  8bd0                 mov edx, eax
// 00528764  8844244b             mov byte ptr [esp + 0x4b], al
// 00528768  6a04                 push 4
// 0052876a  8d44244c             lea eax, [esp + 0x4c]
// 0052876e  50                   push eax
// 0052876f  c1e910               shr ecx, 0x10
// 00528772  c1ea08               shr edx, 8
// 00528775  56                   push esi
// 00528776  884c2455             mov byte ptr [esp + 0x55], cl
// 0052877a  88542456             mov byte ptr [esp + 0x56], dl
// 0052877e  e82d53ffff           call 0x51dab0
// 00528783  83c430               add esp, 0x30
// 00528786  5e                   pop esi
// 00528787  5b                   pop ebx
// 00528788  83c40c               add esp, 0xc
// 0052878b  c3                   ret 
// library libpng-1.2.5/pngwutil.c (function _png_write_oFFs)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngwutil.c
