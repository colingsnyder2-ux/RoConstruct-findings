// roc 2007-03 004f1610  unit: seg_004f0000  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f1610
//
// 004f1610  53                   push ebx
// 004f1611  8b5c2408             mov ebx, dword ptr [esp + 8]
// 004f1615  8b4304               mov eax, dword ptr [ebx + 4]
// 004f1618  55                   push ebp
// 004f1619  57                   push edi
// 004f161a  6a01                 push 1
// 004f161c  50                   push eax
// 004f161d  8bf9                 mov edi, ecx
// 004f161f  e8dca1ffff           call 0x4eb800
// 004f1624  33ed                 xor ebp, ebp
// 004f1626  396f04               cmp dword ptr [edi + 4], ebp
// 004f1629  0f8e7f000000         jle 0x4f16ae
// 004f162f  56                   push esi
// 004f1630  33f6                 xor esi, esi
// 004f1632  8b03                 mov eax, dword ptr [ebx]
// 004f1634  8b0f                 mov ecx, dword ptr [edi]
// 004f1636  d90430               fld dword ptr [eax + esi]
// 004f1639  d91c31               fstp dword ptr [ecx + esi]
// 004f163c  03c6                 add eax, esi
// 004f163e  d94004               fld dword ptr [eax + 4]
// 004f1641  03ce                 add ecx, esi
// 004f1643  d95904               fstp dword ptr [ecx + 4]
// 004f1646  83c501               add ebp, 1
// 004f1649  d94008               fld dword ptr [eax + 8]
// 004f164c  83c650               add esi, 0x50
// 004f164f  d95908               fstp dword ptr [ecx + 8]
// 004f1652  d9400c               fld dword ptr [eax + 0xc]
// 004f1655  d9590c               fstp dword ptr [ecx + 0xc]
// 004f1658  d94010               fld dword ptr [eax + 0x10]
// 004f165b  d95910               fstp dword ptr [ecx + 0x10]
// 004f165e  d94014               fld dword ptr [eax + 0x14]
// 004f1661  d95914               fstp dword ptr [ecx + 0x14]
// 004f1664  d94018               fld dword ptr [eax + 0x18]
// 004f1667  d95918               fstp dword ptr [ecx + 0x18]
// 004f166a  dd4020               fld qword ptr [eax + 0x20]
// 004f166d  dd5920               fstp qword ptr [ecx + 0x20]
// 004f1670  dd4028               fld qword ptr [eax + 0x28]
// 004f1673  dd5928               fstp qword ptr [ecx + 0x28]
// 004f1676  dd4030               fld qword ptr [eax + 0x30]
// 004f1679  dd5930               fstp qword ptr [ecx + 0x30]
// 004f167c  dd4038               fld qword ptr [eax + 0x38]
// 004f167f  dd5938               fstp qword ptr [ecx + 0x38]
// 004f1682  d94040               fld dword ptr [eax + 0x40]
// 004f1685  d95940               fstp dword ptr [ecx + 0x40]
// 004f1688  d94044               fld dword ptr [eax + 0x44]
// 004f168b  d95944               fstp dword ptr [ecx + 0x44]
// 004f168e  d94048               fld dword ptr [eax + 0x48]
// 004f1691  d95948               fstp dword ptr [ecx + 0x48]
// 004f1694  0fb6504c             movzx edx, byte ptr [eax + 0x4c]
// 004f1698  88514c               mov byte ptr [ecx + 0x4c], dl
// 004f169b  0fb6504d             movzx edx, byte ptr [eax + 0x4d]
// 004f169f  88514d               mov byte ptr [ecx + 0x4d], dl
// 004f16a2  8a404e               mov al, byte ptr [eax + 0x4e]
// 004f16a5  88414e               mov byte ptr [ecx + 0x4e], al
// 004f16a8  3b6f04               cmp ebp, dword ptr [edi + 4]
// 004f16ab  7c85                 jl 0x4f1632
// 004f16ad  5e                   pop esi
// 004f16ae  8bc7                 mov eax, edi
// 004f16b0  5f                   pop edi
// 004f16b1  5d                   pop ebp
// 004f16b2  5b                   pop ebx
// 004f16b3  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\ToneMap.cpp (function ??4?$Array@VGLight@G3D@@@G3D@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/ToneMap.cpp
