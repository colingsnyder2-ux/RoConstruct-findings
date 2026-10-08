// roc 2009-06 004a07f0  unit: G3D::VARArea  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a07f0
//
// 004a07f0  53                   push ebx
// 004a07f1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 004a07f5  55                   push ebp
// 004a07f6  56                   push esi
// 004a07f7  57                   push edi
// 004a07f8  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004a07fc  8bc7                 mov eax, edi
// 004a07fe  6bc05c               imul eax, eax, 0x5c
// 004a0801  8d8408dc040000       lea eax, [eax + ecx + 0x4dc]
// 004a0808  8bf3                 mov esi, ebx
// 004a080a  ba40000000           mov edx, 0x40
// 004a080f  2bf0                 sub esi, eax
// 004a0811  8b2c06               mov ebp, dword ptr [esi + eax]
// 004a0814  3b28                 cmp ebp, dword ptr [eax]
// 004a0816  7512                 jne 0x4a082a
// 004a0818  83ea04               sub edx, 4
// 004a081b  83c004               add eax, 4
// 004a081e  83fa04               cmp edx, 4
// 004a0821  73ee                 jae 0x4a0811
// 004a0823  5f                   pop edi
// 004a0824  5e                   pop esi
// 004a0825  5d                   pop ebp
// 004a0826  5b                   pop ebx
// 004a0827  c20800               ret 8
// 004a082a  53                   push ebx
// 004a082b  57                   push edi
// 004a082c  e8fffdffff           call 0x4a0630
// 004a0831  5f                   pop edi
// 004a0832  5e                   pop esi
// 004a0833  5d                   pop ebp
// 004a0834  5b                   pop ebx
// 004a0835  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setTextureMatrix@RenderDevice@G3D@@QAEXIPBM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
