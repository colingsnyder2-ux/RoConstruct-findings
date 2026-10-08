// from server: 100% by auto
// roc 2010-06 004988e0  unit: G3D::Shader  size: 225 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004988e0
//
// 004988e0  55                   push ebp
// 004988e1  56                   push esi
// 004988e2  8bf1                 mov esi, ecx
// 004988e4  57                   push edi
// 004988e5  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004988e9  d907                 fld dword ptr [edi]
// 004988eb  d91e                 fstp dword ptr [esi]
// 004988ed  d94704               fld dword ptr [edi + 4]
// 004988f0  d95e04               fstp dword ptr [esi + 4]
// 004988f3  d94708               fld dword ptr [edi + 8]
// 004988f6  d95e08               fstp dword ptr [esi + 8]
// 004988f9  d9470c               fld dword ptr [edi + 0xc]
// 004988fc  d95e0c               fstp dword ptr [esi + 0xc]
// 004988ff  d94710               fld dword ptr [edi + 0x10]
// 00498902  d95e10               fstp dword ptr [esi + 0x10]
// 00498905  d94714               fld dword ptr [edi + 0x14]
// 00498908  d95e14               fstp dword ptr [esi + 0x14]
// 0049890b  d94718               fld dword ptr [edi + 0x18]
// 0049890e  d95e18               fstp dword ptr [esi + 0x18]
// 00498911  d9471c               fld dword ptr [edi + 0x1c]
// 00498914  d95e1c               fstp dword ptr [esi + 0x1c]
// 00498917  d94720               fld dword ptr [edi + 0x20]
// 0049891a  d95e20               fstp dword ptr [esi + 0x20]
// 0049891d  d94724               fld dword ptr [edi + 0x24]
// 00498920  d95e24               fstp dword ptr [esi + 0x24]
// 00498923  d94728               fld dword ptr [edi + 0x28]
// 00498926  d95e28               fstp dword ptr [esi + 0x28]
// 00498929  d9472c               fld dword ptr [edi + 0x2c]
// 0049892c  d95e2c               fstp dword ptr [esi + 0x2c]
// 0049892f  d94730               fld dword ptr [edi + 0x30]
// 00498932  d95e30               fstp dword ptr [esi + 0x30]
// 00498935  d94734               fld dword ptr [edi + 0x34]
// 00498938  d95e34               fstp dword ptr [esi + 0x34]
// 0049893b  d94738               fld dword ptr [edi + 0x38]
// 0049893e  d95e38               fstp dword ptr [esi + 0x38]
// 00498941  d9473c               fld dword ptr [edi + 0x3c]
// 00498944  d95e3c               fstp dword ptr [esi + 0x3c]
// 00498947  8b6f40               mov ebp, dword ptr [edi + 0x40]
// 0049894a  8b4640               mov eax, dword ptr [esi + 0x40]
// 0049894d  3be8                 cmp ebp, eax
// 0049894f  7462                 je 0x4989b3
// 00498951  85c0                 test eax, eax
// 00498953  744d                 je 0x4989a2
// 00498955  83c004               add eax, 4
// 00498958  50                   push eax
// 00498959  ff157ca39e00         call dword ptr [0x9ea37c]
// 0049895f  85c0                 test eax, eax
// 00498961  7538                 jne 0x49899b
// 00498963  8b4640               mov eax, dword ptr [esi + 0x40]
// 00498966  53                   push ebx
// 00498967  8b5808               mov ebx, dword ptr [eax + 8]
// 0049896a  85db                 test ebx, ebx
// 0049896c  741d                 je 0x49898b
// 0049896e  8bff                 mov edi, edi
// 00498970  8b0b                 mov ecx, dword ptr [ebx]
// 00498972  8b11                 mov edx, dword ptr [ecx]
// 00498974  8b4204               mov eax, dword ptr [edx + 4]
// 00498977  ffd0                 call eax
// 00498979  8bc3                 mov eax, ebx
// 0049897b  8b5b04               mov ebx, dword ptr [ebx + 4]
// 0049897e  50                   push eax
// 0049897f  e816f03000           call 0x7a799a
// 00498984  83c404               add esp, 4
// 00498987  85db                 test ebx, ebx
// 00498989  75e5                 jne 0x498970
// 0049898b  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 0049898e  5b                   pop ebx
// 0049898f  85c9                 test ecx, ecx
// 00498991  7408                 je 0x49899b
// 00498993  8b11                 mov edx, dword ptr [ecx]
// 00498995  8b02                 mov eax, dword ptr [edx]
// 00498997  6a01                 push 1
// 00498999  ffd0                 call eax
// 0049899b  c7464000000000       mov dword ptr [esi + 0x40], 0
// 004989a2  85ed                 test ebp, ebp
// 004989a4  740d                 je 0x4989b3
// 004989a6  896e40               mov dword ptr [esi + 0x40], ebp
// 004989a9  83c504               add ebp, 4
// 004989ac  55                   push ebp
// 004989ad  ff1580a39e00         call dword ptr [0x9ea380]
// 004989b3  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 004989b6  5f                   pop edi
// 004989b7  894e44               mov dword ptr [esi + 0x44], ecx
// 004989ba  8bc6                 mov eax, esi
// 004989bc  5e                   pop esi
// 004989bd  5d                   pop ebp
// 004989be  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GPUProgram.cpp (function ??4Arg@ArgList@GPUProgram@G3D@@QAEAAV0123@ABV0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GPUProgram.cpp
