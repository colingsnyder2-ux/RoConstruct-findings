// roc 2008-06 0050ad20  unit: G3D::Log  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0050ad20
//
// 0050ad20  837e1800             cmp dword ptr [esi + 0x18], 0
// 0050ad24  7528                 jne 0x50ad4e
// 0050ad26  8b4604               mov eax, dword ptr [esi + 4]
// 0050ad29  8b08                 mov ecx, dword ptr [eax]
// 0050ad2b  57                   push edi
// 0050ad2c  6a2c                 push 0x2c
// 0050ad2e  6a00                 push 0
// 0050ad30  56                   push esi
// 0050ad31  ffd1                 call ecx
// 0050ad33  8b5604               mov edx, dword ptr [esi + 4]
// 0050ad36  8bf8                 mov edi, eax
// 0050ad38  6800100000           push 0x1000
// 0050ad3d  897e18               mov dword ptr [esi + 0x18], edi
// 0050ad40  8b02                 mov eax, dword ptr [edx]
// 0050ad42  6a00                 push 0
// 0050ad44  56                   push esi
// 0050ad45  ffd0                 call eax
// 0050ad47  83c418               add esp, 0x18
// 0050ad4a  894728               mov dword ptr [edi + 0x28], eax
// 0050ad4d  5f                   pop edi
// 0050ad4e  8b4618               mov eax, dword ptr [esi + 0x18]
// 0050ad51  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0050ad55  8b542408             mov edx, dword ptr [esp + 8]
// 0050ad59  c7400850ac5000       mov dword ptr [eax + 8], 0x50ac50
// 0050ad60  c7400c60ac5000       mov dword ptr [eax + 0xc], 0x50ac60
// 0050ad67  c74010b0ac5000       mov dword ptr [eax + 0x10], 0x50acb0
// 0050ad6e  c74014a0b45100       mov dword ptr [eax + 0x14], 0x51b4a0
// 0050ad75  c7401810d44700       mov dword ptr [eax + 0x18], 0x47d410
// 0050ad7c  894820               mov dword ptr [eax + 0x20], ecx
// 0050ad7f  89501c               mov dword ptr [eax + 0x1c], edx
// 0050ad82  c7400400000000       mov dword ptr [eax + 4], 0
// 0050ad89  c70000000000         mov dword ptr [eax], 0
// 0050ad8f  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_jpeg.cpp (function ?jpeg_memory_src@G3D@@YAXPAUjpeg_decompress_struct@@PAEH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_jpeg.cpp
