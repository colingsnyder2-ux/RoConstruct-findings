// from server: 100% by auto
// roc 2009-06 0056d450  unit: G3D::Log  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0056d450
//
// 0056d450  837e1800             cmp dword ptr [esi + 0x18], 0
// 0056d454  7528                 jne 0x56d47e
// 0056d456  8b4604               mov eax, dword ptr [esi + 4]
// 0056d459  8b08                 mov ecx, dword ptr [eax]
// 0056d45b  57                   push edi
// 0056d45c  6a2c                 push 0x2c
// 0056d45e  6a00                 push 0
// 0056d460  56                   push esi
// 0056d461  ffd1                 call ecx
// 0056d463  8b5604               mov edx, dword ptr [esi + 4]
// 0056d466  8bf8                 mov edi, eax
// 0056d468  6800100000           push 0x1000
// 0056d46d  897e18               mov dword ptr [esi + 0x18], edi
// 0056d470  8b02                 mov eax, dword ptr [edx]
// 0056d472  6a00                 push 0
// 0056d474  56                   push esi
// 0056d475  ffd0                 call eax
// 0056d477  83c418               add esp, 0x18
// 0056d47a  894728               mov dword ptr [edi + 0x28], eax
// 0056d47d  5f                   pop edi
// 0056d47e  8b4618               mov eax, dword ptr [esi + 0x18]
// 0056d481  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0056d485  8b542408             mov edx, dword ptr [esp + 8]
// 0056d489  c7400880d35600       mov dword ptr [eax + 8], 0x56d380
// 0056d490  c7400c90d35600       mov dword ptr [eax + 0xc], 0x56d390
// 0056d497  c74010e0d35600       mov dword ptr [eax + 0x10], 0x56d3e0
// 0056d49e  c7401440ee5700       mov dword ptr [eax + 0x14], 0x57ee40
// 0056d4a5  c74018e0496700       mov dword ptr [eax + 0x18], 0x6749e0
// 0056d4ac  894820               mov dword ptr [eax + 0x20], ecx
// 0056d4af  89501c               mov dword ptr [eax + 0x1c], edx
// 0056d4b2  c7400400000000       mov dword ptr [eax + 4], 0
// 0056d4b9  c70000000000         mov dword ptr [eax], 0
// 0056d4bf  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_jpeg.cpp (function ?jpeg_memory_src@G3D@@YAXPAUjpeg_decompress_struct@@PAEH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_jpeg.cpp
