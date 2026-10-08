// from server: 100% by auto
// roc 2010-06 00550460  unit: G3D::Log  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00550460
//
// 00550460  837e1800             cmp dword ptr [esi + 0x18], 0
// 00550464  7528                 jne 0x55048e
// 00550466  8b4604               mov eax, dword ptr [esi + 4]
// 00550469  8b08                 mov ecx, dword ptr [eax]
// 0055046b  57                   push edi
// 0055046c  6a2c                 push 0x2c
// 0055046e  6a00                 push 0
// 00550470  56                   push esi
// 00550471  ffd1                 call ecx
// 00550473  8b5604               mov edx, dword ptr [esi + 4]
// 00550476  8bf8                 mov edi, eax
// 00550478  6800100000           push 0x1000
// 0055047d  897e18               mov dword ptr [esi + 0x18], edi
// 00550480  8b02                 mov eax, dword ptr [edx]
// 00550482  6a00                 push 0
// 00550484  56                   push esi
// 00550485  ffd0                 call eax
// 00550487  83c418               add esp, 0x18
// 0055048a  894728               mov dword ptr [edi + 0x28], eax
// 0055048d  5f                   pop edi
// 0055048e  8b4618               mov eax, dword ptr [esi + 0x18]
// 00550491  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00550495  8b542408             mov edx, dword ptr [esp + 8]
// 00550499  c7400890035500       mov dword ptr [eax + 8], 0x550390
// 005504a0  c7400ca0035500       mov dword ptr [eax + 0xc], 0x5503a0
// 005504a7  c74010f0035500       mov dword ptr [eax + 0x10], 0x5503f0
// 005504ae  c7401490255600       mov dword ptr [eax + 0x14], 0x562590
// 005504b5  c74018b0454500       mov dword ptr [eax + 0x18], 0x4545b0
// 005504bc  894820               mov dword ptr [eax + 0x20], ecx
// 005504bf  89501c               mov dword ptr [eax + 0x1c], edx
// 005504c2  c7400400000000       mov dword ptr [eax + 4], 0
// 005504c9  c70000000000         mov dword ptr [eax], 0
// 005504cf  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_jpeg.cpp (function ?jpeg_memory_src@G3D@@YAXPAUjpeg_decompress_struct@@PAEH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_jpeg.cpp
