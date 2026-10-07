// roc 2008-06 00526420  unit: G3D::Line  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00526420
//
// 00526420  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00526424  56                   push esi
// 00526425  8b742408             mov esi, dword ptr [esp + 8]
// 00526429  8bd0                 mov edx, eax
// 0052642b  8bc8                 mov ecx, eax
// 0052642d  c1e918               shr ecx, 0x18
// 00526430  c1ea10               shr edx, 0x10
// 00526433  57                   push edi
// 00526434  884c2414             mov byte ptr [esp + 0x14], cl
// 00526438  88542415             mov byte ptr [esp + 0x15], dl
// 0052643c  6a04                 push 4
// 0052643e  8d542418             lea edx, [esp + 0x18]
// 00526442  8bc8                 mov ecx, eax
// 00526444  52                   push edx
// 00526445  c1e908               shr ecx, 8
// 00526448  56                   push esi
// 00526449  884c2422             mov byte ptr [esp + 0x22], cl
// 0052644d  88442423             mov byte ptr [esp + 0x23], al
// 00526451  e85a76ffff           call 0x51dab0
// 00526456  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0052645a  6a04                 push 4
// 0052645c  57                   push edi
// 0052645d  56                   push esi
// 0052645e  e84d76ffff           call 0x51dab0
// 00526463  56                   push esi
// 00526464  e8f778ffff           call 0x51dd60
// 00526469  6a04                 push 4
// 0052646b  57                   push edi
// 0052646c  56                   push esi
// 0052646d  e80e79ffff           call 0x51dd80
// 00526472  83c428               add esp, 0x28
// 00526475  5f                   pop edi
// 00526476  5e                   pop esi
// 00526477  c3                   ret 
// library libpng-1.2.5/pngwutil.c (function _png_write_chunk_start)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngwutil.c
