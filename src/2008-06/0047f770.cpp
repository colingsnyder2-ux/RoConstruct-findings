// from server: 100% by auto
// roc 2008-06 0047f770  unit: G3D::Win32Window  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0047f770
//
// 0047f770  56                   push esi
// 0047f771  8bf1                 mov esi, ecx
// 0047f773  8b4608               mov eax, dword ptr [esi + 8]
// 0047f776  8d0480               lea eax, [eax + eax*4]
// 0047f779  57                   push edi
// 0047f77a  8b3e                 mov edi, dword ptr [esi]
// 0047f77c  03c0                 add eax, eax
// 0047f77e  03c0                 add eax, eax
// 0047f780  6a10                 push 0x10
// 0047f782  50                   push eax
// 0047f783  e8f88d0800           call 0x508580
// 0047f788  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0047f78c  8906                 mov dword ptr [esi], eax
// 0047f78e  8b7608               mov esi, dword ptr [esi + 8]
// 0047f791  83c408               add esp, 8
// 0047f794  3bce                 cmp ecx, esi
// 0047f796  7c02                 jl 0x47f79a
// 0047f798  8bce                 mov ecx, esi
// 0047f79a  8d0c89               lea ecx, [ecx + ecx*4]
// 0047f79d  8d1488               lea edx, [eax + ecx*4]
// 0047f7a0  8bcf                 mov ecx, edi
// 0047f7a2  3bc2                 cmp eax, edx
// 0047f7a4  732a                 jae 0x47f7d0
// 0047f7a6  85c0                 test eax, eax
// 0047f7a8  741c                 je 0x47f7c6
// 0047f7aa  8b31                 mov esi, dword ptr [ecx]
// 0047f7ac  8930                 mov dword ptr [eax], esi
// 0047f7ae  8b7104               mov esi, dword ptr [ecx + 4]
// 0047f7b1  897004               mov dword ptr [eax + 4], esi
// 0047f7b4  8b7108               mov esi, dword ptr [ecx + 8]
// 0047f7b7  897008               mov dword ptr [eax + 8], esi
// 0047f7ba  8b710c               mov esi, dword ptr [ecx + 0xc]
// 0047f7bd  89700c               mov dword ptr [eax + 0xc], esi
// 0047f7c0  8b7110               mov esi, dword ptr [ecx + 0x10]
// 0047f7c3  897010               mov dword ptr [eax + 0x10], esi
// 0047f7c6  83c014               add eax, 0x14
// 0047f7c9  83c114               add ecx, 0x14
// 0047f7cc  3bc2                 cmp eax, edx
// 0047f7ce  72d6                 jb 0x47f7a6
// 0047f7d0  57                   push edi
// 0047f7d1  e84a850800           call 0x507d20
// 0047f7d6  83c404               add esp, 4
// 0047f7d9  5f                   pop edi
// 0047f7da  5e                   pop esi
// 0047f7db  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?realloc@?$Array@TSDL_Event@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
