// roc 2007-08 00458310  unit: CRobloxWnd  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00458310
//
// 00458310  d9ee                 fldz 
// 00458312  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00458316  d911                 fst dword ptr [ecx]
// 00458318  d95104               fst dword ptr [ecx + 4]
// 0045831b  d95108               fst dword ptr [ecx + 8]
// 0045831e  d9590c               fstp dword ptr [ecx + 0xc]
// 00458321  d9442410             fld dword ptr [esp + 0x10]
// 00458325  d9442408             fld dword ptr [esp + 8]
// 00458329  d8d1                 fcom st(1)
// 0045832b  dfe0                 fnstsw ax
// 0045832d  f6c441               test ah, 0x41
// 00458330  8d442410             lea eax, [esp + 0x10]
// 00458334  7404                 je 0x45833a
// 00458336  8d442408             lea eax, [esp + 8]
// 0045833a  d900                 fld dword ptr [eax]
// 0045833c  d919                 fstp dword ptr [ecx]
// 0045833e  d9442414             fld dword ptr [esp + 0x14]
// 00458342  d944240c             fld dword ptr [esp + 0xc]
// 00458346  d8d1                 fcom st(1)
// 00458348  dfe0                 fnstsw ax
// 0045834a  f6c441               test ah, 0x41
// 0045834d  8d442414             lea eax, [esp + 0x14]
// 00458351  7404                 je 0x458357
// 00458353  8d44240c             lea eax, [esp + 0xc]
// 00458357  d900                 fld dword ptr [eax]
// 00458359  d95904               fstp dword ptr [ecx + 4]
// 0045835c  d9ca                 fxch st(2)
// 0045835e  d8db                 fcomp st(3)
// 00458360  dfe0                 fnstsw ax
// 00458362  ddda                 fstp st(2)
// 00458364  f6c405               test ah, 5
// 00458367  8d442410             lea eax, [esp + 0x10]
// 0045836b  7b04                 jnp 0x458371
// 0045836d  8d442408             lea eax, [esp + 8]
// 00458371  d900                 fld dword ptr [eax]
// 00458373  d95908               fstp dword ptr [ecx + 8]
// 00458376  ded9                 fcompp 
// 00458378  dfe0                 fnstsw ax
// 0045837a  f6c405               test ah, 5
// 0045837d  8d442414             lea eax, [esp + 0x14]
// 00458381  7b04                 jnp 0x458387
// 00458383  8d44240c             lea eax, [esp + 0xc]
// 00458387  d900                 fld dword ptr [eax]
// 00458389  8bc1                 mov eax, ecx
// 0045838b  d9590c               fstp dword ptr [ecx + 0xc]
// 0045838e  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?xyxy@Rect2D@G3D@@SA?AV12@MMMM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
