// roc 2009-12 004dc4b0  unit: G3D::Shader  size: 225 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004dc4b0
//
// 004dc4b0  55                   push ebp
// 004dc4b1  56                   push esi
// 004dc4b2  8bf1                 mov esi, ecx
// 004dc4b4  57                   push edi
// 004dc4b5  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004dc4b9  d907                 fld dword ptr [edi]
// 004dc4bb  d91e                 fstp dword ptr [esi]
// 004dc4bd  d94704               fld dword ptr [edi + 4]
// 004dc4c0  d95e04               fstp dword ptr [esi + 4]
// 004dc4c3  d94708               fld dword ptr [edi + 8]
// 004dc4c6  d95e08               fstp dword ptr [esi + 8]
// 004dc4c9  d9470c               fld dword ptr [edi + 0xc]
// 004dc4cc  d95e0c               fstp dword ptr [esi + 0xc]
// 004dc4cf  d94710               fld dword ptr [edi + 0x10]
// 004dc4d2  d95e10               fstp dword ptr [esi + 0x10]
// 004dc4d5  d94714               fld dword ptr [edi + 0x14]
// 004dc4d8  d95e14               fstp dword ptr [esi + 0x14]
// 004dc4db  d94718               fld dword ptr [edi + 0x18]
// 004dc4de  d95e18               fstp dword ptr [esi + 0x18]
// 004dc4e1  d9471c               fld dword ptr [edi + 0x1c]
// 004dc4e4  d95e1c               fstp dword ptr [esi + 0x1c]
// 004dc4e7  d94720               fld dword ptr [edi + 0x20]
// 004dc4ea  d95e20               fstp dword ptr [esi + 0x20]
// 004dc4ed  d94724               fld dword ptr [edi + 0x24]
// 004dc4f0  d95e24               fstp dword ptr [esi + 0x24]
// 004dc4f3  d94728               fld dword ptr [edi + 0x28]
// 004dc4f6  d95e28               fstp dword ptr [esi + 0x28]
// 004dc4f9  d9472c               fld dword ptr [edi + 0x2c]
// 004dc4fc  d95e2c               fstp dword ptr [esi + 0x2c]
// 004dc4ff  d94730               fld dword ptr [edi + 0x30]
// 004dc502  d95e30               fstp dword ptr [esi + 0x30]
// 004dc505  d94734               fld dword ptr [edi + 0x34]
// 004dc508  d95e34               fstp dword ptr [esi + 0x34]
// 004dc50b  d94738               fld dword ptr [edi + 0x38]
// 004dc50e  d95e38               fstp dword ptr [esi + 0x38]
// 004dc511  d9473c               fld dword ptr [edi + 0x3c]
// 004dc514  d95e3c               fstp dword ptr [esi + 0x3c]
// 004dc517  8b6f40               mov ebp, dword ptr [edi + 0x40]
// 004dc51a  8b4640               mov eax, dword ptr [esi + 0x40]
// 004dc51d  3be8                 cmp ebp, eax
// 004dc51f  7462                 je 0x4dc583
// 004dc521  85c0                 test eax, eax
// 004dc523  744d                 je 0x4dc572
// 004dc525  83c004               add eax, 4
// 004dc528  50                   push eax
// 004dc529  ff1508b29800         call dword ptr [0x98b208]
// 004dc52f  85c0                 test eax, eax
// 004dc531  7538                 jne 0x4dc56b
// 004dc533  8b4640               mov eax, dword ptr [esi + 0x40]
// 004dc536  53                   push ebx
// 004dc537  8b5808               mov ebx, dword ptr [eax + 8]
// 004dc53a  85db                 test ebx, ebx
// 004dc53c  741d                 je 0x4dc55b
// 004dc53e  8bff                 mov edi, edi
// 004dc540  8b0b                 mov ecx, dword ptr [ebx]
// 004dc542  8b11                 mov edx, dword ptr [ecx]
// 004dc544  8b4204               mov eax, dword ptr [edx + 4]
// 004dc547  ffd0                 call eax
// 004dc549  8bc3                 mov eax, ebx
// 004dc54b  8b5b04               mov ebx, dword ptr [ebx + 4]
// 004dc54e  50                   push eax
// 004dc54f  e806733100           call 0x7f385a
// 004dc554  83c404               add esp, 4
// 004dc557  85db                 test ebx, ebx
// 004dc559  75e5                 jne 0x4dc540
// 004dc55b  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 004dc55e  5b                   pop ebx
// 004dc55f  85c9                 test ecx, ecx
// 004dc561  7408                 je 0x4dc56b
// 004dc563  8b11                 mov edx, dword ptr [ecx]
// 004dc565  8b02                 mov eax, dword ptr [edx]
// 004dc567  6a01                 push 1
// 004dc569  ffd0                 call eax
// 004dc56b  c7464000000000       mov dword ptr [esi + 0x40], 0
// 004dc572  85ed                 test ebp, ebp
// 004dc574  740d                 je 0x4dc583
// 004dc576  896e40               mov dword ptr [esi + 0x40], ebp
// 004dc579  83c504               add ebp, 4
// 004dc57c  55                   push ebp
// 004dc57d  ff150cb29800         call dword ptr [0x98b20c]
// 004dc583  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 004dc586  5f                   pop edi
// 004dc587  894e44               mov dword ptr [esi + 0x44], ecx
// 004dc58a  8bc6                 mov eax, esi
// 004dc58c  5e                   pop esi
// 004dc58d  5d                   pop ebp
// 004dc58e  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GPUProgram.cpp (function ??4Arg@ArgList@GPUProgram@G3D@@QAEAAV0123@ABV0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GPUProgram.cpp
