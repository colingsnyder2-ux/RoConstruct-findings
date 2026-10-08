// roc 2008-06 00479310  unit: CInstanceRecord::CNameItem  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00479310
//
// 00479310  53                   push ebx
// 00479311  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00479315  55                   push ebp
// 00479316  56                   push esi
// 00479317  57                   push edi
// 00479318  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0047931c  8bc7                 mov eax, edi
// 0047931e  6bc05c               imul eax, eax, 0x5c
// 00479321  8d8408dc040000       lea eax, [eax + ecx + 0x4dc]
// 00479328  8bf3                 mov esi, ebx
// 0047932a  ba40000000           mov edx, 0x40
// 0047932f  2bf0                 sub esi, eax
// 00479331  8b2c06               mov ebp, dword ptr [esi + eax]
// 00479334  3b28                 cmp ebp, dword ptr [eax]
// 00479336  7512                 jne 0x47934a
// 00479338  83ea04               sub edx, 4
// 0047933b  83c004               add eax, 4
// 0047933e  83fa04               cmp edx, 4
// 00479341  73ee                 jae 0x479331
// 00479343  5f                   pop edi
// 00479344  5e                   pop esi
// 00479345  5d                   pop ebp
// 00479346  5b                   pop ebx
// 00479347  c20800               ret 8
// 0047934a  53                   push ebx
// 0047934b  57                   push edi
// 0047934c  e8fffdffff           call 0x479150
// 00479351  5f                   pop edi
// 00479352  5e                   pop esi
// 00479353  5d                   pop ebp
// 00479354  5b                   pop ebx
// 00479355  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setTextureMatrix@RenderDevice@G3D@@QAEXIPBM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
