// roc 2007-03 00473520  unit: seg_00470000  size: 147 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00473520
//
// 00473520  8b542404             mov edx, dword ptr [esp + 4]
// 00473524  8bc1                 mov eax, ecx
// 00473526  53                   push ebx
// 00473527  55                   push ebp
// 00473528  56                   push esi
// 00473529  57                   push edi
// 0047352a  b909000000           mov ecx, 9
// 0047352f  8bf2                 mov esi, edx
// 00473531  8bf8                 mov edi, eax
// 00473533  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00473535  d94224               fld dword ptr [edx + 0x24]
// 00473538  d95824               fstp dword ptr [eax + 0x24]
// 0047353b  d94228               fld dword ptr [edx + 0x28]
// 0047353e  d95828               fstp dword ptr [eax + 0x28]
// 00473541  d9422c               fld dword ptr [edx + 0x2c]
// 00473544  d9582c               fstp dword ptr [eax + 0x2c]
// 00473547  8d5a30               lea ebx, [edx + 0x30]
// 0047354a  8d6830               lea ebp, [eax + 0x30]
// 0047354d  8bf3                 mov esi, ebx
// 0047354f  8bfd                 mov edi, ebp
// 00473551  b909000000           mov ecx, 9
// 00473556  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00473558  d94324               fld dword ptr [ebx + 0x24]
// 0047355b  d95d24               fstp dword ptr [ebp + 0x24]
// 0047355e  d94328               fld dword ptr [ebx + 0x28]
// 00473561  d95d28               fstp dword ptr [ebp + 0x28]
// 00473564  d9432c               fld dword ptr [ebx + 0x2c]
// 00473567  d95d2c               fstp dword ptr [ebp + 0x2c]
// 0047356a  8d5a60               lea ebx, [edx + 0x60]
// 0047356d  8d6860               lea ebp, [eax + 0x60]
// 00473570  8bf3                 mov esi, ebx
// 00473572  8bfd                 mov edi, ebp
// 00473574  b909000000           mov ecx, 9
// 00473579  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0047357b  d94324               fld dword ptr [ebx + 0x24]
// 0047357e  d95d24               fstp dword ptr [ebp + 0x24]
// 00473581  d94328               fld dword ptr [ebx + 0x28]
// 00473584  d95d28               fstp dword ptr [ebp + 0x28]
// 00473587  d9432c               fld dword ptr [ebx + 0x2c]
// 0047358a  d95d2c               fstp dword ptr [ebp + 0x2c]
// 0047358d  8db290000000         lea esi, [edx + 0x90]
// 00473593  8db890000000         lea edi, [eax + 0x90]
// 00473599  b910000000           mov ecx, 0x10
// 0047359e  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004735a0  8a8ad0000000         mov cl, byte ptr [edx + 0xd0]
// 004735a6  5f                   pop edi
// 004735a7  5e                   pop esi
// 004735a8  5d                   pop ebp
// 004735a9  8888d0000000         mov byte ptr [eax + 0xd0], cl
// 004735af  5b                   pop ebx
// 004735b0  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ??4Matrices@RenderState@RenderDevice@G3D@@QAEAAV0123@ABV0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
