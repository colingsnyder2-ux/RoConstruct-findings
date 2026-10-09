// roc 2009-12 004ccfa0  unit: G3D::VARArea  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004ccfa0
//
// 004ccfa0  53                   push ebx
// 004ccfa1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 004ccfa5  55                   push ebp
// 004ccfa6  56                   push esi
// 004ccfa7  57                   push edi
// 004ccfa8  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004ccfac  8bc7                 mov eax, edi
// 004ccfae  6bc05c               imul eax, eax, 0x5c
// 004ccfb1  8d8408dc040000       lea eax, [eax + ecx + 0x4dc]
// 004ccfb8  8bf3                 mov esi, ebx
// 004ccfba  ba40000000           mov edx, 0x40
// 004ccfbf  2bf0                 sub esi, eax
// 004ccfc1  8b2c06               mov ebp, dword ptr [esi + eax]
// 004ccfc4  3b28                 cmp ebp, dword ptr [eax]
// 004ccfc6  7512                 jne 0x4ccfda
// 004ccfc8  83ea04               sub edx, 4
// 004ccfcb  83c004               add eax, 4
// 004ccfce  83fa04               cmp edx, 4
// 004ccfd1  73ee                 jae 0x4ccfc1
// 004ccfd3  5f                   pop edi
// 004ccfd4  5e                   pop esi
// 004ccfd5  5d                   pop ebp
// 004ccfd6  5b                   pop ebx
// 004ccfd7  c20800               ret 8
// 004ccfda  53                   push ebx
// 004ccfdb  57                   push edi
// 004ccfdc  e8dffdffff           call 0x4ccdc0
// 004ccfe1  5f                   pop edi
// 004ccfe2  5e                   pop esi
// 004ccfe3  5d                   pop ebp
// 004ccfe4  5b                   pop ebx
// 004ccfe5  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setTextureMatrix@RenderDevice@G3D@@QAEXIPBM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
