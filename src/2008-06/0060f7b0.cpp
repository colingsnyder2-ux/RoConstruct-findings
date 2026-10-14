// roc 2008-06 0060f7b0  unit: RBX::BlockBlockContact  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060f7b0
//
// 0060f7b0  d9410c               fld dword ptr [ecx + 0xc]
// 0060f7b3  56                   push esi
// 0060f7b4  d801                 fadd dword ptr [ecx]
// 0060f7b6  8b742408             mov esi, dword ptr [esp + 8]
// 0060f7ba  d94110               fld dword ptr [ecx + 0x10]
// 0060f7bd  57                   push edi
// 0060f7be  d84104               fadd dword ptr [ecx + 4]
// 0060f7c1  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0060f7c5  d94114               fld dword ptr [ecx + 0x14]
// 0060f7c8  b856555555           mov eax, 0x55555556
// 0060f7cd  d84108               fadd dword ptr [ecx + 8]
// 0060f7d0  f7ef                 imul edi
// 0060f7d2  d905ac9b8100         fld dword ptr [0x819bac]
// 0060f7d8  dccb                 fmul st(3), st(0)
// 0060f7da  d9cb                 fxch st(3)
// 0060f7dc  d91e                 fstp dword ptr [esi]
// 0060f7de  d9c9                 fxch st(1)
// 0060f7e0  8bc2                 mov eax, edx
// 0060f7e2  d8ca                 fmul st(2)
// 0060f7e4  c1e81f               shr eax, 0x1f
// 0060f7e7  03c2                 add eax, edx
// 0060f7e9  8d0440               lea eax, [eax + eax*2]
// 0060f7ec  d95e04               fstp dword ptr [esi + 4]
// 0060f7ef  8bd0                 mov edx, eax
// 0060f7f1  dec9                 fmulp st(1)
// 0060f7f3  8bc7                 mov eax, edi
// 0060f7f5  2bc2                 sub eax, edx
// 0060f7f7  83ff03               cmp edi, 3
// 0060f7fa  d95e08               fstp dword ptr [esi + 8]
// 0060f7fd  7d0e                 jge 0x60f80d
// 0060f7ff  d944810c             fld dword ptr [ecx + eax*4 + 0xc]
// 0060f803  5f                   pop edi
// 0060f804  d91c86               fstp dword ptr [esi + eax*4]
// 0060f807  8bc6                 mov eax, esi
// 0060f809  5e                   pop esi
// 0060f80a  c20800               ret 8
// 0060f80d  d90481               fld dword ptr [ecx + eax*4]
// 0060f810  5f                   pop edi
// 0060f811  d91c86               fstp dword ptr [esi + eax*4]
// 0060f814  8bc6                 mov eax, esi
// 0060f816  5e                   pop esi
// 0060f817  c20800               ret 8
// library rbxgs-dll/util\Extents.cpp (function ?faceCenter@Extents@RBX@@QBE?AVVector3@G3D@@W4NormalId@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll util/Extents.cpp
