// roc 2008-06 0050aa80  unit: G3D::Log  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0050aa80
//
// 0050aa80  56                   push esi
// 0050aa81  8bf1                 mov esi, ecx
// 0050aa83  8b4644               mov eax, dword ptr [esi + 0x44]
// 0050aa86  8d4801               lea ecx, [eax + 1]
// 0050aa89  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 0050aa8c  7e0f                 jle 0x50aa9d
// 0050aa8e  8b5634               mov edx, dword ptr [esi + 0x34]
// 0050aa91  6a01                 push 1
// 0050aa93  03d0                 add edx, eax
// 0050aa95  52                   push edx
// 0050aa96  8bce                 mov ecx, esi
// 0050aa98  e833ad0000           call 0x5157d0
// 0050aa9d  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 0050aaa0  8b4640               mov eax, dword ptr [esi + 0x40]
// 0050aaa3  8a0401               mov al, byte ptr [ecx + eax]
// 0050aaa6  41                   inc ecx
// 0050aaa7  894e44               mov dword ptr [esi + 0x44], ecx
// 0050aaaa  5e                   pop esi
// 0050aaab  c3                   ret 
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ?readUInt8@BinaryInput@G3D@@QAEEXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
