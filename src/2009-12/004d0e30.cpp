// roc 2009-12 004d0e30  unit: G3D::PBVTextureFormat::?$Table  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d0e30
//
// 004d0e30  53                   push ebx
// 004d0e31  56                   push esi
// 004d0e32  8bf1                 mov esi, ecx
// 004d0e34  33db                 xor ebx, ebx
// 004d0e36  385e1d               cmp byte ptr [esi + 0x1d], bl
// 004d0e39  740c                 je 0x4d0e47
// 004d0e3b  8b0e                 mov ecx, dword ptr [esi]
// 004d0e3d  8b01                 mov eax, dword ptr [ecx]
// 004d0e3f  8b5040               mov edx, dword ptr [eax + 0x40]
// 004d0e42  ffd2                 call edx
// 004d0e44  885e1d               mov byte ptr [esi + 0x1d], bl
// 004d0e47  ff4618               inc dword ptr [esi + 0x18]
// 004d0e4a  8d8620010000         lea eax, [esi + 0x120]
// 004d0e50  50                   push eax
// 004d0e51  8d8e80080000         lea ecx, [esi + 0x880]
// 004d0e57  895e6c               mov dword ptr [esi + 0x6c], ebx
// 004d0e5a  895e70               mov dword ptr [esi + 0x70], ebx
// 004d0e5d  895e74               mov dword ptr [esi + 0x74], ebx
// 004d0e60  895e78               mov dword ptr [esi + 0x78], ebx
// 004d0e63  895e7c               mov dword ptr [esi + 0x7c], ebx
// 004d0e66  895e3c               mov dword ptr [esi + 0x3c], ebx
// 004d0e69  e802efffff           call 0x4cfd70
// 004d0e6e  ff467c               inc dword ptr [esi + 0x7c]
// 004d0e71  889ebd030000         mov byte ptr [esi + 0x3bd], bl
// 004d0e77  889e78080000         mov byte ptr [esi + 0x878], bl
// 004d0e7d  c786c4040000ffffffff mov dword ptr [esi + 0x4c4], 0xffffffff
// 004d0e87  5e                   pop esi
// 004d0e88  5b                   pop ebx
// 004d0e89  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?beginFrame@RenderDevice@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
