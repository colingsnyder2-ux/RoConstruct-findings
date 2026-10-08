// from server: 100% by auto
// roc 2010-06 00493c20  unit: seg_00490000  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00493c20
//
// 00493c20  53                   push ebx
// 00493c21  55                   push ebp
// 00493c22  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00493c26  d94500               fld dword ptr [ebp]
// 00493c29  8bd9                 mov ebx, ecx
// 00493c2b  d91b                 fstp dword ptr [ebx]
// 00493c2d  56                   push esi
// 00493c2e  d94504               fld dword ptr [ebp + 4]
// 00493c31  8d4b10               lea ecx, [ebx + 0x10]
// 00493c34  d95b04               fstp dword ptr [ebx + 4]
// 00493c37  57                   push edi
// 00493c38  d94508               fld dword ptr [ebp + 8]
// 00493c3b  d95b08               fstp dword ptr [ebx + 8]
// 00493c3e  d9450c               fld dword ptr [ebp + 0xc]
// 00493c41  d95b0c               fstp dword ptr [ebx + 0xc]
// 00493c44  c70100000000         mov dword ptr [ecx], 0
// 00493c4a  8b4510               mov eax, dword ptr [ebp + 0x10]
// 00493c4d  50                   push eax
// 00493c4e  e8cd30ffff           call 0x486d20
// 00493c53  8d7514               lea esi, [ebp + 0x14]
// 00493c56  8d7b14               lea edi, [ebx + 0x14]
// 00493c59  b910000000           mov ecx, 0x10
// 00493c5e  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00493c60  8b4d54               mov ecx, dword ptr [ebp + 0x54]
// 00493c63  5f                   pop edi
// 00493c64  894b54               mov dword ptr [ebx + 0x54], ecx
// 00493c67  5e                   pop esi
// 00493c68  d94558               fld dword ptr [ebp + 0x58]
// 00493c6b  5d                   pop ebp
// 00493c6c  d95b58               fstp dword ptr [ebx + 0x58]
// 00493c6f  8bc3                 mov eax, ebx
// 00493c71  5b                   pop ebx
// 00493c72  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??0TextureUnit@RenderState@RenderDevice@G3D@@QAE@ABV0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
