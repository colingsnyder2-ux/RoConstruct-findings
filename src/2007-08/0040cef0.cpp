// from server: 100% by auto
// roc 2007-08 0040cef0  unit: CChatPrompt  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040cef0
//
// 0040cef0  57                   push edi
// 0040cef1  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0040cef5  83ef01               sub edi, 1
// 0040cef8  7824                 js 0x40cf1e
// 0040cefa  53                   push ebx
// 0040cefb  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0040ceff  55                   push ebp
// 0040cf00  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0040cf04  56                   push esi
// 0040cf05  8b742414             mov esi, dword ptr [esp + 0x14]
// 0040cf09  8da42400000000       lea esp, [esp]
// 0040cf10  8bce                 mov ecx, esi
// 0040cf12  ffd3                 call ebx
// 0040cf14  03f5                 add esi, ebp
// 0040cf16  83ef01               sub edi, 1
// 0040cf19  79f5                 jns 0x40cf10
// 0040cf1b  5e                   pop esi
// 0040cf1c  5d                   pop ebp
// 0040cf1d  5b                   pop ebx
// 0040cf1e  5f                   pop edi
// 0040cf1f  c21000               ret 0x10
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ??_H@YGXPAXIHP6EPAX0@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
