// roc 2007-03 004e7950  unit: seg_004e0000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e7950
//
// 004e7950  56                   push esi
// 004e7951  8bf1                 mov esi, ecx
// 004e7953  8b4608               mov eax, dword ptr [esi + 8]
// 004e7956  8d0440               lea eax, [eax + eax*2]
// 004e7959  03c0                 add eax, eax
// 004e795b  57                   push edi
// 004e795c  8b3e                 mov edi, dword ptr [esi]
// 004e795e  03c0                 add eax, eax
// 004e7960  03c0                 add eax, eax
// 004e7962  6a10                 push 0x10
// 004e7964  50                   push eax
// 004e7965  e866c20000           call 0x4f3bd0
// 004e796a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004e796e  8906                 mov dword ptr [esi], eax
// 004e7970  8b7608               mov esi, dword ptr [esi + 8]
// 004e7973  83c408               add esp, 8
// 004e7976  3bce                 cmp ecx, esi
// 004e7978  7c02                 jl 0x4e797c
// 004e797a  8bce                 mov ecx, esi
// 004e797c  8d0c49               lea ecx, [ecx + ecx*2]
// 004e797f  8d14c8               lea edx, [eax + ecx*8]
// 004e7982  3bc2                 cmp eax, edx
// 004e7984  8bcf                 mov ecx, edi
// 004e7986  7330                 jae 0x4e79b8
// 004e7988  85c0                 test eax, eax
// 004e798a  7422                 je 0x4e79ae
// 004e798c  8b31                 mov esi, dword ptr [ecx]
// 004e798e  8930                 mov dword ptr [eax], esi
// 004e7990  8b7104               mov esi, dword ptr [ecx + 4]
// 004e7993  897004               mov dword ptr [eax + 4], esi
// 004e7996  8b7108               mov esi, dword ptr [ecx + 8]
// 004e7999  897008               mov dword ptr [eax + 8], esi
// 004e799c  8b710c               mov esi, dword ptr [ecx + 0xc]
// 004e799f  89700c               mov dword ptr [eax + 0xc], esi
// 004e79a2  8b7110               mov esi, dword ptr [ecx + 0x10]
// 004e79a5  897010               mov dword ptr [eax + 0x10], esi
// 004e79a8  8b7114               mov esi, dword ptr [ecx + 0x14]
// 004e79ab  897014               mov dword ptr [eax + 0x14], esi
// 004e79ae  83c018               add eax, 0x18
// 004e79b1  83c118               add ecx, 0x18
// 004e79b4  3bc2                 cmp eax, edx
// 004e79b6  72d0                 jb 0x4e7988
// 004e79b8  57                   push edi
// 004e79b9  e8c2b90000           call 0x4f3380
// 004e79be  83c404               add esp, 4
// 004e79c1  5f                   pop edi
// 004e79c2  5e                   pop esi
// 004e79c3  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\MeshAlg.cpp (function ?realloc@?$Array@VFace@MeshAlg@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/MeshAlg.cpp
