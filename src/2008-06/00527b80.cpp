// roc 2008-06 00527b80  unit: G3D::Line  size: 186 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00527b80
//
// 00527b80  83ec08               sub esp, 8
// 00527b83  dd442410             fld qword ptr [esp + 0x10]
// 00527b87  56                   push esi
// 00527b88  dc0d708f8200         fmul qword ptr [0x828f70]
// 00527b8e  8b742410             mov esi, dword ptr [esp + 0x10]
// 00527b92  d97c2414             fnstcw word ptr [esp + 0x14]
// 00527b96  0fb7442414           movzx eax, word ptr [esp + 0x14]
// 00527b9b  dc0538e78100         fadd qword ptr [0x81e738]
// 00527ba1  0d000c0000           or eax, 0xc00
// 00527ba6  89442404             mov dword ptr [esp + 4], eax
// 00527baa  6a04                 push 4
// 00527bac  6874948200           push 0x829474
// 00527bb1  d96c240c             fldcw word ptr [esp + 0xc]
// 00527bb5  56                   push esi
// 00527bb6  df7c2410             fistp qword ptr [esp + 0x10]
// 00527bba  8b442410             mov eax, dword ptr [esp + 0x10]
// 00527bbe  8bc8                 mov ecx, eax
// 00527bc0  c1e918               shr ecx, 0x18
// 00527bc3  d96c2420             fldcw word ptr [esp + 0x20]
// 00527bc7  8bd0                 mov edx, eax
// 00527bc9  c1ea10               shr edx, 0x10
// 00527bcc  884c2420             mov byte ptr [esp + 0x20], cl
// 00527bd0  8bc8                 mov ecx, eax
// 00527bd2  c1e908               shr ecx, 8
// 00527bd5  88542421             mov byte ptr [esp + 0x21], dl
// 00527bd9  884c2422             mov byte ptr [esp + 0x22], cl
// 00527bdd  88442423             mov byte ptr [esp + 0x23], al
// 00527be1  e83ae8ffff           call 0x526420
// 00527be6  6a04                 push 4
// 00527be8  8d542424             lea edx, [esp + 0x24]
// 00527bec  52                   push edx
// 00527bed  56                   push esi
// 00527bee  e88d61ffff           call 0x51dd80
// 00527bf3  6a04                 push 4
// 00527bf5  8d442430             lea eax, [esp + 0x30]
// 00527bf9  50                   push eax
// 00527bfa  56                   push esi
// 00527bfb  e8b05effff           call 0x51dab0
// 00527c00  8b8610010000         mov eax, dword ptr [esi + 0x110]
// 00527c06  8bd0                 mov edx, eax
// 00527c08  8bc8                 mov ecx, eax
// 00527c0a  c1e918               shr ecx, 0x18
// 00527c0d  c1ea10               shr edx, 0x10
// 00527c10  884c2434             mov byte ptr [esp + 0x34], cl
// 00527c14  88542435             mov byte ptr [esp + 0x35], dl
// 00527c18  6a04                 push 4
// 00527c1a  8d542438             lea edx, [esp + 0x38]
// 00527c1e  8bc8                 mov ecx, eax
// 00527c20  52                   push edx
// 00527c21  c1e908               shr ecx, 8
// 00527c24  56                   push esi
// 00527c25  884c2442             mov byte ptr [esp + 0x42], cl
// 00527c29  88442443             mov byte ptr [esp + 0x43], al
// 00527c2d  e87e5effff           call 0x51dab0
// 00527c32  83c430               add esp, 0x30
// 00527c35  5e                   pop esi
// 00527c36  83c408               add esp, 8
// 00527c39  c3                   ret 
// library libpng-1.2.5/pngwutil.c (function _png_write_gAMA)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngwutil.c
