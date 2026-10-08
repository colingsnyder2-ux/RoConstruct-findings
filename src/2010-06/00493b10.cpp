// roc 2010-06 00493b10  unit: seg_00490000  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00493b10
//
// 00493b10  53                   push ebx
// 00493b11  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00493b15  55                   push ebp
// 00493b16  56                   push esi
// 00493b17  57                   push edi
// 00493b18  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00493b1c  8bc7                 mov eax, edi
// 00493b1e  6bc05c               imul eax, eax, 0x5c
// 00493b21  8d8408dc040000       lea eax, [eax + ecx + 0x4dc]
// 00493b28  8bf3                 mov esi, ebx
// 00493b2a  ba40000000           mov edx, 0x40
// 00493b2f  2bf0                 sub esi, eax
// 00493b31  8b2c06               mov ebp, dword ptr [esi + eax]
// 00493b34  3b28                 cmp ebp, dword ptr [eax]
// 00493b36  7512                 jne 0x493b4a
// 00493b38  83ea04               sub edx, 4
// 00493b3b  83c004               add eax, 4
// 00493b3e  83fa04               cmp edx, 4
// 00493b41  73ee                 jae 0x493b31
// 00493b43  5f                   pop edi
// 00493b44  5e                   pop esi
// 00493b45  5d                   pop ebp
// 00493b46  5b                   pop ebx
// 00493b47  c20800               ret 8
// 00493b4a  53                   push ebx
// 00493b4b  57                   push edi
// 00493b4c  e8dffdffff           call 0x493930
// 00493b51  5f                   pop edi
// 00493b52  5e                   pop esi
// 00493b53  5d                   pop ebp
// 00493b54  5b                   pop ebx
// 00493b55  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setTextureMatrix@RenderDevice@G3D@@QAEXIPBM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
