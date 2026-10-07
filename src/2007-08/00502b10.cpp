// roc 2007-08 00502b10  unit: G3D::Log  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00502b10
//
// 00502b10  837e1800             cmp dword ptr [esi + 0x18], 0
// 00502b14  7528                 jne 0x502b3e
// 00502b16  8b4604               mov eax, dword ptr [esi + 4]
// 00502b19  8b08                 mov ecx, dword ptr [eax]
// 00502b1b  57                   push edi
// 00502b1c  6a2c                 push 0x2c
// 00502b1e  6a00                 push 0
// 00502b20  56                   push esi
// 00502b21  ffd1                 call ecx
// 00502b23  8b5604               mov edx, dword ptr [esi + 4]
// 00502b26  8bf8                 mov edi, eax
// 00502b28  6800100000           push 0x1000
// 00502b2d  897e18               mov dword ptr [esi + 0x18], edi
// 00502b30  8b02                 mov eax, dword ptr [edx]
// 00502b32  6a00                 push 0
// 00502b34  56                   push esi
// 00502b35  ffd0                 call eax
// 00502b37  83c418               add esp, 0x18
// 00502b3a  894728               mov dword ptr [edi + 0x28], eax
// 00502b3d  5f                   pop edi
// 00502b3e  8b4618               mov eax, dword ptr [esi + 0x18]
// 00502b41  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00502b45  8b542408             mov edx, dword ptr [esp + 8]
// 00502b49  c74008702a5000       mov dword ptr [eax + 8], 0x502a70
// 00502b50  c7400c802a5000       mov dword ptr [eax + 0xc], 0x502a80
// 00502b57  c74010d02a5000       mov dword ptr [eax + 0x10], 0x502ad0
// 00502b5e  c7401400375100       mov dword ptr [eax + 0x14], 0x513700
// 00502b65  c7401820cc4000       mov dword ptr [eax + 0x18], 0x40cc20
// 00502b6c  894820               mov dword ptr [eax + 0x20], ecx
// 00502b6f  89501c               mov dword ptr [eax + 0x1c], edx
// 00502b72  c7400400000000       mov dword ptr [eax + 4], 0
// 00502b79  c70000000000         mov dword ptr [eax], 0
// 00502b7f  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_jpeg.cpp (function ?jpeg_memory_src@G3D@@YAXPAUjpeg_decompress_struct@@PAEH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_jpeg.cpp
