// from server: 100% by auto
// roc 2008-06 00485a80  unit: G3D::Shader  size: 225 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00485a80
//
// 00485a80  55                   push ebp
// 00485a81  56                   push esi
// 00485a82  8bf1                 mov esi, ecx
// 00485a84  57                   push edi
// 00485a85  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00485a89  d907                 fld dword ptr [edi]
// 00485a8b  d91e                 fstp dword ptr [esi]
// 00485a8d  d94704               fld dword ptr [edi + 4]
// 00485a90  d95e04               fstp dword ptr [esi + 4]
// 00485a93  d94708               fld dword ptr [edi + 8]
// 00485a96  d95e08               fstp dword ptr [esi + 8]
// 00485a99  d9470c               fld dword ptr [edi + 0xc]
// 00485a9c  d95e0c               fstp dword ptr [esi + 0xc]
// 00485a9f  d94710               fld dword ptr [edi + 0x10]
// 00485aa2  d95e10               fstp dword ptr [esi + 0x10]
// 00485aa5  d94714               fld dword ptr [edi + 0x14]
// 00485aa8  d95e14               fstp dword ptr [esi + 0x14]
// 00485aab  d94718               fld dword ptr [edi + 0x18]
// 00485aae  d95e18               fstp dword ptr [esi + 0x18]
// 00485ab1  d9471c               fld dword ptr [edi + 0x1c]
// 00485ab4  d95e1c               fstp dword ptr [esi + 0x1c]
// 00485ab7  d94720               fld dword ptr [edi + 0x20]
// 00485aba  d95e20               fstp dword ptr [esi + 0x20]
// 00485abd  d94724               fld dword ptr [edi + 0x24]
// 00485ac0  d95e24               fstp dword ptr [esi + 0x24]
// 00485ac3  d94728               fld dword ptr [edi + 0x28]
// 00485ac6  d95e28               fstp dword ptr [esi + 0x28]
// 00485ac9  d9472c               fld dword ptr [edi + 0x2c]
// 00485acc  d95e2c               fstp dword ptr [esi + 0x2c]
// 00485acf  d94730               fld dword ptr [edi + 0x30]
// 00485ad2  d95e30               fstp dword ptr [esi + 0x30]
// 00485ad5  d94734               fld dword ptr [edi + 0x34]
// 00485ad8  d95e34               fstp dword ptr [esi + 0x34]
// 00485adb  d94738               fld dword ptr [edi + 0x38]
// 00485ade  d95e38               fstp dword ptr [esi + 0x38]
// 00485ae1  d9473c               fld dword ptr [edi + 0x3c]
// 00485ae4  d95e3c               fstp dword ptr [esi + 0x3c]
// 00485ae7  8b6f40               mov ebp, dword ptr [edi + 0x40]
// 00485aea  8b4640               mov eax, dword ptr [esi + 0x40]
// 00485aed  3be8                 cmp ebp, eax
// 00485aef  7462                 je 0x485b53
// 00485af1  85c0                 test eax, eax
// 00485af3  744d                 je 0x485b42
// 00485af5  83c004               add eax, 4
// 00485af8  50                   push eax
// 00485af9  ff15ac218000         call dword ptr [0x8021ac]
// 00485aff  85c0                 test eax, eax
// 00485b01  7538                 jne 0x485b3b
// 00485b03  8b4640               mov eax, dword ptr [esi + 0x40]
// 00485b06  53                   push ebx
// 00485b07  8b5808               mov ebx, dword ptr [eax + 8]
// 00485b0a  85db                 test ebx, ebx
// 00485b0c  741d                 je 0x485b2b
// 00485b0e  8bff                 mov edi, edi
// 00485b10  8b0b                 mov ecx, dword ptr [ebx]
// 00485b12  8b11                 mov edx, dword ptr [ecx]
// 00485b14  8b4204               mov eax, dword ptr [edx + 4]
// 00485b17  ffd0                 call eax
// 00485b19  8bc3                 mov eax, ebx
// 00485b1b  8b5b04               mov ebx, dword ptr [ebx + 4]
// 00485b1e  50                   push eax
// 00485b1f  e856ab2100           call 0x6a067a
// 00485b24  83c404               add esp, 4
// 00485b27  85db                 test ebx, ebx
// 00485b29  75e5                 jne 0x485b10
// 00485b2b  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 00485b2e  5b                   pop ebx
// 00485b2f  85c9                 test ecx, ecx
// 00485b31  7408                 je 0x485b3b
// 00485b33  8b11                 mov edx, dword ptr [ecx]
// 00485b35  8b02                 mov eax, dword ptr [edx]
// 00485b37  6a01                 push 1
// 00485b39  ffd0                 call eax
// 00485b3b  c7464000000000       mov dword ptr [esi + 0x40], 0
// 00485b42  85ed                 test ebp, ebp
// 00485b44  740d                 je 0x485b53
// 00485b46  896e40               mov dword ptr [esi + 0x40], ebp
// 00485b49  83c504               add ebp, 4
// 00485b4c  55                   push ebp
// 00485b4d  ff15b0218000         call dword ptr [0x8021b0]
// 00485b53  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 00485b56  5f                   pop edi
// 00485b57  894e44               mov dword ptr [esi + 0x44], ecx
// 00485b5a  8bc6                 mov eax, esi
// 00485b5c  5e                   pop esi
// 00485b5d  5d                   pop ebp
// 00485b5e  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GPUProgram.cpp (function ??4Arg@ArgList@GPUProgram@G3D@@QAEAAV0123@ABV0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GPUProgram.cpp
