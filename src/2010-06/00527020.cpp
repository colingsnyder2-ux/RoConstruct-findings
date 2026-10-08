// from server: 100% by auto
// roc 2010-06 00527020  unit: RBX::ViewG3D  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00527020
//
// 00527020  56                   push esi
// 00527021  8bf1                 mov esi, ecx
// 00527023  8b4610               mov eax, dword ptr [esi + 0x10]
// 00527026  85c0                 test eax, eax
// 00527028  742c                 je 0x527056
// 0052702a  83c004               add eax, 4
// 0052702d  50                   push eax
// 0052702e  ff157ca39e00         call dword ptr [0x9ea37c]
// 00527034  85c0                 test eax, eax
// 00527036  7517                 jne 0x52704f
// 00527038  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0052703b  e8e0caf5ff           call 0x483b20
// 00527040  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00527043  85c9                 test ecx, ecx
// 00527045  7408                 je 0x52704f
// 00527047  8b01                 mov eax, dword ptr [ecx]
// 00527049  8b10                 mov edx, dword ptr [eax]
// 0052704b  6a01                 push 1
// 0052704d  ffd2                 call edx
// 0052704f  c7461000000000       mov dword ptr [esi + 0x10], 0
// 00527056  5e                   pop esi
// 00527057  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??1TextureUnit@RenderState@RenderDevice@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
