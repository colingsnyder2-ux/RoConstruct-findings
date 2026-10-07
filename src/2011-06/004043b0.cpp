// roc 2011-06 004043b0  unit: RBX::VRenderHooksService::?$FactoryProduct::Creator  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004043b0
//
// 004043b0  57                   push edi
// 004043b1  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004043b5  83ef01               sub edi, 1
// 004043b8  7824                 js 0x4043de
// 004043ba  53                   push ebx
// 004043bb  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 004043bf  55                   push ebp
// 004043c0  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 004043c4  56                   push esi
// 004043c5  8b742414             mov esi, dword ptr [esp + 0x14]
// 004043c9  8da42400000000       lea esp, [esp]
// 004043d0  8bce                 mov ecx, esi
// 004043d2  ffd3                 call ebx
// 004043d4  03f5                 add esi, ebp
// 004043d6  83ef01               sub edi, 1
// 004043d9  79f5                 jns 0x4043d0
// 004043db  5e                   pop esi
// 004043dc  5d                   pop ebp
// 004043dd  5b                   pop ebx
// 004043de  5f                   pop edi
// 004043df  c21000               ret 0x10
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ??_H@YGXPAXIHP6EPAX0@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
