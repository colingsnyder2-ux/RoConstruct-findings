// roc 2008-06 004793f0  unit: CInstanceRecord::CNameItem  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004793f0
//
// 004793f0  53                   push ebx
// 004793f1  55                   push ebp
// 004793f2  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 004793f6  d94500               fld dword ptr [ebp]
// 004793f9  8bd9                 mov ebx, ecx
// 004793fb  d91b                 fstp dword ptr [ebx]
// 004793fd  56                   push esi
// 004793fe  d94504               fld dword ptr [ebp + 4]
// 00479401  8d4b10               lea ecx, [ebx + 0x10]
// 00479404  d95b04               fstp dword ptr [ebx + 4]
// 00479407  57                   push edi
// 00479408  d94508               fld dword ptr [ebp + 8]
// 0047940b  d95b08               fstp dword ptr [ebx + 8]
// 0047940e  d9450c               fld dword ptr [ebp + 0xc]
// 00479411  d95b0c               fstp dword ptr [ebx + 0xc]
// 00479414  c70100000000         mov dword ptr [ecx], 0
// 0047941a  8b4510               mov eax, dword ptr [ebp + 0x10]
// 0047941d  50                   push eax
// 0047941e  e87dfb1100           call 0x598fa0
// 00479423  8d7514               lea esi, [ebp + 0x14]
// 00479426  8d7b14               lea edi, [ebx + 0x14]
// 00479429  b910000000           mov ecx, 0x10
// 0047942e  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00479430  8b4d54               mov ecx, dword ptr [ebp + 0x54]
// 00479433  5f                   pop edi
// 00479434  894b54               mov dword ptr [ebx + 0x54], ecx
// 00479437  5e                   pop esi
// 00479438  d94558               fld dword ptr [ebp + 0x58]
// 0047943b  5d                   pop ebp
// 0047943c  d95b58               fstp dword ptr [ebx + 0x58]
// 0047943f  8bc3                 mov eax, ebx
// 00479441  5b                   pop ebx
// 00479442  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??0TextureUnit@RenderState@RenderDevice@G3D@@QAE@ABV0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
