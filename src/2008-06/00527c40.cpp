// roc 2008-06 00527c40  unit: G3D::Line  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00527c40
//
// 00527c40  53                   push ebx
// 00527c41  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00527c45  83fb04               cmp ebx, 4
// 00527c48  56                   push esi
// 00527c49  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00527c4d  7c0e                 jl 0x527c5d
// 00527c4f  686cb78200           push 0x82b76c
// 00527c54  56                   push esi
// 00527c55  e8f61d0000           call 0x529a50
// 00527c5a  83c408               add esp, 8
// 00527c5d  6a01                 push 1
// 00527c5f  68c4948200           push 0x8294c4
// 00527c64  56                   push esi
// 00527c65  885c241c             mov byte ptr [esp + 0x1c], bl
// 00527c69  e8b2e7ffff           call 0x526420
// 00527c6e  6a01                 push 1
// 00527c70  8d442420             lea eax, [esp + 0x20]
// 00527c74  50                   push eax
// 00527c75  56                   push esi
// 00527c76  e80561ffff           call 0x51dd80
// 00527c7b  6a01                 push 1
// 00527c7d  8d4c242c             lea ecx, [esp + 0x2c]
// 00527c81  51                   push ecx
// 00527c82  56                   push esi
// 00527c83  e8285effff           call 0x51dab0
// 00527c88  8b8610010000         mov eax, dword ptr [esi + 0x110]
// 00527c8e  8bd0                 mov edx, eax
// 00527c90  c1ea18               shr edx, 0x18
// 00527c93  88542430             mov byte ptr [esp + 0x30], dl
// 00527c97  8bc8                 mov ecx, eax
// 00527c99  8bd0                 mov edx, eax
// 00527c9b  88442433             mov byte ptr [esp + 0x33], al
// 00527c9f  6a04                 push 4
// 00527ca1  8d442434             lea eax, [esp + 0x34]
// 00527ca5  50                   push eax
// 00527ca6  c1e910               shr ecx, 0x10
// 00527ca9  c1ea08               shr edx, 8
// 00527cac  56                   push esi
// 00527cad  884c243d             mov byte ptr [esp + 0x3d], cl
// 00527cb1  8854243e             mov byte ptr [esp + 0x3e], dl
// 00527cb5  e8f65dffff           call 0x51dab0
// 00527cba  83c430               add esp, 0x30
// 00527cbd  5e                   pop esi
// 00527cbe  5b                   pop ebx
// 00527cbf  c3                   ret 
// library libpng-1.2.5/pngwutil.c (function _png_write_sRGB)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngwutil.c
