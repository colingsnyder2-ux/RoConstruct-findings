// roc 2009-12 004d63c0  unit: G3D::Win32Window  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d63c0
//
// 004d63c0  56                   push esi
// 004d63c1  8bf1                 mov esi, ecx
// 004d63c3  8b4608               mov eax, dword ptr [esi + 8]
// 004d63c6  8d0480               lea eax, [eax + eax*4]
// 004d63c9  57                   push edi
// 004d63ca  8b3e                 mov edi, dword ptr [esi]
// 004d63cc  03c0                 add eax, eax
// 004d63ce  03c0                 add eax, eax
// 004d63d0  6a10                 push 0x10
// 004d63d2  50                   push eax
// 004d63d3  e8e83e1100           call 0x5ea2c0
// 004d63d8  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004d63dc  8906                 mov dword ptr [esi], eax
// 004d63de  8b7608               mov esi, dword ptr [esi + 8]
// 004d63e1  83c408               add esp, 8
// 004d63e4  3bce                 cmp ecx, esi
// 004d63e6  7c02                 jl 0x4d63ea
// 004d63e8  8bce                 mov ecx, esi
// 004d63ea  8d0c89               lea ecx, [ecx + ecx*4]
// 004d63ed  8d1488               lea edx, [eax + ecx*4]
// 004d63f0  8bcf                 mov ecx, edi
// 004d63f2  3bc2                 cmp eax, edx
// 004d63f4  732a                 jae 0x4d6420
// 004d63f6  85c0                 test eax, eax
// 004d63f8  741c                 je 0x4d6416
// 004d63fa  8b31                 mov esi, dword ptr [ecx]
// 004d63fc  8930                 mov dword ptr [eax], esi
// 004d63fe  8b7104               mov esi, dword ptr [ecx + 4]
// 004d6401  897004               mov dword ptr [eax + 4], esi
// 004d6404  8b7108               mov esi, dword ptr [ecx + 8]
// 004d6407  897008               mov dword ptr [eax + 8], esi
// 004d640a  8b710c               mov esi, dword ptr [ecx + 0xc]
// 004d640d  89700c               mov dword ptr [eax + 0xc], esi
// 004d6410  8b7110               mov esi, dword ptr [ecx + 0x10]
// 004d6413  897010               mov dword ptr [eax + 0x10], esi
// 004d6416  83c014               add eax, 0x14
// 004d6419  83c114               add ecx, 0x14
// 004d641c  3bc2                 cmp eax, edx
// 004d641e  72d6                 jb 0x4d63f6
// 004d6420  57                   push edi
// 004d6421  e8ba3f1100           call 0x5ea3e0
// 004d6426  83c404               add esp, 4
// 004d6429  5f                   pop edi
// 004d642a  5e                   pop esi
// 004d642b  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?realloc@?$Array@TSDL_Event@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
