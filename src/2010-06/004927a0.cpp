// from server: 100% by auto
// roc 2010-06 004927a0  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004927a0
//
// 004927a0  56                   push esi
// 004927a1  8bf1                 mov esi, ecx
// 004927a3  8b4608               mov eax, dword ptr [esi + 8]
// 004927a6  57                   push edi
// 004927a7  8b3e                 mov edi, dword ptr [esi]
// 004927a9  03c0                 add eax, eax
// 004927ab  6a10                 push 0x10
// 004927ad  50                   push eax
// 004927ae  e8edb00b00           call 0x54d8a0
// 004927b3  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004927b7  8906                 mov dword ptr [esi], eax
// 004927b9  8b7608               mov esi, dword ptr [esi + 8]
// 004927bc  83c408               add esp, 8
// 004927bf  3bce                 cmp ecx, esi
// 004927c1  7d02                 jge 0x4927c5
// 004927c3  8bf1                 mov esi, ecx
// 004927c5  8d1470               lea edx, [eax + esi*2]
// 004927c8  8bcf                 mov ecx, edi
// 004927ca  3bc2                 cmp eax, edx
// 004927cc  7316                 jae 0x4927e4
// 004927ce  8bff                 mov edi, edi
// 004927d0  85c0                 test eax, eax
// 004927d2  7406                 je 0x4927da
// 004927d4  668b31               mov si, word ptr [ecx]
// 004927d7  668930               mov word ptr [eax], si
// 004927da  83c002               add eax, 2
// 004927dd  83c102               add ecx, 2
// 004927e0  3bc2                 cmp eax, edx
// 004927e2  72ec                 jb 0x4927d0
// 004927e4  57                   push edi
// 004927e5  e8d6b10b00           call 0x54d9c0
// 004927ea  83c404               add esp, 4
// 004927ed  5f                   pop edi
// 004927ee  5e                   pop esi
// 004927ef  c20400               ret 4
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?realloc@?$Array@G@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
