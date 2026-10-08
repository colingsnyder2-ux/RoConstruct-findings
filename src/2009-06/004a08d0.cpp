// from server: 100% by auto
// roc 2009-06 004a08d0  unit: G3D::VARArea  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a08d0
//
// 004a08d0  53                   push ebx
// 004a08d1  55                   push ebp
// 004a08d2  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 004a08d6  d94500               fld dword ptr [ebp]
// 004a08d9  8bd9                 mov ebx, ecx
// 004a08db  d91b                 fstp dword ptr [ebx]
// 004a08dd  56                   push esi
// 004a08de  d94504               fld dword ptr [ebp + 4]
// 004a08e1  8d4b10               lea ecx, [ebx + 0x10]
// 004a08e4  d95b04               fstp dword ptr [ebx + 4]
// 004a08e7  57                   push edi
// 004a08e8  d94508               fld dword ptr [ebp + 8]
// 004a08eb  d95b08               fstp dword ptr [ebx + 8]
// 004a08ee  d9450c               fld dword ptr [ebp + 0xc]
// 004a08f1  d95b0c               fstp dword ptr [ebx + 0xc]
// 004a08f4  c70100000000         mov dword ptr [ecx], 0
// 004a08fa  8b4510               mov eax, dword ptr [ebp + 0x10]
// 004a08fd  50                   push eax
// 004a08fe  e85defffff           call 0x49f860
// 004a0903  8d7514               lea esi, [ebp + 0x14]
// 004a0906  8d7b14               lea edi, [ebx + 0x14]
// 004a0909  b910000000           mov ecx, 0x10
// 004a090e  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004a0910  8b4d54               mov ecx, dword ptr [ebp + 0x54]
// 004a0913  5f                   pop edi
// 004a0914  894b54               mov dword ptr [ebx + 0x54], ecx
// 004a0917  5e                   pop esi
// 004a0918  d94558               fld dword ptr [ebp + 0x58]
// 004a091b  5d                   pop ebp
// 004a091c  d95b58               fstp dword ptr [ebx + 0x58]
// 004a091f  8bc3                 mov eax, ebx
// 004a0921  5b                   pop ebx
// 004a0922  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??0TextureUnit@RenderState@RenderDevice@G3D@@QAE@ABV0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
