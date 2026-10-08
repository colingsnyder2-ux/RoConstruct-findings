// from server: 100% by auto
// roc 2010-06 0055b650  unit: G3D::GCamera  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0055b650
//
// 0055b650  53                   push ebx
// 0055b651  55                   push ebp
// 0055b652  56                   push esi
// 0055b653  8bf1                 mov esi, ecx
// 0055b655  8b4608               mov eax, dword ptr [esi + 8]
// 0055b658  8d04c0               lea eax, [eax + eax*8]
// 0055b65b  57                   push edi
// 0055b65c  8b3e                 mov edi, dword ptr [esi]
// 0055b65e  03c0                 add eax, eax
// 0055b660  03c0                 add eax, eax
// 0055b662  6a10                 push 0x10
// 0055b664  50                   push eax
// 0055b665  e83622ffff           call 0x54d8a0
// 0055b66a  8b4e08               mov ecx, dword ptr [esi + 8]
// 0055b66d  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0055b671  83c408               add esp, 8
// 0055b674  3bd9                 cmp ebx, ecx
// 0055b676  8906                 mov dword ptr [esi], eax
// 0055b678  7d02                 jge 0x55b67c
// 0055b67a  8bcb                 mov ecx, ebx
// 0055b67c  8d0cc9               lea ecx, [ecx + ecx*8]
// 0055b67f  8d3488               lea esi, [eax + ecx*4]
// 0055b682  8bc8                 mov ecx, eax
// 0055b684  bd340aa200           mov ebp, 0xa20a34
// 0055b689  3bce                 cmp ecx, esi
// 0055b68b  734c                 jae 0x55b6d9
// 0055b68d  8d511c               lea edx, [ecx + 0x1c]
// 0055b690  8d471c               lea eax, [edi + 0x1c]
// 0055b693  85c9                 test ecx, ecx
// 0055b695  7435                 je 0x55b6cc
// 0055b697  8b68e4               mov ebp, dword ptr [eax - 0x1c]
// 0055b69a  8929                 mov dword ptr [ecx], ebp
// 0055b69c  8b68e8               mov ebp, dword ptr [eax - 0x18]
// 0055b69f  896904               mov dword ptr [ecx + 4], ebp
// 0055b6a2  8b68ec               mov ebp, dword ptr [eax - 0x14]
// 0055b6a5  896908               mov dword ptr [ecx + 8], ebp
// 0055b6a8  8b68f0               mov ebp, dword ptr [eax - 0x10]
// 0055b6ab  89690c               mov dword ptr [ecx + 0xc], ebp
// 0055b6ae  bd340aa200           mov ebp, 0xa20a34
// 0055b6b3  896af4               mov dword ptr [edx - 0xc], ebp
// 0055b6b6  d940f8               fld dword ptr [eax - 8]
// 0055b6b9  d95af8               fstp dword ptr [edx - 8]
// 0055b6bc  d940fc               fld dword ptr [eax - 4]
// 0055b6bf  d95afc               fstp dword ptr [edx - 4]
// 0055b6c2  d900                 fld dword ptr [eax]
// 0055b6c4  d91a                 fstp dword ptr [edx]
// 0055b6c6  d94004               fld dword ptr [eax + 4]
// 0055b6c9  d95a04               fstp dword ptr [edx + 4]
// 0055b6cc  83c124               add ecx, 0x24
// 0055b6cf  83c224               add edx, 0x24
// 0055b6d2  83c024               add eax, 0x24
// 0055b6d5  3bce                 cmp ecx, esi
// 0055b6d7  72ba                 jb 0x55b693
// 0055b6d9  8d14db               lea edx, [ebx + ebx*8]
// 0055b6dc  8d0c97               lea ecx, [edi + edx*4]
// 0055b6df  8bc7                 mov eax, edi
// 0055b6e1  3bf9                 cmp edi, ecx
// 0055b6e3  730a                 jae 0x55b6ef
// 0055b6e5  896810               mov dword ptr [eax + 0x10], ebp
// 0055b6e8  83c024               add eax, 0x24
// 0055b6eb  3bc1                 cmp eax, ecx
// 0055b6ed  72f6                 jb 0x55b6e5
// 0055b6ef  57                   push edi
// 0055b6f0  e8cb22ffff           call 0x54d9c0
// 0055b6f5  83c404               add esp, 4
// 0055b6f8  5f                   pop edi
// 0055b6f9  5e                   pop esi
// 0055b6fa  5d                   pop ebp
// 0055b6fb  5b                   pop ebx
// 0055b6fc  c20400               ret 4
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ?realloc@?$Array@VFace@Frustum@GCamera@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp
