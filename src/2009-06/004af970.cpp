// from server: 100% by auto
// roc 2009-06 004af970  unit: G3D::Shader  size: 225 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004af970
//
// 004af970  55                   push ebp
// 004af971  56                   push esi
// 004af972  8bf1                 mov esi, ecx
// 004af974  57                   push edi
// 004af975  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004af979  d907                 fld dword ptr [edi]
// 004af97b  d91e                 fstp dword ptr [esi]
// 004af97d  d94704               fld dword ptr [edi + 4]
// 004af980  d95e04               fstp dword ptr [esi + 4]
// 004af983  d94708               fld dword ptr [edi + 8]
// 004af986  d95e08               fstp dword ptr [esi + 8]
// 004af989  d9470c               fld dword ptr [edi + 0xc]
// 004af98c  d95e0c               fstp dword ptr [esi + 0xc]
// 004af98f  d94710               fld dword ptr [edi + 0x10]
// 004af992  d95e10               fstp dword ptr [esi + 0x10]
// 004af995  d94714               fld dword ptr [edi + 0x14]
// 004af998  d95e14               fstp dword ptr [esi + 0x14]
// 004af99b  d94718               fld dword ptr [edi + 0x18]
// 004af99e  d95e18               fstp dword ptr [esi + 0x18]
// 004af9a1  d9471c               fld dword ptr [edi + 0x1c]
// 004af9a4  d95e1c               fstp dword ptr [esi + 0x1c]
// 004af9a7  d94720               fld dword ptr [edi + 0x20]
// 004af9aa  d95e20               fstp dword ptr [esi + 0x20]
// 004af9ad  d94724               fld dword ptr [edi + 0x24]
// 004af9b0  d95e24               fstp dword ptr [esi + 0x24]
// 004af9b3  d94728               fld dword ptr [edi + 0x28]
// 004af9b6  d95e28               fstp dword ptr [esi + 0x28]
// 004af9b9  d9472c               fld dword ptr [edi + 0x2c]
// 004af9bc  d95e2c               fstp dword ptr [esi + 0x2c]
// 004af9bf  d94730               fld dword ptr [edi + 0x30]
// 004af9c2  d95e30               fstp dword ptr [esi + 0x30]
// 004af9c5  d94734               fld dword ptr [edi + 0x34]
// 004af9c8  d95e34               fstp dword ptr [esi + 0x34]
// 004af9cb  d94738               fld dword ptr [edi + 0x38]
// 004af9ce  d95e38               fstp dword ptr [esi + 0x38]
// 004af9d1  d9473c               fld dword ptr [edi + 0x3c]
// 004af9d4  d95e3c               fstp dword ptr [esi + 0x3c]
// 004af9d7  8b6f40               mov ebp, dword ptr [edi + 0x40]
// 004af9da  8b4640               mov eax, dword ptr [esi + 0x40]
// 004af9dd  3be8                 cmp ebp, eax
// 004af9df  7462                 je 0x4afa43
// 004af9e1  85c0                 test eax, eax
// 004af9e3  744d                 je 0x4afa32
// 004af9e5  83c004               add eax, 4
// 004af9e8  50                   push eax
// 004af9e9  ff15a4e18900         call dword ptr [0x89e1a4]
// 004af9ef  85c0                 test eax, eax
// 004af9f1  7538                 jne 0x4afa2b
// 004af9f3  8b4640               mov eax, dword ptr [esi + 0x40]
// 004af9f6  53                   push ebx
// 004af9f7  8b5808               mov ebx, dword ptr [eax + 8]
// 004af9fa  85db                 test ebx, ebx
// 004af9fc  741d                 je 0x4afa1b
// 004af9fe  8bff                 mov edi, edi
// 004afa00  8b0b                 mov ecx, dword ptr [ebx]
// 004afa02  8b11                 mov edx, dword ptr [ecx]
// 004afa04  8b4204               mov eax, dword ptr [edx + 4]
// 004afa07  ffd0                 call eax
// 004afa09  8bc3                 mov eax, ebx
// 004afa0b  8b5b04               mov ebx, dword ptr [ebx + 4]
// 004afa0e  50                   push eax
// 004afa0f  e81e902600           call 0x718a32
// 004afa14  83c404               add esp, 4
// 004afa17  85db                 test ebx, ebx
// 004afa19  75e5                 jne 0x4afa00
// 004afa1b  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 004afa1e  5b                   pop ebx
// 004afa1f  85c9                 test ecx, ecx
// 004afa21  7408                 je 0x4afa2b
// 004afa23  8b11                 mov edx, dword ptr [ecx]
// 004afa25  8b02                 mov eax, dword ptr [edx]
// 004afa27  6a01                 push 1
// 004afa29  ffd0                 call eax
// 004afa2b  c7464000000000       mov dword ptr [esi + 0x40], 0
// 004afa32  85ed                 test ebp, ebp
// 004afa34  740d                 je 0x4afa43
// 004afa36  896e40               mov dword ptr [esi + 0x40], ebp
// 004afa39  83c504               add ebp, 4
// 004afa3c  55                   push ebp
// 004afa3d  ff15d0e18900         call dword ptr [0x89e1d0]
// 004afa43  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 004afa46  5f                   pop edi
// 004afa47  894e44               mov dword ptr [esi + 0x44], ecx
// 004afa4a  8bc6                 mov eax, esi
// 004afa4c  5e                   pop esi
// 004afa4d  5d                   pop ebp
// 004afa4e  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GPUProgram.cpp (function ??4Arg@ArgList@GPUProgram@G3D@@QAEAAV0123@ABV0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GPUProgram.cpp
