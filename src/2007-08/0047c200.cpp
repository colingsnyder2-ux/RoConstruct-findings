// roc 2007-08 0047c200  unit: G3D::Win32Window  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047c200
//
// 0047c200  56                   push esi
// 0047c201  8bf1                 mov esi, ecx
// 0047c203  8b4608               mov eax, dword ptr [esi + 8]
// 0047c206  8d0440               lea eax, [eax + eax*2]
// 0047c209  57                   push edi
// 0047c20a  8b3e                 mov edi, dword ptr [esi]
// 0047c20c  03c0                 add eax, eax
// 0047c20e  03c0                 add eax, eax
// 0047c210  6a10                 push 0x10
// 0047c212  50                   push eax
// 0047c213  e8483e0800           call 0x500060
// 0047c218  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0047c21c  8906                 mov dword ptr [esi], eax
// 0047c21e  8b7608               mov esi, dword ptr [esi + 8]
// 0047c221  83c408               add esp, 8
// 0047c224  3bce                 cmp ecx, esi
// 0047c226  7c02                 jl 0x47c22a
// 0047c228  8bce                 mov ecx, esi
// 0047c22a  8d0c49               lea ecx, [ecx + ecx*2]
// 0047c22d  8d1488               lea edx, [eax + ecx*4]
// 0047c230  3bc2                 cmp eax, edx
// 0047c232  8bcf                 mov ecx, edi
// 0047c234  731e                 jae 0x47c254
// 0047c236  85c0                 test eax, eax
// 0047c238  7410                 je 0x47c24a
// 0047c23a  8b31                 mov esi, dword ptr [ecx]
// 0047c23c  8930                 mov dword ptr [eax], esi
// 0047c23e  8b7104               mov esi, dword ptr [ecx + 4]
// 0047c241  897004               mov dword ptr [eax + 4], esi
// 0047c244  8b7108               mov esi, dword ptr [ecx + 8]
// 0047c247  897008               mov dword ptr [eax + 8], esi
// 0047c24a  83c00c               add eax, 0xc
// 0047c24d  83c10c               add ecx, 0xc
// 0047c250  3bc2                 cmp eax, edx
// 0047c252  72e2                 jb 0x47c236
// 0047c254  57                   push edi
// 0047c255  e8b6350800           call 0x4ff810
// 0047c25a  83c404               add esp, 4
// 0047c25d  5f                   pop edi
// 0047c25e  5e                   pop esi
// 0047c25f  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GWindow.cpp (function ?realloc@?$Array@VLoopBody@GWindow@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GWindow.cpp
