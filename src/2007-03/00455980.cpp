// roc 2007-03 00455980  unit: seg_00450000  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00455980
//
// 00455980  d9e8                 fld1 
// 00455982  56                   push esi
// 00455983  8bf1                 mov esi, ecx
// 00455985  dd5e30               fstp qword ptr [esi + 0x30]
// 00455988  33c9                 xor ecx, ecx
// 0045598a  b801000000           mov eax, 1
// 0045598f  ba08000000           mov edx, 8
// 00455994  894e08               mov dword ptr [esi + 8], ecx
// 00455997  894e0c               mov dword ptr [esi + 0xc], ecx
// 0045599a  894e18               mov dword ptr [esi + 0x18], ecx
// 0045599d  884e29               mov byte ptr [esi + 0x29], cl
// 004559a0  884e2b               mov byte ptr [esi + 0x2b], cl
// 004559a3  884e3c               mov byte ptr [esi + 0x3c], cl
// 004559a6  689c1f7900           push 0x791f9c
// 004559ab  8d4e40               lea ecx, [esi + 0x40]
// 004559ae  c70620030000         mov dword ptr [esi], 0x320
// 004559b4  c7460458020000       mov dword ptr [esi + 4], 0x258
// 004559bb  884610               mov byte ptr [esi + 0x10], al
// 004559be  895614               mov dword ptr [esi + 0x14], edx
// 004559c1  c7461c18000000       mov dword ptr [esi + 0x1c], 0x18
// 004559c8  895620               mov dword ptr [esi + 0x20], edx
// 004559cb  894624               mov dword ptr [esi + 0x24], eax
// 004559ce  884628               mov byte ptr [esi + 0x28], al
// 004559d1  88462a               mov byte ptr [esi + 0x2a], al
// 004559d4  c7463855000000       mov dword ptr [esi + 0x38], 0x55
// 004559db  88463d               mov byte ptr [esi + 0x3d], al
// 004559de  88463e               mov byte ptr [esi + 0x3e], al
// 004559e1  ff1578e77700         call dword ptr [0x77e778]
// 004559e7  8bc6                 mov eax, esi
// 004559e9  5e                   pop esi
// 004559ea  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ??0Settings@GWindow@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
