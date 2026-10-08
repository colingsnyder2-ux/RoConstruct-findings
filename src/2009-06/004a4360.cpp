// roc 2009-06 004a4360  unit: G3D::PBVTextureFormat::?$Table  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a4360
//
// 004a4360  53                   push ebx
// 004a4361  56                   push esi
// 004a4362  8bf1                 mov esi, ecx
// 004a4364  33db                 xor ebx, ebx
// 004a4366  385e1d               cmp byte ptr [esi + 0x1d], bl
// 004a4369  740c                 je 0x4a4377
// 004a436b  8b0e                 mov ecx, dword ptr [esi]
// 004a436d  8b01                 mov eax, dword ptr [ecx]
// 004a436f  8b5040               mov edx, dword ptr [eax + 0x40]
// 004a4372  ffd2                 call edx
// 004a4374  885e1d               mov byte ptr [esi + 0x1d], bl
// 004a4377  ff4618               inc dword ptr [esi + 0x18]
// 004a437a  8d8620010000         lea eax, [esi + 0x120]
// 004a4380  50                   push eax
// 004a4381  8d8e80080000         lea ecx, [esi + 0x880]
// 004a4387  895e6c               mov dword ptr [esi + 0x6c], ebx
// 004a438a  895e70               mov dword ptr [esi + 0x70], ebx
// 004a438d  895e74               mov dword ptr [esi + 0x74], ebx
// 004a4390  895e78               mov dword ptr [esi + 0x78], ebx
// 004a4393  895e7c               mov dword ptr [esi + 0x7c], ebx
// 004a4396  895e3c               mov dword ptr [esi + 0x3c], ebx
// 004a4399  e802efffff           call 0x4a32a0
// 004a439e  ff467c               inc dword ptr [esi + 0x7c]
// 004a43a1  889ebd030000         mov byte ptr [esi + 0x3bd], bl
// 004a43a7  889e78080000         mov byte ptr [esi + 0x878], bl
// 004a43ad  c786c4040000ffffffff mov dword ptr [esi + 0x4c4], 0xffffffff
// 004a43b7  5e                   pop esi
// 004a43b8  5b                   pop ebx
// 004a43b9  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?beginFrame@RenderDevice@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
