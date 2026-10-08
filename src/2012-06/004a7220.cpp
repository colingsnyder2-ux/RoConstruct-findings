// from server: 100% by auto
// roc 2012-06 004a7220  unit: CSettingsDialog  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004a7220
//
// 004a7220  57                   push edi
// 004a7221  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004a7225  83ef01               sub edi, 1
// 004a7228  7824                 js 0x4a724e
// 004a722a  53                   push ebx
// 004a722b  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 004a722f  55                   push ebp
// 004a7230  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 004a7234  56                   push esi
// 004a7235  8b742414             mov esi, dword ptr [esp + 0x14]
// 004a7239  8da42400000000       lea esp, [esp]
// 004a7240  8bce                 mov ecx, esi
// 004a7242  ffd3                 call ebx
// 004a7244  03f5                 add esi, ebp
// 004a7246  83ef01               sub edi, 1
// 004a7249  79f5                 jns 0x4a7240
// 004a724b  5e                   pop esi
// 004a724c  5d                   pop ebp
// 004a724d  5b                   pop ebx
// 004a724e  5f                   pop edi
// 004a724f  c21000               ret 0x10
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ??_H@YGXPAXIHP6EPAX0@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
