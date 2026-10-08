// from server: 100% by auto
// roc 2007-08 005072a0  unit: G3D::GCamera  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005072a0
//
// 005072a0  53                   push ebx
// 005072a1  55                   push ebp
// 005072a2  56                   push esi
// 005072a3  8bf1                 mov esi, ecx
// 005072a5  8b4608               mov eax, dword ptr [esi + 8]
// 005072a8  8d04c0               lea eax, [eax + eax*8]
// 005072ab  57                   push edi
// 005072ac  8b3e                 mov edi, dword ptr [esi]
// 005072ae  03c0                 add eax, eax
// 005072b0  03c0                 add eax, eax
// 005072b2  6a10                 push 0x10
// 005072b4  50                   push eax
// 005072b5  e8a68dffff           call 0x500060
// 005072ba  8b4e08               mov ecx, dword ptr [esi + 8]
// 005072bd  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 005072c1  83c408               add esp, 8
// 005072c4  3bd9                 cmp ebx, ecx
// 005072c6  8906                 mov dword ptr [esi], eax
// 005072c8  7d02                 jge 0x5072cc
// 005072ca  8bcb                 mov ecx, ebx
// 005072cc  8d0cc9               lea ecx, [ecx + ecx*8]
// 005072cf  8d3488               lea esi, [eax + ecx*4]
// 005072d2  8bc8                 mov ecx, eax
// 005072d4  3bce                 cmp ecx, esi
// 005072d6  bdfc057a00           mov ebp, 0x7a05fc
// 005072db  734c                 jae 0x507329
// 005072dd  8d511c               lea edx, [ecx + 0x1c]
// 005072e0  8d471c               lea eax, [edi + 0x1c]
// 005072e3  85c9                 test ecx, ecx
// 005072e5  7435                 je 0x50731c
// 005072e7  8b68e4               mov ebp, dword ptr [eax - 0x1c]
// 005072ea  8929                 mov dword ptr [ecx], ebp
// 005072ec  8b68e8               mov ebp, dword ptr [eax - 0x18]
// 005072ef  896904               mov dword ptr [ecx + 4], ebp
// 005072f2  8b68ec               mov ebp, dword ptr [eax - 0x14]
// 005072f5  896908               mov dword ptr [ecx + 8], ebp
// 005072f8  8b68f0               mov ebp, dword ptr [eax - 0x10]
// 005072fb  89690c               mov dword ptr [ecx + 0xc], ebp
// 005072fe  bdfc057a00           mov ebp, 0x7a05fc
// 00507303  896af4               mov dword ptr [edx - 0xc], ebp
// 00507306  d940f8               fld dword ptr [eax - 8]
// 00507309  d95af8               fstp dword ptr [edx - 8]
// 0050730c  d940fc               fld dword ptr [eax - 4]
// 0050730f  d95afc               fstp dword ptr [edx - 4]
// 00507312  d900                 fld dword ptr [eax]
// 00507314  d91a                 fstp dword ptr [edx]
// 00507316  d94004               fld dword ptr [eax + 4]
// 00507319  d95a04               fstp dword ptr [edx + 4]
// 0050731c  83c124               add ecx, 0x24
// 0050731f  83c224               add edx, 0x24
// 00507322  83c024               add eax, 0x24
// 00507325  3bce                 cmp ecx, esi
// 00507327  72ba                 jb 0x5072e3
// 00507329  8d14db               lea edx, [ebx + ebx*8]
// 0050732c  8d0c97               lea ecx, [edi + edx*4]
// 0050732f  3bf9                 cmp edi, ecx
// 00507331  8bc7                 mov eax, edi
// 00507333  730a                 jae 0x50733f
// 00507335  896810               mov dword ptr [eax + 0x10], ebp
// 00507338  83c024               add eax, 0x24
// 0050733b  3bc1                 cmp eax, ecx
// 0050733d  72f6                 jb 0x507335
// 0050733f  57                   push edi
// 00507340  e8cb84ffff           call 0x4ff810
// 00507345  83c404               add esp, 4
// 00507348  5f                   pop edi
// 00507349  5e                   pop esi
// 0050734a  5d                   pop ebp
// 0050734b  5b                   pop ebx
// 0050734c  c20400               ret 4
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ?realloc@?$Array@VFace@Frustum@GCamera@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp
