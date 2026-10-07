// roc 2008-06 00510f50  unit: G3D::GCamera  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00510f50
//
// 00510f50  53                   push ebx
// 00510f51  55                   push ebp
// 00510f52  56                   push esi
// 00510f53  8bf1                 mov esi, ecx
// 00510f55  8b4608               mov eax, dword ptr [esi + 8]
// 00510f58  8d04c0               lea eax, [eax + eax*8]
// 00510f5b  57                   push edi
// 00510f5c  8b3e                 mov edi, dword ptr [esi]
// 00510f5e  03c0                 add eax, eax
// 00510f60  03c0                 add eax, eax
// 00510f62  6a10                 push 0x10
// 00510f64  50                   push eax
// 00510f65  e81676ffff           call 0x508580
// 00510f6a  8b4e08               mov ecx, dword ptr [esi + 8]
// 00510f6d  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00510f71  83c408               add esp, 8
// 00510f74  3bd9                 cmp ebx, ecx
// 00510f76  8906                 mov dword ptr [esi], eax
// 00510f78  7d02                 jge 0x510f7c
// 00510f7a  8bcb                 mov ecx, ebx
// 00510f7c  8d0cc9               lea ecx, [ecx + ecx*8]
// 00510f7f  8d3488               lea esi, [eax + ecx*4]
// 00510f82  8bc8                 mov ecx, eax
// 00510f84  bdbc828200           mov ebp, 0x8282bc
// 00510f89  3bce                 cmp ecx, esi
// 00510f8b  734c                 jae 0x510fd9
// 00510f8d  8d511c               lea edx, [ecx + 0x1c]
// 00510f90  8d471c               lea eax, [edi + 0x1c]
// 00510f93  85c9                 test ecx, ecx
// 00510f95  7435                 je 0x510fcc
// 00510f97  8b68e4               mov ebp, dword ptr [eax - 0x1c]
// 00510f9a  8929                 mov dword ptr [ecx], ebp
// 00510f9c  8b68e8               mov ebp, dword ptr [eax - 0x18]
// 00510f9f  896904               mov dword ptr [ecx + 4], ebp
// 00510fa2  8b68ec               mov ebp, dword ptr [eax - 0x14]
// 00510fa5  896908               mov dword ptr [ecx + 8], ebp
// 00510fa8  8b68f0               mov ebp, dword ptr [eax - 0x10]
// 00510fab  89690c               mov dword ptr [ecx + 0xc], ebp
// 00510fae  bdbc828200           mov ebp, 0x8282bc
// 00510fb3  896af4               mov dword ptr [edx - 0xc], ebp
// 00510fb6  d940f8               fld dword ptr [eax - 8]
// 00510fb9  d95af8               fstp dword ptr [edx - 8]
// 00510fbc  d940fc               fld dword ptr [eax - 4]
// 00510fbf  d95afc               fstp dword ptr [edx - 4]
// 00510fc2  d900                 fld dword ptr [eax]
// 00510fc4  d91a                 fstp dword ptr [edx]
// 00510fc6  d94004               fld dword ptr [eax + 4]
// 00510fc9  d95a04               fstp dword ptr [edx + 4]
// 00510fcc  83c124               add ecx, 0x24
// 00510fcf  83c224               add edx, 0x24
// 00510fd2  83c024               add eax, 0x24
// 00510fd5  3bce                 cmp ecx, esi
// 00510fd7  72ba                 jb 0x510f93
// 00510fd9  8d14db               lea edx, [ebx + ebx*8]
// 00510fdc  8d0c97               lea ecx, [edi + edx*4]
// 00510fdf  8bc7                 mov eax, edi
// 00510fe1  3bf9                 cmp edi, ecx
// 00510fe3  730a                 jae 0x510fef
// 00510fe5  896810               mov dword ptr [eax + 0x10], ebp
// 00510fe8  83c024               add eax, 0x24
// 00510feb  3bc1                 cmp eax, ecx
// 00510fed  72f6                 jb 0x510fe5
// 00510fef  57                   push edi
// 00510ff0  e82b6dffff           call 0x507d20
// 00510ff5  83c404               add esp, 4
// 00510ff8  5f                   pop edi
// 00510ff9  5e                   pop esi
// 00510ffa  5d                   pop ebp
// 00510ffb  5b                   pop ebx
// 00510ffc  c20400               ret 4
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ?realloc@?$Array@VFace@Frustum@GCamera@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp
