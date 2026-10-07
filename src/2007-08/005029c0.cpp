// roc 2007-08 005029c0  unit: G3D::Log  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005029c0
//
// 005029c0  56                   push esi
// 005029c1  8bf1                 mov esi, ecx
// 005029c3  8b4644               mov eax, dword ptr [esi + 0x44]
// 005029c6  8d4801               lea ecx, [eax + 1]
// 005029c9  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 005029cc  7e0f                 jle 0x5029dd
// 005029ce  8b5634               mov edx, dword ptr [esi + 0x34]
// 005029d1  6a01                 push 1
// 005029d3  03d0                 add edx, eax
// 005029d5  52                   push edx
// 005029d6  8bce                 mov ecx, esi
// 005029d8  e8e3920000           call 0x50bcc0
// 005029dd  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 005029e0  8b4640               mov eax, dword ptr [esi + 0x40]
// 005029e3  8a0401               mov al, byte ptr [ecx + eax]
// 005029e6  83c101               add ecx, 1
// 005029e9  894e44               mov dword ptr [esi + 0x44], ecx
// 005029ec  5e                   pop esi
// 005029ed  c3                   ret 
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ?readUInt8@BinaryInput@G3D@@QAEEXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
