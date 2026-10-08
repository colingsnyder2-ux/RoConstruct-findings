// roc 2009-12 004ca570  unit: G3D::VARArea  size: 147 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004ca570
//
// 004ca570  8b542404             mov edx, dword ptr [esp + 4]
// 004ca574  8bc1                 mov eax, ecx
// 004ca576  53                   push ebx
// 004ca577  55                   push ebp
// 004ca578  56                   push esi
// 004ca579  57                   push edi
// 004ca57a  b909000000           mov ecx, 9
// 004ca57f  8bf2                 mov esi, edx
// 004ca581  8bf8                 mov edi, eax
// 004ca583  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004ca585  d94224               fld dword ptr [edx + 0x24]
// 004ca588  d95824               fstp dword ptr [eax + 0x24]
// 004ca58b  d94228               fld dword ptr [edx + 0x28]
// 004ca58e  d95828               fstp dword ptr [eax + 0x28]
// 004ca591  d9422c               fld dword ptr [edx + 0x2c]
// 004ca594  d9582c               fstp dword ptr [eax + 0x2c]
// 004ca597  8d5a30               lea ebx, [edx + 0x30]
// 004ca59a  8d6830               lea ebp, [eax + 0x30]
// 004ca59d  8bf3                 mov esi, ebx
// 004ca59f  8bfd                 mov edi, ebp
// 004ca5a1  b909000000           mov ecx, 9
// 004ca5a6  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004ca5a8  d94324               fld dword ptr [ebx + 0x24]
// 004ca5ab  d95d24               fstp dword ptr [ebp + 0x24]
// 004ca5ae  d94328               fld dword ptr [ebx + 0x28]
// 004ca5b1  d95d28               fstp dword ptr [ebp + 0x28]
// 004ca5b4  d9432c               fld dword ptr [ebx + 0x2c]
// 004ca5b7  d95d2c               fstp dword ptr [ebp + 0x2c]
// 004ca5ba  8d5a60               lea ebx, [edx + 0x60]
// 004ca5bd  8d6860               lea ebp, [eax + 0x60]
// 004ca5c0  8bf3                 mov esi, ebx
// 004ca5c2  8bfd                 mov edi, ebp
// 004ca5c4  b909000000           mov ecx, 9
// 004ca5c9  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004ca5cb  d94324               fld dword ptr [ebx + 0x24]
// 004ca5ce  d95d24               fstp dword ptr [ebp + 0x24]
// 004ca5d1  d94328               fld dword ptr [ebx + 0x28]
// 004ca5d4  d95d28               fstp dword ptr [ebp + 0x28]
// 004ca5d7  d9432c               fld dword ptr [ebx + 0x2c]
// 004ca5da  d95d2c               fstp dword ptr [ebp + 0x2c]
// 004ca5dd  8db290000000         lea esi, [edx + 0x90]
// 004ca5e3  8db890000000         lea edi, [eax + 0x90]
// 004ca5e9  b910000000           mov ecx, 0x10
// 004ca5ee  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004ca5f0  8a8ad0000000         mov cl, byte ptr [edx + 0xd0]
// 004ca5f6  5f                   pop edi
// 004ca5f7  5e                   pop esi
// 004ca5f8  5d                   pop ebp
// 004ca5f9  8888d0000000         mov byte ptr [eax + 0xd0], cl
// 004ca5ff  5b                   pop ebx
// 004ca600  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??4Matrices@RenderState@RenderDevice@G3D@@QAEAAV0123@ABV0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
