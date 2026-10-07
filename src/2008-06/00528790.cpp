// roc 2008-06 00528790  unit: G3D::Line  size: 204 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00528790
//
// 00528790  83ec0c               sub esp, 0xc
// 00528793  53                   push ebx
// 00528794  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00528798  83fb02               cmp ebx, 2
// 0052879b  56                   push esi
// 0052879c  8b742418             mov esi, dword ptr [esp + 0x18]
// 005287a0  7c0e                 jl 0x5287b0
// 005287a2  6864ba8200           push 0x82ba64
// 005287a7  56                   push esi
// 005287a8  e8a3120000           call 0x529a50
// 005287ad  83c408               add esp, 8
// 005287b0  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005287b4  8bc8                 mov ecx, eax
// 005287b6  c1e918               shr ecx, 0x18
// 005287b9  884c2408             mov byte ptr [esp + 8], cl
// 005287bd  8bd0                 mov edx, eax
// 005287bf  c1ea10               shr edx, 0x10
// 005287c2  88542409             mov byte ptr [esp + 9], dl
// 005287c6  8bc8                 mov ecx, eax
// 005287c8  8844240b             mov byte ptr [esp + 0xb], al
// 005287cc  8b442420             mov eax, dword ptr [esp + 0x20]
// 005287d0  c1e908               shr ecx, 8
// 005287d3  8bd0                 mov edx, eax
// 005287d5  c1ea18               shr edx, 0x18
// 005287d8  884c240a             mov byte ptr [esp + 0xa], cl
// 005287dc  8854240c             mov byte ptr [esp + 0xc], dl
// 005287e0  6a09                 push 9
// 005287e2  8bc8                 mov ecx, eax
// 005287e4  8bd0                 mov edx, eax
// 005287e6  c1e910               shr ecx, 0x10
// 005287e9  c1ea08               shr edx, 8
// 005287ec  68ac948200           push 0x8294ac
// 005287f1  56                   push esi
// 005287f2  884c2419             mov byte ptr [esp + 0x19], cl
// 005287f6  8854241a             mov byte ptr [esp + 0x1a], dl
// 005287fa  8844241b             mov byte ptr [esp + 0x1b], al
// 005287fe  885c241c             mov byte ptr [esp + 0x1c], bl
// 00528802  e819dcffff           call 0x526420
// 00528807  6a09                 push 9
// 00528809  8d442418             lea eax, [esp + 0x18]
// 0052880d  50                   push eax
// 0052880e  56                   push esi
// 0052880f  e86c55ffff           call 0x51dd80
// 00528814  6a09                 push 9
// 00528816  8d4c2424             lea ecx, [esp + 0x24]
// 0052881a  51                   push ecx
// 0052881b  56                   push esi
// 0052881c  e88f52ffff           call 0x51dab0
// 00528821  8b8610010000         mov eax, dword ptr [esi + 0x110]
// 00528827  8bd0                 mov edx, eax
// 00528829  c1ea18               shr edx, 0x18
// 0052882c  88542448             mov byte ptr [esp + 0x48], dl
// 00528830  8bc8                 mov ecx, eax
// 00528832  8bd0                 mov edx, eax
// 00528834  8844244b             mov byte ptr [esp + 0x4b], al
// 00528838  6a04                 push 4
// 0052883a  8d44244c             lea eax, [esp + 0x4c]
// 0052883e  50                   push eax
// 0052883f  c1e910               shr ecx, 0x10
// 00528842  c1ea08               shr edx, 8
// 00528845  56                   push esi
// 00528846  884c2455             mov byte ptr [esp + 0x55], cl
// 0052884a  88542456             mov byte ptr [esp + 0x56], dl
// 0052884e  e85d52ffff           call 0x51dab0
// 00528853  83c430               add esp, 0x30
// 00528856  5e                   pop esi
// 00528857  5b                   pop ebx
// 00528858  83c40c               add esp, 0xc
// 0052885b  c3                   ret 
// library libpng-1.2.5/pngwutil.c (function _png_write_pHYs)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngwutil.c
