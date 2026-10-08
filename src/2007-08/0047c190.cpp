// from server: 100% by auto
// roc 2007-08 0047c190  unit: G3D::Win32Window  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047c190
//
// 0047c190  56                   push esi
// 0047c191  8bf1                 mov esi, ecx
// 0047c193  8b4608               mov eax, dword ptr [esi + 8]
// 0047c196  8d0480               lea eax, [eax + eax*4]
// 0047c199  57                   push edi
// 0047c19a  8b3e                 mov edi, dword ptr [esi]
// 0047c19c  03c0                 add eax, eax
// 0047c19e  03c0                 add eax, eax
// 0047c1a0  6a10                 push 0x10
// 0047c1a2  50                   push eax
// 0047c1a3  e8b83e0800           call 0x500060
// 0047c1a8  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0047c1ac  8906                 mov dword ptr [esi], eax
// 0047c1ae  8b7608               mov esi, dword ptr [esi + 8]
// 0047c1b1  83c408               add esp, 8
// 0047c1b4  3bce                 cmp ecx, esi
// 0047c1b6  7c02                 jl 0x47c1ba
// 0047c1b8  8bce                 mov ecx, esi
// 0047c1ba  8d0c89               lea ecx, [ecx + ecx*4]
// 0047c1bd  8d1488               lea edx, [eax + ecx*4]
// 0047c1c0  3bc2                 cmp eax, edx
// 0047c1c2  8bcf                 mov ecx, edi
// 0047c1c4  732a                 jae 0x47c1f0
// 0047c1c6  85c0                 test eax, eax
// 0047c1c8  741c                 je 0x47c1e6
// 0047c1ca  8b31                 mov esi, dword ptr [ecx]
// 0047c1cc  8930                 mov dword ptr [eax], esi
// 0047c1ce  8b7104               mov esi, dword ptr [ecx + 4]
// 0047c1d1  897004               mov dword ptr [eax + 4], esi
// 0047c1d4  8b7108               mov esi, dword ptr [ecx + 8]
// 0047c1d7  897008               mov dword ptr [eax + 8], esi
// 0047c1da  8b710c               mov esi, dword ptr [ecx + 0xc]
// 0047c1dd  89700c               mov dword ptr [eax + 0xc], esi
// 0047c1e0  8b7110               mov esi, dword ptr [ecx + 0x10]
// 0047c1e3  897010               mov dword ptr [eax + 0x10], esi
// 0047c1e6  83c014               add eax, 0x14
// 0047c1e9  83c114               add ecx, 0x14
// 0047c1ec  3bc2                 cmp eax, edx
// 0047c1ee  72d6                 jb 0x47c1c6
// 0047c1f0  57                   push edi
// 0047c1f1  e81a360800           call 0x4ff810
// 0047c1f6  83c404               add esp, 4
// 0047c1f9  5f                   pop edi
// 0047c1fa  5e                   pop esi
// 0047c1fb  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?realloc@?$Array@TSDL_Event@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
