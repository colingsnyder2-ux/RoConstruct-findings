// roc 2010-06 006d2900  unit: RBX::SkateboardPlatform  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006d2900
//
// 006d2900  56                   push esi
// 006d2901  8bf1                 mov esi, ecx
// 006d2903  8b4608               mov eax, dword ptr [esi + 8]
// 006d2906  03c0                 add eax, eax
// 006d2908  57                   push edi
// 006d2909  8b3e                 mov edi, dword ptr [esi]
// 006d290b  03c0                 add eax, eax
// 006d290d  03c0                 add eax, eax
// 006d290f  6a10                 push 0x10
// 006d2911  50                   push eax
// 006d2912  e889afe7ff           call 0x54d8a0
// 006d2917  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006d291b  8906                 mov dword ptr [esi], eax
// 006d291d  8b7608               mov esi, dword ptr [esi + 8]
// 006d2920  83c408               add esp, 8
// 006d2923  3bce                 cmp ecx, esi
// 006d2925  7d02                 jge 0x6d2929
// 006d2927  8bf1                 mov esi, ecx
// 006d2929  8d14f0               lea edx, [eax + esi*8]
// 006d292c  8bcf                 mov ecx, edi
// 006d292e  3bc2                 cmp eax, edx
// 006d2930  7318                 jae 0x6d294a
// 006d2932  85c0                 test eax, eax
// 006d2934  740a                 je 0x6d2940
// 006d2936  8b31                 mov esi, dword ptr [ecx]
// 006d2938  8930                 mov dword ptr [eax], esi
// 006d293a  8b7104               mov esi, dword ptr [ecx + 4]
// 006d293d  897004               mov dword ptr [eax + 4], esi
// 006d2940  83c008               add eax, 8
// 006d2943  83c108               add ecx, 8
// 006d2946  3bc2                 cmp eax, edx
// 006d2948  72e8                 jb 0x6d2932
// 006d294a  57                   push edi
// 006d294b  e870b0e7ff           call 0x54d9c0
// 006d2950  83c404               add esp, 4
// 006d2953  5f                   pop edi
// 006d2954  5e                   pop esi
// 006d2955  c20400               ret 4
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?realloc@?$Array@_K@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
