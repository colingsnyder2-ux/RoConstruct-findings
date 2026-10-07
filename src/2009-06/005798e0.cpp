// roc 2009-06 005798e0  unit: G3D::LineSegment  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005798e0
//
// 005798e0  56                   push esi
// 005798e1  57                   push edi
// 005798e2  8bf1                 mov esi, ecx
// 005798e4  8b4608               mov eax, dword ptr [esi + 8]
// 005798e7  8b3e                 mov edi, dword ptr [esi]
// 005798e9  6a10                 push 0x10
// 005798eb  50                   push eax
// 005798ec  e87f18ffff           call 0x56b170
// 005798f1  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005798f5  8906                 mov dword ptr [esi], eax
// 005798f7  8b7608               mov esi, dword ptr [esi + 8]
// 005798fa  83c408               add esp, 8
// 005798fd  3bce                 cmp ecx, esi
// 005798ff  7d02                 jge 0x579903
// 00579901  8bf1                 mov esi, ecx
// 00579903  03f0                 add esi, eax
// 00579905  8bcf                 mov ecx, edi
// 00579907  3bc6                 cmp eax, esi
// 00579909  7313                 jae 0x57991e
// 0057990b  eb03                 jmp 0x579910
// 0057990d  8d4900               lea ecx, [ecx]
// 00579910  85c0                 test eax, eax
// 00579912  7404                 je 0x579918
// 00579914  8a11                 mov dl, byte ptr [ecx]
// 00579916  8810                 mov byte ptr [eax], dl
// 00579918  40                   inc eax
// 00579919  41                   inc ecx
// 0057991a  3bc6                 cmp eax, esi
// 0057991c  72f2                 jb 0x579910
// 0057991e  57                   push edi
// 0057991f  e86c19ffff           call 0x56b290
// 00579924  83c404               add esp, 4
// 00579927  5f                   pop edi
// 00579928  5e                   pop esi
// 00579929  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?realloc@?$Array@E@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
