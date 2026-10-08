// from server: 100% by auto
// roc 2007-08 004f3f60  unit: boost::bad_lexical_cast  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f3f60
//
// 004f3f60  56                   push esi
// 004f3f61  8bf1                 mov esi, ecx
// 004f3f63  8b4608               mov eax, dword ptr [esi + 8]
// 004f3f66  8d0440               lea eax, [eax + eax*2]
// 004f3f69  03c0                 add eax, eax
// 004f3f6b  57                   push edi
// 004f3f6c  8b3e                 mov edi, dword ptr [esi]
// 004f3f6e  03c0                 add eax, eax
// 004f3f70  03c0                 add eax, eax
// 004f3f72  6a10                 push 0x10
// 004f3f74  50                   push eax
// 004f3f75  e8e6c00000           call 0x500060
// 004f3f7a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004f3f7e  8906                 mov dword ptr [esi], eax
// 004f3f80  8b7608               mov esi, dword ptr [esi + 8]
// 004f3f83  83c408               add esp, 8
// 004f3f86  3bce                 cmp ecx, esi
// 004f3f88  7c02                 jl 0x4f3f8c
// 004f3f8a  8bce                 mov ecx, esi
// 004f3f8c  8d0c49               lea ecx, [ecx + ecx*2]
// 004f3f8f  8d14c8               lea edx, [eax + ecx*8]
// 004f3f92  3bc2                 cmp eax, edx
// 004f3f94  8bcf                 mov ecx, edi
// 004f3f96  7330                 jae 0x4f3fc8
// 004f3f98  85c0                 test eax, eax
// 004f3f9a  7422                 je 0x4f3fbe
// 004f3f9c  8b31                 mov esi, dword ptr [ecx]
// 004f3f9e  8930                 mov dword ptr [eax], esi
// 004f3fa0  8b7104               mov esi, dword ptr [ecx + 4]
// 004f3fa3  897004               mov dword ptr [eax + 4], esi
// 004f3fa6  8b7108               mov esi, dword ptr [ecx + 8]
// 004f3fa9  897008               mov dword ptr [eax + 8], esi
// 004f3fac  8b710c               mov esi, dword ptr [ecx + 0xc]
// 004f3faf  89700c               mov dword ptr [eax + 0xc], esi
// 004f3fb2  8b7110               mov esi, dword ptr [ecx + 0x10]
// 004f3fb5  897010               mov dword ptr [eax + 0x10], esi
// 004f3fb8  8b7114               mov esi, dword ptr [ecx + 0x14]
// 004f3fbb  897014               mov dword ptr [eax + 0x14], esi
// 004f3fbe  83c018               add eax, 0x18
// 004f3fc1  83c118               add ecx, 0x18
// 004f3fc4  3bc2                 cmp eax, edx
// 004f3fc6  72d0                 jb 0x4f3f98
// 004f3fc8  57                   push edi
// 004f3fc9  e842b80000           call 0x4ff810
// 004f3fce  83c404               add esp, 4
// 004f3fd1  5f                   pop edi
// 004f3fd2  5e                   pop esi
// 004f3fd3  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlg.cpp (function ?realloc@?$Array@VFace@MeshAlg@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlg.cpp
