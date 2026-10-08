// from server: 100% by auto
// roc 2009-06 0049df70  unit: G3D::VARArea  size: 147 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049df70
//
// 0049df70  8b542404             mov edx, dword ptr [esp + 4]
// 0049df74  8bc1                 mov eax, ecx
// 0049df76  53                   push ebx
// 0049df77  55                   push ebp
// 0049df78  56                   push esi
// 0049df79  57                   push edi
// 0049df7a  b909000000           mov ecx, 9
// 0049df7f  8bf2                 mov esi, edx
// 0049df81  8bf8                 mov edi, eax
// 0049df83  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0049df85  d94224               fld dword ptr [edx + 0x24]
// 0049df88  d95824               fstp dword ptr [eax + 0x24]
// 0049df8b  d94228               fld dword ptr [edx + 0x28]
// 0049df8e  d95828               fstp dword ptr [eax + 0x28]
// 0049df91  d9422c               fld dword ptr [edx + 0x2c]
// 0049df94  d9582c               fstp dword ptr [eax + 0x2c]
// 0049df97  8d5a30               lea ebx, [edx + 0x30]
// 0049df9a  8d6830               lea ebp, [eax + 0x30]
// 0049df9d  8bf3                 mov esi, ebx
// 0049df9f  8bfd                 mov edi, ebp
// 0049dfa1  b909000000           mov ecx, 9
// 0049dfa6  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0049dfa8  d94324               fld dword ptr [ebx + 0x24]
// 0049dfab  d95d24               fstp dword ptr [ebp + 0x24]
// 0049dfae  d94328               fld dword ptr [ebx + 0x28]
// 0049dfb1  d95d28               fstp dword ptr [ebp + 0x28]
// 0049dfb4  d9432c               fld dword ptr [ebx + 0x2c]
// 0049dfb7  d95d2c               fstp dword ptr [ebp + 0x2c]
// 0049dfba  8d5a60               lea ebx, [edx + 0x60]
// 0049dfbd  8d6860               lea ebp, [eax + 0x60]
// 0049dfc0  8bf3                 mov esi, ebx
// 0049dfc2  8bfd                 mov edi, ebp
// 0049dfc4  b909000000           mov ecx, 9
// 0049dfc9  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0049dfcb  d94324               fld dword ptr [ebx + 0x24]
// 0049dfce  d95d24               fstp dword ptr [ebp + 0x24]
// 0049dfd1  d94328               fld dword ptr [ebx + 0x28]
// 0049dfd4  d95d28               fstp dword ptr [ebp + 0x28]
// 0049dfd7  d9432c               fld dword ptr [ebx + 0x2c]
// 0049dfda  d95d2c               fstp dword ptr [ebp + 0x2c]
// 0049dfdd  8db290000000         lea esi, [edx + 0x90]
// 0049dfe3  8db890000000         lea edi, [eax + 0x90]
// 0049dfe9  b910000000           mov ecx, 0x10
// 0049dfee  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0049dff0  8a8ad0000000         mov cl, byte ptr [edx + 0xd0]
// 0049dff6  5f                   pop edi
// 0049dff7  5e                   pop esi
// 0049dff8  5d                   pop ebp
// 0049dff9  8888d0000000         mov byte ptr [eax + 0xd0], cl
// 0049dfff  5b                   pop ebx
// 0049e000  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??4Matrices@RenderState@RenderDevice@G3D@@QAEAAV0123@ABV0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
