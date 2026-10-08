// from server: 100% by auto
// roc 2008-06 00473740  unit: G3D::ReferenceCountedObject  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00473740
//
// 00473740  56                   push esi
// 00473741  57                   push edi
// 00473742  8bf1                 mov esi, ecx
// 00473744  8b4608               mov eax, dword ptr [esi + 8]
// 00473747  8b3e                 mov edi, dword ptr [esi]
// 00473749  6a10                 push 0x10
// 0047374b  50                   push eax
// 0047374c  e82f4e0900           call 0x508580
// 00473751  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00473755  8906                 mov dword ptr [esi], eax
// 00473757  8b7608               mov esi, dword ptr [esi + 8]
// 0047375a  83c408               add esp, 8
// 0047375d  3bce                 cmp ecx, esi
// 0047375f  7d02                 jge 0x473763
// 00473761  8bf1                 mov esi, ecx
// 00473763  03f0                 add esi, eax
// 00473765  8bcf                 mov ecx, edi
// 00473767  3bc6                 cmp eax, esi
// 00473769  7313                 jae 0x47377e
// 0047376b  eb03                 jmp 0x473770
// 0047376d  8d4900               lea ecx, [ecx]
// 00473770  85c0                 test eax, eax
// 00473772  7404                 je 0x473778
// 00473774  8a11                 mov dl, byte ptr [ecx]
// 00473776  8810                 mov byte ptr [eax], dl
// 00473778  40                   inc eax
// 00473779  41                   inc ecx
// 0047377a  3bc6                 cmp eax, esi
// 0047377c  72f2                 jb 0x473770
// 0047377e  57                   push edi
// 0047377f  e89c450900           call 0x507d20
// 00473784  83c404               add esp, 4
// 00473787  5f                   pop edi
// 00473788  5e                   pop esi
// 00473789  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?realloc@?$Array@E@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
