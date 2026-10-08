// roc 2007-03 004f67c0  unit: seg_004f0000  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f67c0
//
// 004f67c0  837e1800             cmp dword ptr [esi + 0x18], 0
// 004f67c4  7528                 jne 0x4f67ee
// 004f67c6  8b4604               mov eax, dword ptr [esi + 4]
// 004f67c9  8b08                 mov ecx, dword ptr [eax]
// 004f67cb  57                   push edi
// 004f67cc  6a2c                 push 0x2c
// 004f67ce  6a00                 push 0
// 004f67d0  56                   push esi
// 004f67d1  ffd1                 call ecx
// 004f67d3  8b5604               mov edx, dword ptr [esi + 4]
// 004f67d6  8bf8                 mov edi, eax
// 004f67d8  6800100000           push 0x1000
// 004f67dd  897e18               mov dword ptr [esi + 0x18], edi
// 004f67e0  8b02                 mov eax, dword ptr [edx]
// 004f67e2  6a00                 push 0
// 004f67e4  56                   push esi
// 004f67e5  ffd0                 call eax
// 004f67e7  83c418               add esp, 0x18
// 004f67ea  894728               mov dword ptr [edi + 0x28], eax
// 004f67ed  5f                   pop edi
// 004f67ee  8b4618               mov eax, dword ptr [esi + 0x18]
// 004f67f1  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004f67f5  8b542408             mov edx, dword ptr [esp + 8]
// 004f67f9  c7400820674f00       mov dword ptr [eax + 8], 0x4f6720
// 004f6800  c7400c30674f00       mov dword ptr [eax + 0xc], 0x4f6730
// 004f6807  c7401080674f00       mov dword ptr [eax + 0x10], 0x4f6780
// 004f680e  c74014307e5000       mov dword ptr [eax + 0x14], 0x507e30
// 004f6815  c74018c07d6900       mov dword ptr [eax + 0x18], 0x697dc0
// 004f681c  894820               mov dword ptr [eax + 0x20], ecx
// 004f681f  89501c               mov dword ptr [eax + 0x1c], edx
// 004f6822  c7400400000000       mov dword ptr [eax + 4], 0
// 004f6829  c70000000000         mov dword ptr [eax], 0
// 004f682f  c3                   ret 
// library rbxgs-g3d/G3Dcpp\GImage_jpeg.cpp (function ?jpeg_memory_src@G3D@@YAXPAUjpeg_decompress_struct@@PAEH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/GImage_jpeg.cpp
