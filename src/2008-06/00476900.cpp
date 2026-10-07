// roc 2008-06 00476900  unit: G3D::VARArea  size: 147 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00476900
//
// 00476900  8b542404             mov edx, dword ptr [esp + 4]
// 00476904  8bc1                 mov eax, ecx
// 00476906  53                   push ebx
// 00476907  55                   push ebp
// 00476908  56                   push esi
// 00476909  57                   push edi
// 0047690a  b909000000           mov ecx, 9
// 0047690f  8bf2                 mov esi, edx
// 00476911  8bf8                 mov edi, eax
// 00476913  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00476915  d94224               fld dword ptr [edx + 0x24]
// 00476918  d95824               fstp dword ptr [eax + 0x24]
// 0047691b  d94228               fld dword ptr [edx + 0x28]
// 0047691e  d95828               fstp dword ptr [eax + 0x28]
// 00476921  d9422c               fld dword ptr [edx + 0x2c]
// 00476924  d9582c               fstp dword ptr [eax + 0x2c]
// 00476927  8d5a30               lea ebx, [edx + 0x30]
// 0047692a  8d6830               lea ebp, [eax + 0x30]
// 0047692d  8bf3                 mov esi, ebx
// 0047692f  8bfd                 mov edi, ebp
// 00476931  b909000000           mov ecx, 9
// 00476936  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00476938  d94324               fld dword ptr [ebx + 0x24]
// 0047693b  d95d24               fstp dword ptr [ebp + 0x24]
// 0047693e  d94328               fld dword ptr [ebx + 0x28]
// 00476941  d95d28               fstp dword ptr [ebp + 0x28]
// 00476944  d9432c               fld dword ptr [ebx + 0x2c]
// 00476947  d95d2c               fstp dword ptr [ebp + 0x2c]
// 0047694a  8d5a60               lea ebx, [edx + 0x60]
// 0047694d  8d6860               lea ebp, [eax + 0x60]
// 00476950  8bf3                 mov esi, ebx
// 00476952  8bfd                 mov edi, ebp
// 00476954  b909000000           mov ecx, 9
// 00476959  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0047695b  d94324               fld dword ptr [ebx + 0x24]
// 0047695e  d95d24               fstp dword ptr [ebp + 0x24]
// 00476961  d94328               fld dword ptr [ebx + 0x28]
// 00476964  d95d28               fstp dword ptr [ebp + 0x28]
// 00476967  d9432c               fld dword ptr [ebx + 0x2c]
// 0047696a  d95d2c               fstp dword ptr [ebp + 0x2c]
// 0047696d  8db290000000         lea esi, [edx + 0x90]
// 00476973  8db890000000         lea edi, [eax + 0x90]
// 00476979  b910000000           mov ecx, 0x10
// 0047697e  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00476980  8a8ad0000000         mov cl, byte ptr [edx + 0xd0]
// 00476986  5f                   pop edi
// 00476987  5e                   pop esi
// 00476988  5d                   pop ebp
// 00476989  8888d0000000         mov byte ptr [eax + 0xd0], cl
// 0047698f  5b                   pop ebx
// 00476990  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??4Matrices@RenderState@RenderDevice@G3D@@QAEAAV0123@ABV0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
