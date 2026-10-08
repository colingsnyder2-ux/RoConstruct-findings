// roc 2009-12 004cd0b0  unit: G3D::VARArea  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004cd0b0
//
// 004cd0b0  53                   push ebx
// 004cd0b1  55                   push ebp
// 004cd0b2  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 004cd0b6  d94500               fld dword ptr [ebp]
// 004cd0b9  8bd9                 mov ebx, ecx
// 004cd0bb  d91b                 fstp dword ptr [ebx]
// 004cd0bd  56                   push esi
// 004cd0be  d94504               fld dword ptr [ebp + 4]
// 004cd0c1  8d4b10               lea ecx, [ebx + 0x10]
// 004cd0c4  d95b04               fstp dword ptr [ebx + 4]
// 004cd0c7  57                   push edi
// 004cd0c8  d94508               fld dword ptr [ebp + 8]
// 004cd0cb  d95b08               fstp dword ptr [ebx + 8]
// 004cd0ce  d9450c               fld dword ptr [ebp + 0xc]
// 004cd0d1  d95b0c               fstp dword ptr [ebx + 0xc]
// 004cd0d4  c70100000000         mov dword ptr [ecx], 0
// 004cd0da  8b4510               mov eax, dword ptr [ebp + 0x10]
// 004cd0dd  50                   push eax
// 004cd0de  e88deaf7ff           call 0x44bb70
// 004cd0e3  8d7514               lea esi, [ebp + 0x14]
// 004cd0e6  8d7b14               lea edi, [ebx + 0x14]
// 004cd0e9  b910000000           mov ecx, 0x10
// 004cd0ee  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004cd0f0  8b4d54               mov ecx, dword ptr [ebp + 0x54]
// 004cd0f3  5f                   pop edi
// 004cd0f4  894b54               mov dword ptr [ebx + 0x54], ecx
// 004cd0f7  5e                   pop esi
// 004cd0f8  d94558               fld dword ptr [ebp + 0x58]
// 004cd0fb  5d                   pop ebp
// 004cd0fc  d95b58               fstp dword ptr [ebx + 0x58]
// 004cd0ff  8bc3                 mov eax, ebx
// 004cd101  5b                   pop ebx
// 004cd102  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??0TextureUnit@RenderState@RenderDevice@G3D@@QAE@ABV0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
