// from server: 100% by auto
// roc 2007-08 004748e0  unit: G3D::VARArea  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004748e0
//
// 004748e0  53                   push ebx
// 004748e1  55                   push ebp
// 004748e2  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 004748e6  56                   push esi
// 004748e7  57                   push edi
// 004748e8  55                   push ebp
// 004748e9  8bd9                 mov ebx, ecx
// 004748eb  e8e04c0900           call 0x5095d0
// 004748f0  d94524               fld dword ptr [ebp + 0x24]
// 004748f3  d95b24               fstp dword ptr [ebx + 0x24]
// 004748f6  8d7530               lea esi, [ebp + 0x30]
// 004748f9  d94528               fld dword ptr [ebp + 0x28]
// 004748fc  8d7b30               lea edi, [ebx + 0x30]
// 004748ff  d95b28               fstp dword ptr [ebx + 0x28]
// 00474902  56                   push esi
// 00474903  d9452c               fld dword ptr [ebp + 0x2c]
// 00474906  8bcf                 mov ecx, edi
// 00474908  d95b2c               fstp dword ptr [ebx + 0x2c]
// 0047490b  e8c04c0900           call 0x5095d0
// 00474910  d94624               fld dword ptr [esi + 0x24]
// 00474913  d95f24               fstp dword ptr [edi + 0x24]
// 00474916  d94628               fld dword ptr [esi + 0x28]
// 00474919  d95f28               fstp dword ptr [edi + 0x28]
// 0047491c  d9462c               fld dword ptr [esi + 0x2c]
// 0047491f  8d7560               lea esi, [ebp + 0x60]
// 00474922  d95f2c               fstp dword ptr [edi + 0x2c]
// 00474925  8d7b60               lea edi, [ebx + 0x60]
// 00474928  56                   push esi
// 00474929  8bcf                 mov ecx, edi
// 0047492b  e8a04c0900           call 0x5095d0
// 00474930  d94624               fld dword ptr [esi + 0x24]
// 00474933  d95f24               fstp dword ptr [edi + 0x24]
// 00474936  b910000000           mov ecx, 0x10
// 0047493b  d94628               fld dword ptr [esi + 0x28]
// 0047493e  d95f28               fstp dword ptr [edi + 0x28]
// 00474941  d9462c               fld dword ptr [esi + 0x2c]
// 00474944  8db590000000         lea esi, [ebp + 0x90]
// 0047494a  d95f2c               fstp dword ptr [edi + 0x2c]
// 0047494d  8dbb90000000         lea edi, [ebx + 0x90]
// 00474953  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00474955  8a85d0000000         mov al, byte ptr [ebp + 0xd0]
// 0047495b  5f                   pop edi
// 0047495c  5e                   pop esi
// 0047495d  8883d0000000         mov byte ptr [ebx + 0xd0], al
// 00474963  5d                   pop ebp
// 00474964  8bc3                 mov eax, ebx
// 00474966  5b                   pop ebx
// 00474967  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??0Matrices@RenderState@RenderDevice@G3D@@QAE@ABV0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
