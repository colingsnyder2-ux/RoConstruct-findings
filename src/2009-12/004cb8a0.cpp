// roc 2009-12 004cb8a0  unit: G3D::VARArea  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004cb8a0
//
// 004cb8a0  53                   push ebx
// 004cb8a1  55                   push ebp
// 004cb8a2  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 004cb8a6  56                   push esi
// 004cb8a7  57                   push edi
// 004cb8a8  55                   push ebp
// 004cb8a9  8bd9                 mov ebx, ecx
// 004cb8ab  e850801200           call 0x5f3900
// 004cb8b0  d94524               fld dword ptr [ebp + 0x24]
// 004cb8b3  d95b24               fstp dword ptr [ebx + 0x24]
// 004cb8b6  8d7530               lea esi, [ebp + 0x30]
// 004cb8b9  d94528               fld dword ptr [ebp + 0x28]
// 004cb8bc  8d7b30               lea edi, [ebx + 0x30]
// 004cb8bf  d95b28               fstp dword ptr [ebx + 0x28]
// 004cb8c2  56                   push esi
// 004cb8c3  d9452c               fld dword ptr [ebp + 0x2c]
// 004cb8c6  8bcf                 mov ecx, edi
// 004cb8c8  d95b2c               fstp dword ptr [ebx + 0x2c]
// 004cb8cb  e830801200           call 0x5f3900
// 004cb8d0  d94624               fld dword ptr [esi + 0x24]
// 004cb8d3  d95f24               fstp dword ptr [edi + 0x24]
// 004cb8d6  d94628               fld dword ptr [esi + 0x28]
// 004cb8d9  d95f28               fstp dword ptr [edi + 0x28]
// 004cb8dc  d9462c               fld dword ptr [esi + 0x2c]
// 004cb8df  8d7560               lea esi, [ebp + 0x60]
// 004cb8e2  d95f2c               fstp dword ptr [edi + 0x2c]
// 004cb8e5  8d7b60               lea edi, [ebx + 0x60]
// 004cb8e8  56                   push esi
// 004cb8e9  8bcf                 mov ecx, edi
// 004cb8eb  e810801200           call 0x5f3900
// 004cb8f0  d94624               fld dword ptr [esi + 0x24]
// 004cb8f3  d95f24               fstp dword ptr [edi + 0x24]
// 004cb8f6  b910000000           mov ecx, 0x10
// 004cb8fb  d94628               fld dword ptr [esi + 0x28]
// 004cb8fe  d95f28               fstp dword ptr [edi + 0x28]
// 004cb901  d9462c               fld dword ptr [esi + 0x2c]
// 004cb904  8db590000000         lea esi, [ebp + 0x90]
// 004cb90a  d95f2c               fstp dword ptr [edi + 0x2c]
// 004cb90d  8dbb90000000         lea edi, [ebx + 0x90]
// 004cb913  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004cb915  8a85d0000000         mov al, byte ptr [ebp + 0xd0]
// 004cb91b  5f                   pop edi
// 004cb91c  5e                   pop esi
// 004cb91d  8883d0000000         mov byte ptr [ebx + 0xd0], al
// 004cb923  5d                   pop ebp
// 004cb924  8bc3                 mov eax, ebx
// 004cb926  5b                   pop ebx
// 004cb927  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??0Matrices@RenderState@RenderDevice@G3D@@QAE@ABV0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
