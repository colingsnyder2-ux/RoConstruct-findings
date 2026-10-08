// roc 2007-03 00476350  unit: seg_00470000  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00476350
//
// 00476350  53                   push ebx
// 00476351  55                   push ebp
// 00476352  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00476356  d94500               fld dword ptr [ebp]
// 00476359  8bd9                 mov ebx, ecx
// 0047635b  d91b                 fstp dword ptr [ebx]
// 0047635d  56                   push esi
// 0047635e  d94504               fld dword ptr [ebp + 4]
// 00476361  8d4b10               lea ecx, [ebx + 0x10]
// 00476364  d95b04               fstp dword ptr [ebx + 4]
// 00476367  57                   push edi
// 00476368  d94508               fld dword ptr [ebp + 8]
// 0047636b  d95b08               fstp dword ptr [ebx + 8]
// 0047636e  d9450c               fld dword ptr [ebp + 0xc]
// 00476371  d95b0c               fstp dword ptr [ebx + 0xc]
// 00476374  c70100000000         mov dword ptr [ecx], 0
// 0047637a  8b4510               mov eax, dword ptr [ebp + 0x10]
// 0047637d  50                   push eax
// 0047637e  e80dedffff           call 0x475090
// 00476383  8d7514               lea esi, [ebp + 0x14]
// 00476386  8d7b14               lea edi, [ebx + 0x14]
// 00476389  b910000000           mov ecx, 0x10
// 0047638e  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00476390  8b4d54               mov ecx, dword ptr [ebp + 0x54]
// 00476393  5f                   pop edi
// 00476394  894b54               mov dword ptr [ebx + 0x54], ecx
// 00476397  5e                   pop esi
// 00476398  d94558               fld dword ptr [ebp + 0x58]
// 0047639b  5d                   pop ebp
// 0047639c  d95b58               fstp dword ptr [ebx + 0x58]
// 0047639f  8bc3                 mov eax, ebx
// 004763a1  5b                   pop ebx
// 004763a2  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ??0TextureUnit@RenderState@RenderDevice@G3D@@QAE@ABV0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
