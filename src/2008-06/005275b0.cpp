// roc 2008-06 005275b0  unit: G3D::Line  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005275b0
//
// 005275b0  8b442408             mov eax, dword ptr [esp + 8]
// 005275b4  53                   push ebx
// 005275b5  56                   push esi
// 005275b6  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005275ba  57                   push edi
// 005275bb  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 005275bf  57                   push edi
// 005275c0  50                   push eax
// 005275c1  56                   push esi
// 005275c2  e859eeffff           call 0x526420
// 005275c7  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 005275cb  83c40c               add esp, 0xc
// 005275ce  85db                 test ebx, ebx
// 005275d0  7417                 je 0x5275e9
// 005275d2  85ff                 test edi, edi
// 005275d4  7613                 jbe 0x5275e9
// 005275d6  57                   push edi
// 005275d7  53                   push ebx
// 005275d8  56                   push esi
// 005275d9  e8a267ffff           call 0x51dd80
// 005275de  57                   push edi
// 005275df  53                   push ebx
// 005275e0  56                   push esi
// 005275e1  e8ca64ffff           call 0x51dab0
// 005275e6  83c418               add esp, 0x18
// 005275e9  8b8610010000         mov eax, dword ptr [esi + 0x110]
// 005275ef  8bd0                 mov edx, eax
// 005275f1  8bc8                 mov ecx, eax
// 005275f3  c1e918               shr ecx, 0x18
// 005275f6  c1ea10               shr edx, 0x10
// 005275f9  884c2410             mov byte ptr [esp + 0x10], cl
// 005275fd  88542411             mov byte ptr [esp + 0x11], dl
// 00527601  6a04                 push 4
// 00527603  8d542414             lea edx, [esp + 0x14]
// 00527607  8bc8                 mov ecx, eax
// 00527609  52                   push edx
// 0052760a  c1e908               shr ecx, 8
// 0052760d  56                   push esi
// 0052760e  884c241e             mov byte ptr [esp + 0x1e], cl
// 00527612  8844241f             mov byte ptr [esp + 0x1f], al
// 00527616  e89564ffff           call 0x51dab0
// 0052761b  83c40c               add esp, 0xc
// 0052761e  5f                   pop edi
// 0052761f  5e                   pop esi
// 00527620  5b                   pop ebx
// 00527621  c3                   ret 
// library libpng-1.2.5/pngwutil.c (function _png_write_chunk)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngwutil.c
