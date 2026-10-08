// from server: 100% by auto
// roc 2007-08 004761f0  unit: CInstanceRecord::CNameItem  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004761f0
//
// 004761f0  53                   push ebx
// 004761f1  55                   push ebp
// 004761f2  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 004761f6  d94500               fld dword ptr [ebp]
// 004761f9  8bd9                 mov ebx, ecx
// 004761fb  d91b                 fstp dword ptr [ebx]
// 004761fd  56                   push esi
// 004761fe  d94504               fld dword ptr [ebp + 4]
// 00476201  8d4b10               lea ecx, [ebx + 0x10]
// 00476204  d95b04               fstp dword ptr [ebx + 4]
// 00476207  57                   push edi
// 00476208  d94508               fld dword ptr [ebp + 8]
// 0047620b  d95b08               fstp dword ptr [ebx + 8]
// 0047620e  d9450c               fld dword ptr [ebp + 0xc]
// 00476211  d95b0c               fstp dword ptr [ebx + 0xc]
// 00476214  c70100000000         mov dword ptr [ecx], 0
// 0047621a  8b4510               mov eax, dword ptr [ebp + 0x10]
// 0047621d  50                   push eax
// 0047621e  e84dedffff           call 0x474f70
// 00476223  8d7514               lea esi, [ebp + 0x14]
// 00476226  8d7b14               lea edi, [ebx + 0x14]
// 00476229  b910000000           mov ecx, 0x10
// 0047622e  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00476230  8b4d54               mov ecx, dword ptr [ebp + 0x54]
// 00476233  5f                   pop edi
// 00476234  894b54               mov dword ptr [ebx + 0x54], ecx
// 00476237  5e                   pop esi
// 00476238  d94558               fld dword ptr [ebp + 0x58]
// 0047623b  5d                   pop ebp
// 0047623c  d95b58               fstp dword ptr [ebx + 0x58]
// 0047623f  8bc3                 mov eax, ebx
// 00476241  5b                   pop ebx
// 00476242  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??0TextureUnit@RenderState@RenderDevice@G3D@@QAE@ABV0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
