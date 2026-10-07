// roc 2012-06 0063c080  unit: G3D::_internal::DialogTemplate  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0063c080
//
// 0063c080  837e1800             cmp dword ptr [esi + 0x18], 0
// 0063c084  7528                 jne 0x63c0ae
// 0063c086  8b4604               mov eax, dword ptr [esi + 4]
// 0063c089  8b08                 mov ecx, dword ptr [eax]
// 0063c08b  57                   push edi
// 0063c08c  6a2c                 push 0x2c
// 0063c08e  6a00                 push 0
// 0063c090  56                   push esi
// 0063c091  ffd1                 call ecx
// 0063c093  8b5604               mov edx, dword ptr [esi + 4]
// 0063c096  8bf8                 mov edi, eax
// 0063c098  6800100000           push 0x1000
// 0063c09d  897e18               mov dword ptr [esi + 0x18], edi
// 0063c0a0  8b02                 mov eax, dword ptr [edx]
// 0063c0a2  6a00                 push 0
// 0063c0a4  56                   push esi
// 0063c0a5  ffd0                 call eax
// 0063c0a7  83c418               add esp, 0x18
// 0063c0aa  894728               mov dword ptr [edi + 0x28], eax
// 0063c0ad  5f                   pop edi
// 0063c0ae  8b4618               mov eax, dword ptr [esi + 0x18]
// 0063c0b1  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0063c0b5  8b542408             mov edx, dword ptr [esp + 8]
// 0063c0b9  c74008b0bf6300       mov dword ptr [eax + 8], 0x63bfb0
// 0063c0c0  c7400cc0bf6300       mov dword ptr [eax + 0xc], 0x63bfc0
// 0063c0c7  c7401010c06300       mov dword ptr [eax + 0x10], 0x63c010
// 0063c0ce  c74014e03b6400       mov dword ptr [eax + 0x14], 0x643be0
// 0063c0d5  c7401890a75900       mov dword ptr [eax + 0x18], 0x59a790
// 0063c0dc  894820               mov dword ptr [eax + 0x20], ecx
// 0063c0df  89501c               mov dword ptr [eax + 0x1c], edx
// 0063c0e2  c7400400000000       mov dword ptr [eax + 4], 0
// 0063c0e9  c70000000000         mov dword ptr [eax], 0
// 0063c0ef  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_jpeg.cpp (function ?jpeg_memory_src@G3D@@YAXPAUjpeg_decompress_struct@@PAEH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_jpeg.cpp
