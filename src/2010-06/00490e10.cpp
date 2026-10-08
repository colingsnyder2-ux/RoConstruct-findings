// from server: 100% by auto
// roc 2010-06 00490e10  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 147 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00490e10
//
// 00490e10  8b542404             mov edx, dword ptr [esp + 4]
// 00490e14  8bc1                 mov eax, ecx
// 00490e16  53                   push ebx
// 00490e17  55                   push ebp
// 00490e18  56                   push esi
// 00490e19  57                   push edi
// 00490e1a  b909000000           mov ecx, 9
// 00490e1f  8bf2                 mov esi, edx
// 00490e21  8bf8                 mov edi, eax
// 00490e23  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00490e25  d94224               fld dword ptr [edx + 0x24]
// 00490e28  d95824               fstp dword ptr [eax + 0x24]
// 00490e2b  d94228               fld dword ptr [edx + 0x28]
// 00490e2e  d95828               fstp dword ptr [eax + 0x28]
// 00490e31  d9422c               fld dword ptr [edx + 0x2c]
// 00490e34  d9582c               fstp dword ptr [eax + 0x2c]
// 00490e37  8d5a30               lea ebx, [edx + 0x30]
// 00490e3a  8d6830               lea ebp, [eax + 0x30]
// 00490e3d  8bf3                 mov esi, ebx
// 00490e3f  8bfd                 mov edi, ebp
// 00490e41  b909000000           mov ecx, 9
// 00490e46  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00490e48  d94324               fld dword ptr [ebx + 0x24]
// 00490e4b  d95d24               fstp dword ptr [ebp + 0x24]
// 00490e4e  d94328               fld dword ptr [ebx + 0x28]
// 00490e51  d95d28               fstp dword ptr [ebp + 0x28]
// 00490e54  d9432c               fld dword ptr [ebx + 0x2c]
// 00490e57  d95d2c               fstp dword ptr [ebp + 0x2c]
// 00490e5a  8d5a60               lea ebx, [edx + 0x60]
// 00490e5d  8d6860               lea ebp, [eax + 0x60]
// 00490e60  8bf3                 mov esi, ebx
// 00490e62  8bfd                 mov edi, ebp
// 00490e64  b909000000           mov ecx, 9
// 00490e69  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00490e6b  d94324               fld dword ptr [ebx + 0x24]
// 00490e6e  d95d24               fstp dword ptr [ebp + 0x24]
// 00490e71  d94328               fld dword ptr [ebx + 0x28]
// 00490e74  d95d28               fstp dword ptr [ebp + 0x28]
// 00490e77  d9432c               fld dword ptr [ebx + 0x2c]
// 00490e7a  d95d2c               fstp dword ptr [ebp + 0x2c]
// 00490e7d  8db290000000         lea esi, [edx + 0x90]
// 00490e83  8db890000000         lea edi, [eax + 0x90]
// 00490e89  b910000000           mov ecx, 0x10
// 00490e8e  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00490e90  8a8ad0000000         mov cl, byte ptr [edx + 0xd0]
// 00490e96  5f                   pop edi
// 00490e97  5e                   pop esi
// 00490e98  5d                   pop ebp
// 00490e99  8888d0000000         mov byte ptr [eax + 0xd0], cl
// 00490e9f  5b                   pop ebx
// 00490ea0  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??4Matrices@RenderState@RenderDevice@G3D@@QAEAAV0123@ABV0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
