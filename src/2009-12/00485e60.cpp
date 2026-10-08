// roc 2009-12 00485e60  unit: Ogre::GfxClustererPart  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00485e60
//
// 00485e60  53                   push ebx
// 00485e61  55                   push ebp
// 00485e62  56                   push esi
// 00485e63  8bf1                 mov esi, ecx
// 00485e65  8b4608               mov eax, dword ptr [esi + 8]
// 00485e68  8d04c0               lea eax, [eax + eax*8]
// 00485e6b  57                   push edi
// 00485e6c  8b3e                 mov edi, dword ptr [esi]
// 00485e6e  03c0                 add eax, eax
// 00485e70  03c0                 add eax, eax
// 00485e72  6a10                 push 0x10
// 00485e74  50                   push eax
// 00485e75  e846441600           call 0x5ea2c0
// 00485e7a  8b4e08               mov ecx, dword ptr [esi + 8]
// 00485e7d  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00485e81  83c408               add esp, 8
// 00485e84  3bd9                 cmp ebx, ecx
// 00485e86  8906                 mov dword ptr [esi], eax
// 00485e88  7d02                 jge 0x485e8c
// 00485e8a  8bcb                 mov ecx, ebx
// 00485e8c  8d0cc9               lea ecx, [ecx + ecx*8]
// 00485e8f  8d3488               lea esi, [eax + ecx*4]
// 00485e92  8bc8                 mov ecx, eax
// 00485e94  bde4269b00           mov ebp, 0x9b26e4
// 00485e99  3bce                 cmp ecx, esi
// 00485e9b  734c                 jae 0x485ee9
// 00485e9d  8d511c               lea edx, [ecx + 0x1c]
// 00485ea0  8d471c               lea eax, [edi + 0x1c]
// 00485ea3  85c9                 test ecx, ecx
// 00485ea5  7435                 je 0x485edc
// 00485ea7  8b68e4               mov ebp, dword ptr [eax - 0x1c]
// 00485eaa  8929                 mov dword ptr [ecx], ebp
// 00485eac  8b68e8               mov ebp, dword ptr [eax - 0x18]
// 00485eaf  896904               mov dword ptr [ecx + 4], ebp
// 00485eb2  8b68ec               mov ebp, dword ptr [eax - 0x14]
// 00485eb5  896908               mov dword ptr [ecx + 8], ebp
// 00485eb8  8b68f0               mov ebp, dword ptr [eax - 0x10]
// 00485ebb  89690c               mov dword ptr [ecx + 0xc], ebp
// 00485ebe  bde4269b00           mov ebp, 0x9b26e4
// 00485ec3  896af4               mov dword ptr [edx - 0xc], ebp
// 00485ec6  d940f8               fld dword ptr [eax - 8]
// 00485ec9  d95af8               fstp dword ptr [edx - 8]
// 00485ecc  d940fc               fld dword ptr [eax - 4]
// 00485ecf  d95afc               fstp dword ptr [edx - 4]
// 00485ed2  d900                 fld dword ptr [eax]
// 00485ed4  d91a                 fstp dword ptr [edx]
// 00485ed6  d94004               fld dword ptr [eax + 4]
// 00485ed9  d95a04               fstp dword ptr [edx + 4]
// 00485edc  83c124               add ecx, 0x24
// 00485edf  83c224               add edx, 0x24
// 00485ee2  83c024               add eax, 0x24
// 00485ee5  3bce                 cmp ecx, esi
// 00485ee7  72ba                 jb 0x485ea3
// 00485ee9  8d14db               lea edx, [ebx + ebx*8]
// 00485eec  8d0c97               lea ecx, [edi + edx*4]
// 00485eef  8bc7                 mov eax, edi
// 00485ef1  3bf9                 cmp edi, ecx
// 00485ef3  730a                 jae 0x485eff
// 00485ef5  896810               mov dword ptr [eax + 0x10], ebp
// 00485ef8  83c024               add eax, 0x24
// 00485efb  3bc1                 cmp eax, ecx
// 00485efd  72f6                 jb 0x485ef5
// 00485eff  57                   push edi
// 00485f00  e8db441600           call 0x5ea3e0
// 00485f05  83c404               add esp, 4
// 00485f08  5f                   pop edi
// 00485f09  5e                   pop esi
// 00485f0a  5d                   pop ebp
// 00485f0b  5b                   pop ebx
// 00485f0c  c20400               ret 4
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ?realloc@?$Array@VFace@Frustum@GCamera@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp
