// roc 2009-06 0056d200  unit: G3D::Log  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0056d200
//
// 0056d200  56                   push esi
// 0056d201  8bf1                 mov esi, ecx
// 0056d203  8b4644               mov eax, dword ptr [esi + 0x44]
// 0056d206  8d4801               lea ecx, [eax + 1]
// 0056d209  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 0056d20c  7e0f                 jle 0x56d21d
// 0056d20e  8b5634               mov edx, dword ptr [esi + 0x34]
// 0056d211  6a01                 push 1
// 0056d213  03d0                 add edx, eax
// 0056d215  52                   push edx
// 0056d216  8bce                 mov ecx, esi
// 0056d218  e833750000           call 0x574750
// 0056d21d  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 0056d220  8b4640               mov eax, dword ptr [esi + 0x40]
// 0056d223  8a0401               mov al, byte ptr [ecx + eax]
// 0056d226  41                   inc ecx
// 0056d227  894e44               mov dword ptr [esi + 0x44], ecx
// 0056d22a  5e                   pop esi
// 0056d22b  c3                   ret 
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ?readUInt8@BinaryInput@G3D@@QAEEXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
