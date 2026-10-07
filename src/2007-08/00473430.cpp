// roc 2007-08 00473430  unit: G3D::VARArea  size: 147 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00473430
//
// 00473430  8b542404             mov edx, dword ptr [esp + 4]
// 00473434  8bc1                 mov eax, ecx
// 00473436  53                   push ebx
// 00473437  55                   push ebp
// 00473438  56                   push esi
// 00473439  57                   push edi
// 0047343a  b909000000           mov ecx, 9
// 0047343f  8bf2                 mov esi, edx
// 00473441  8bf8                 mov edi, eax
// 00473443  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00473445  d94224               fld dword ptr [edx + 0x24]
// 00473448  d95824               fstp dword ptr [eax + 0x24]
// 0047344b  d94228               fld dword ptr [edx + 0x28]
// 0047344e  d95828               fstp dword ptr [eax + 0x28]
// 00473451  d9422c               fld dword ptr [edx + 0x2c]
// 00473454  d9582c               fstp dword ptr [eax + 0x2c]
// 00473457  8d5a30               lea ebx, [edx + 0x30]
// 0047345a  8d6830               lea ebp, [eax + 0x30]
// 0047345d  8bf3                 mov esi, ebx
// 0047345f  8bfd                 mov edi, ebp
// 00473461  b909000000           mov ecx, 9
// 00473466  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00473468  d94324               fld dword ptr [ebx + 0x24]
// 0047346b  d95d24               fstp dword ptr [ebp + 0x24]
// 0047346e  d94328               fld dword ptr [ebx + 0x28]
// 00473471  d95d28               fstp dword ptr [ebp + 0x28]
// 00473474  d9432c               fld dword ptr [ebx + 0x2c]
// 00473477  d95d2c               fstp dword ptr [ebp + 0x2c]
// 0047347a  8d5a60               lea ebx, [edx + 0x60]
// 0047347d  8d6860               lea ebp, [eax + 0x60]
// 00473480  8bf3                 mov esi, ebx
// 00473482  8bfd                 mov edi, ebp
// 00473484  b909000000           mov ecx, 9
// 00473489  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0047348b  d94324               fld dword ptr [ebx + 0x24]
// 0047348e  d95d24               fstp dword ptr [ebp + 0x24]
// 00473491  d94328               fld dword ptr [ebx + 0x28]
// 00473494  d95d28               fstp dword ptr [ebp + 0x28]
// 00473497  d9432c               fld dword ptr [ebx + 0x2c]
// 0047349a  d95d2c               fstp dword ptr [ebp + 0x2c]
// 0047349d  8db290000000         lea esi, [edx + 0x90]
// 004734a3  8db890000000         lea edi, [eax + 0x90]
// 004734a9  b910000000           mov ecx, 0x10
// 004734ae  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004734b0  8a8ad0000000         mov cl, byte ptr [edx + 0xd0]
// 004734b6  5f                   pop edi
// 004734b7  5e                   pop esi
// 004734b8  5d                   pop ebp
// 004734b9  8888d0000000         mov byte ptr [eax + 0xd0], cl
// 004734bf  5b                   pop ebx
// 004734c0  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??4Matrices@RenderState@RenderDevice@G3D@@QAEAAV0123@ABV0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
