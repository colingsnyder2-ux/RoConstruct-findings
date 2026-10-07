// roc 2010-06 004883b0  unit: G3D::Win32Window  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004883b0
//
// 004883b0  56                   push esi
// 004883b1  8bf1                 mov esi, ecx
// 004883b3  8b4608               mov eax, dword ptr [esi + 8]
// 004883b6  8d0480               lea eax, [eax + eax*4]
// 004883b9  57                   push edi
// 004883ba  8b3e                 mov edi, dword ptr [esi]
// 004883bc  03c0                 add eax, eax
// 004883be  03c0                 add eax, eax
// 004883c0  6a10                 push 0x10
// 004883c2  50                   push eax
// 004883c3  e8d8540c00           call 0x54d8a0
// 004883c8  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004883cc  8906                 mov dword ptr [esi], eax
// 004883ce  8b7608               mov esi, dword ptr [esi + 8]
// 004883d1  83c408               add esp, 8
// 004883d4  3bce                 cmp ecx, esi
// 004883d6  7c02                 jl 0x4883da
// 004883d8  8bce                 mov ecx, esi
// 004883da  8d0c89               lea ecx, [ecx + ecx*4]
// 004883dd  8d1488               lea edx, [eax + ecx*4]
// 004883e0  8bcf                 mov ecx, edi
// 004883e2  3bc2                 cmp eax, edx
// 004883e4  732a                 jae 0x488410
// 004883e6  85c0                 test eax, eax
// 004883e8  741c                 je 0x488406
// 004883ea  8b31                 mov esi, dword ptr [ecx]
// 004883ec  8930                 mov dword ptr [eax], esi
// 004883ee  8b7104               mov esi, dword ptr [ecx + 4]
// 004883f1  897004               mov dword ptr [eax + 4], esi
// 004883f4  8b7108               mov esi, dword ptr [ecx + 8]
// 004883f7  897008               mov dword ptr [eax + 8], esi
// 004883fa  8b710c               mov esi, dword ptr [ecx + 0xc]
// 004883fd  89700c               mov dword ptr [eax + 0xc], esi
// 00488400  8b7110               mov esi, dword ptr [ecx + 0x10]
// 00488403  897010               mov dword ptr [eax + 0x10], esi
// 00488406  83c014               add eax, 0x14
// 00488409  83c114               add ecx, 0x14
// 0048840c  3bc2                 cmp eax, edx
// 0048840e  72d6                 jb 0x4883e6
// 00488410  57                   push edi
// 00488411  e8aa550c00           call 0x54d9c0
// 00488416  83c404               add esp, 4
// 00488419  5f                   pop edi
// 0048841a  5e                   pop esi
// 0048841b  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?realloc@?$Array@TSDL_Event@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
