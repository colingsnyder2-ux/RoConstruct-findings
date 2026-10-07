// roc 2009-06 00573750  unit: G3D::GCamera  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00573750
//
// 00573750  53                   push ebx
// 00573751  55                   push ebp
// 00573752  56                   push esi
// 00573753  8bf1                 mov esi, ecx
// 00573755  8b4608               mov eax, dword ptr [esi + 8]
// 00573758  8d04c0               lea eax, [eax + eax*8]
// 0057375b  57                   push edi
// 0057375c  8b3e                 mov edi, dword ptr [esi]
// 0057375e  03c0                 add eax, eax
// 00573760  03c0                 add eax, eax
// 00573762  6a10                 push 0x10
// 00573764  50                   push eax
// 00573765  e8067affff           call 0x56b170
// 0057376a  8b4e08               mov ecx, dword ptr [esi + 8]
// 0057376d  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00573771  83c408               add esp, 8
// 00573774  3bd9                 cmp ebx, ecx
// 00573776  8906                 mov dword ptr [esi], eax
// 00573778  7d02                 jge 0x57377c
// 0057377a  8bcb                 mov ecx, ebx
// 0057377c  8d0cc9               lea ecx, [ecx + ecx*8]
// 0057377f  8d3488               lea esi, [eax + ecx*4]
// 00573782  8bc8                 mov ecx, eax
// 00573784  bd14b78c00           mov ebp, 0x8cb714
// 00573789  3bce                 cmp ecx, esi
// 0057378b  734c                 jae 0x5737d9
// 0057378d  8d511c               lea edx, [ecx + 0x1c]
// 00573790  8d471c               lea eax, [edi + 0x1c]
// 00573793  85c9                 test ecx, ecx
// 00573795  7435                 je 0x5737cc
// 00573797  8b68e4               mov ebp, dword ptr [eax - 0x1c]
// 0057379a  8929                 mov dword ptr [ecx], ebp
// 0057379c  8b68e8               mov ebp, dword ptr [eax - 0x18]
// 0057379f  896904               mov dword ptr [ecx + 4], ebp
// 005737a2  8b68ec               mov ebp, dword ptr [eax - 0x14]
// 005737a5  896908               mov dword ptr [ecx + 8], ebp
// 005737a8  8b68f0               mov ebp, dword ptr [eax - 0x10]
// 005737ab  89690c               mov dword ptr [ecx + 0xc], ebp
// 005737ae  bd14b78c00           mov ebp, 0x8cb714
// 005737b3  896af4               mov dword ptr [edx - 0xc], ebp
// 005737b6  d940f8               fld dword ptr [eax - 8]
// 005737b9  d95af8               fstp dword ptr [edx - 8]
// 005737bc  d940fc               fld dword ptr [eax - 4]
// 005737bf  d95afc               fstp dword ptr [edx - 4]
// 005737c2  d900                 fld dword ptr [eax]
// 005737c4  d91a                 fstp dword ptr [edx]
// 005737c6  d94004               fld dword ptr [eax + 4]
// 005737c9  d95a04               fstp dword ptr [edx + 4]
// 005737cc  83c124               add ecx, 0x24
// 005737cf  83c224               add edx, 0x24
// 005737d2  83c024               add eax, 0x24
// 005737d5  3bce                 cmp ecx, esi
// 005737d7  72ba                 jb 0x573793
// 005737d9  8d14db               lea edx, [ebx + ebx*8]
// 005737dc  8d0c97               lea ecx, [edi + edx*4]
// 005737df  8bc7                 mov eax, edi
// 005737e1  3bf9                 cmp edi, ecx
// 005737e3  730a                 jae 0x5737ef
// 005737e5  896810               mov dword ptr [eax + 0x10], ebp
// 005737e8  83c024               add eax, 0x24
// 005737eb  3bc1                 cmp eax, ecx
// 005737ed  72f6                 jb 0x5737e5
// 005737ef  57                   push edi
// 005737f0  e89b7affff           call 0x56b290
// 005737f5  83c404               add esp, 4
// 005737f8  5f                   pop edi
// 005737f9  5e                   pop esi
// 005737fa  5d                   pop ebp
// 005737fb  5b                   pop ebx
// 005737fc  c20400               ret 4
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ?realloc@?$Array@VFace@Frustum@GCamera@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp
