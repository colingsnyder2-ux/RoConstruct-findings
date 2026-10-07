// roc 2010-06 00403b10  unit: RBX::VRunService::?$FactoryProduct::Creator  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00403b10
//
// 00403b10  57                   push edi
// 00403b11  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00403b15  83ef01               sub edi, 1
// 00403b18  7824                 js 0x403b3e
// 00403b1a  53                   push ebx
// 00403b1b  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00403b1f  55                   push ebp
// 00403b20  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00403b24  56                   push esi
// 00403b25  8b742414             mov esi, dword ptr [esp + 0x14]
// 00403b29  8da42400000000       lea esp, [esp]
// 00403b30  8bce                 mov ecx, esi
// 00403b32  ffd3                 call ebx
// 00403b34  03f5                 add esi, ebp
// 00403b36  83ef01               sub edi, 1
// 00403b39  79f5                 jns 0x403b30
// 00403b3b  5e                   pop esi
// 00403b3c  5d                   pop ebp
// 00403b3d  5b                   pop ebx
// 00403b3e  5f                   pop edi
// 00403b3f  c21000               ret 0x10
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ??_H@YGXPAXIHP6EPAX0@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
