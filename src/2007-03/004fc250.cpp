// roc 2007-03 004fc250  unit: seg_004f0000  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004fc250
//
// 004fc250  53                   push ebx
// 004fc251  55                   push ebp
// 004fc252  56                   push esi
// 004fc253  8bf1                 mov esi, ecx
// 004fc255  8b4608               mov eax, dword ptr [esi + 8]
// 004fc258  8d04c0               lea eax, [eax + eax*8]
// 004fc25b  57                   push edi
// 004fc25c  8b3e                 mov edi, dword ptr [esi]
// 004fc25e  03c0                 add eax, eax
// 004fc260  03c0                 add eax, eax
// 004fc262  6a10                 push 0x10
// 004fc264  50                   push eax
// 004fc265  e86679ffff           call 0x4f3bd0
// 004fc26a  8b4e08               mov ecx, dword ptr [esi + 8]
// 004fc26d  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 004fc271  83c408               add esp, 8
// 004fc274  3bd9                 cmp ebx, ecx
// 004fc276  8906                 mov dword ptr [esi], eax
// 004fc278  7d02                 jge 0x4fc27c
// 004fc27a  8bcb                 mov ecx, ebx
// 004fc27c  8d0cc9               lea ecx, [ecx + ecx*8]
// 004fc27f  8d3488               lea esi, [eax + ecx*4]
// 004fc282  8bc8                 mov ecx, eax
// 004fc284  3bce                 cmp ecx, esi
// 004fc286  bd3cfd7900           mov ebp, 0x79fd3c
// 004fc28b  734c                 jae 0x4fc2d9
// 004fc28d  8d511c               lea edx, [ecx + 0x1c]
// 004fc290  8d471c               lea eax, [edi + 0x1c]
// 004fc293  85c9                 test ecx, ecx
// 004fc295  7435                 je 0x4fc2cc
// 004fc297  8b68e4               mov ebp, dword ptr [eax - 0x1c]
// 004fc29a  8929                 mov dword ptr [ecx], ebp
// 004fc29c  8b68e8               mov ebp, dword ptr [eax - 0x18]
// 004fc29f  896904               mov dword ptr [ecx + 4], ebp
// 004fc2a2  8b68ec               mov ebp, dword ptr [eax - 0x14]
// 004fc2a5  896908               mov dword ptr [ecx + 8], ebp
// 004fc2a8  8b68f0               mov ebp, dword ptr [eax - 0x10]
// 004fc2ab  89690c               mov dword ptr [ecx + 0xc], ebp
// 004fc2ae  bd3cfd7900           mov ebp, 0x79fd3c
// 004fc2b3  896af4               mov dword ptr [edx - 0xc], ebp
// 004fc2b6  d940f8               fld dword ptr [eax - 8]
// 004fc2b9  d95af8               fstp dword ptr [edx - 8]
// 004fc2bc  d940fc               fld dword ptr [eax - 4]
// 004fc2bf  d95afc               fstp dword ptr [edx - 4]
// 004fc2c2  d900                 fld dword ptr [eax]
// 004fc2c4  d91a                 fstp dword ptr [edx]
// 004fc2c6  d94004               fld dword ptr [eax + 4]
// 004fc2c9  d95a04               fstp dword ptr [edx + 4]
// 004fc2cc  83c124               add ecx, 0x24
// 004fc2cf  83c224               add edx, 0x24
// 004fc2d2  83c024               add eax, 0x24
// 004fc2d5  3bce                 cmp ecx, esi
// 004fc2d7  72ba                 jb 0x4fc293
// 004fc2d9  8d14db               lea edx, [ebx + ebx*8]
// 004fc2dc  8d0c97               lea ecx, [edi + edx*4]
// 004fc2df  3bf9                 cmp edi, ecx
// 004fc2e1  8bc7                 mov eax, edi
// 004fc2e3  730a                 jae 0x4fc2ef
// 004fc2e5  896810               mov dword ptr [eax + 0x10], ebp
// 004fc2e8  83c024               add eax, 0x24
// 004fc2eb  3bc1                 cmp eax, ecx
// 004fc2ed  72f6                 jb 0x4fc2e5
// 004fc2ef  57                   push edi
// 004fc2f0  e88b70ffff           call 0x4f3380
// 004fc2f5  83c404               add esp, 4
// 004fc2f8  5f                   pop edi
// 004fc2f9  5e                   pop esi
// 004fc2fa  5d                   pop ebp
// 004fc2fb  5b                   pop ebx
// 004fc2fc  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\GCamera.cpp (function ?realloc@?$Array@VFace@Frustum@GCamera@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/GCamera.cpp
