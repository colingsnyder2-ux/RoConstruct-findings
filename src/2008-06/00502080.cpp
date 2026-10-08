// from server: 100% by auto
// roc 2008-06 00502080  unit: G3D::Sphere  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00502080
//
// 00502080  56                   push esi
// 00502081  8bf1                 mov esi, ecx
// 00502083  8b4608               mov eax, dword ptr [esi + 8]
// 00502086  57                   push edi
// 00502087  8b3e                 mov edi, dword ptr [esi]
// 00502089  03c0                 add eax, eax
// 0050208b  03c0                 add eax, eax
// 0050208d  6a10                 push 0x10
// 0050208f  50                   push eax
// 00502090  e8eb640000           call 0x508580
// 00502095  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00502099  8906                 mov dword ptr [esi], eax
// 0050209b  8b7608               mov esi, dword ptr [esi + 8]
// 0050209e  83c408               add esp, 8
// 005020a1  3bce                 cmp ecx, esi
// 005020a3  7d02                 jge 0x5020a7
// 005020a5  8bf1                 mov esi, ecx
// 005020a7  8d14b0               lea edx, [eax + esi*4]
// 005020aa  8bcf                 mov ecx, edi
// 005020ac  3bc2                 cmp eax, edx
// 005020ae  7312                 jae 0x5020c2
// 005020b0  85c0                 test eax, eax
// 005020b2  7404                 je 0x5020b8
// 005020b4  8b31                 mov esi, dword ptr [ecx]
// 005020b6  8930                 mov dword ptr [eax], esi
// 005020b8  83c004               add eax, 4
// 005020bb  83c104               add ecx, 4
// 005020be  3bc2                 cmp eax, edx
// 005020c0  72ee                 jb 0x5020b0
// 005020c2  57                   push edi
// 005020c3  e8585c0000           call 0x507d20
// 005020c8  83c404               add esp, 4
// 005020cb  5f                   pop edi
// 005020cc  5e                   pop esi
// 005020cd  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?realloc@?$Array@PBX@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
