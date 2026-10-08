// from server: 100% by auto
// roc 2009-06 00403ca0  unit: RBX::VRunService::?$FactoryProduct::Creator  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00403ca0
//
// 00403ca0  57                   push edi
// 00403ca1  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00403ca5  83ef01               sub edi, 1
// 00403ca8  7824                 js 0x403cce
// 00403caa  53                   push ebx
// 00403cab  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00403caf  55                   push ebp
// 00403cb0  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00403cb4  56                   push esi
// 00403cb5  8b742414             mov esi, dword ptr [esp + 0x14]
// 00403cb9  8da42400000000       lea esp, [esp]
// 00403cc0  8bce                 mov ecx, esi
// 00403cc2  ffd3                 call ebx
// 00403cc4  03f5                 add esi, ebp
// 00403cc6  83ef01               sub edi, 1
// 00403cc9  79f5                 jns 0x403cc0
// 00403ccb  5e                   pop esi
// 00403ccc  5d                   pop ebp
// 00403ccd  5b                   pop ebx
// 00403cce  5f                   pop edi
// 00403ccf  c21000               ret 0x10
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ??_H@YGXPAXIHP6EPAX0@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
