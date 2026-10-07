// roc 2010-06 005501c0  unit: G3D::Log  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005501c0
//
// 005501c0  56                   push esi
// 005501c1  8bf1                 mov esi, ecx
// 005501c3  8b4644               mov eax, dword ptr [esi + 0x44]
// 005501c6  8d4801               lea ecx, [eax + 1]
// 005501c9  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 005501cc  7e0f                 jle 0x5501dd
// 005501ce  8b5634               mov edx, dword ptr [esi + 0x34]
// 005501d1  6a01                 push 1
// 005501d3  03d0                 add edx, eax
// 005501d5  52                   push edx
// 005501d6  8bce                 mov ecx, esi
// 005501d8  e873860000           call 0x558850
// 005501dd  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 005501e0  8b4640               mov eax, dword ptr [esi + 0x40]
// 005501e3  8a0401               mov al, byte ptr [ecx + eax]
// 005501e6  41                   inc ecx
// 005501e7  894e44               mov dword ptr [esi + 0x44], ecx
// 005501ea  5e                   pop esi
// 005501eb  c3                   ret 
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ?readUInt8@BinaryInput@G3D@@QAEEXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
