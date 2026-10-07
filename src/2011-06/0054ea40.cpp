// roc 2011-06 0054ea40  unit: G3D::_internal::DialogTemplate  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0054ea40
//
// 0054ea40  837e1800             cmp dword ptr [esi + 0x18], 0
// 0054ea44  7528                 jne 0x54ea6e
// 0054ea46  8b4604               mov eax, dword ptr [esi + 4]
// 0054ea49  8b08                 mov ecx, dword ptr [eax]
// 0054ea4b  57                   push edi
// 0054ea4c  6a2c                 push 0x2c
// 0054ea4e  6a00                 push 0
// 0054ea50  56                   push esi
// 0054ea51  ffd1                 call ecx
// 0054ea53  8b5604               mov edx, dword ptr [esi + 4]
// 0054ea56  8bf8                 mov edi, eax
// 0054ea58  6800100000           push 0x1000
// 0054ea5d  897e18               mov dword ptr [esi + 0x18], edi
// 0054ea60  8b02                 mov eax, dword ptr [edx]
// 0054ea62  6a00                 push 0
// 0054ea64  56                   push esi
// 0054ea65  ffd0                 call eax
// 0054ea67  83c418               add esp, 0x18
// 0054ea6a  894728               mov dword ptr [edi + 0x28], eax
// 0054ea6d  5f                   pop edi
// 0054ea6e  8b4618               mov eax, dword ptr [esi + 0x18]
// 0054ea71  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0054ea75  8b542408             mov edx, dword ptr [esp + 8]
// 0054ea79  c7400870e95400       mov dword ptr [eax + 8], 0x54e970
// 0054ea80  c7400c80e95400       mov dword ptr [eax + 0xc], 0x54e980
// 0054ea87  c74010d0e95400       mov dword ptr [eax + 0x10], 0x54e9d0
// 0054ea8e  c74014606d5500       mov dword ptr [eax + 0x14], 0x556d60
// 0054ea95  c7401840b68600       mov dword ptr [eax + 0x18], 0x86b640
// 0054ea9c  894820               mov dword ptr [eax + 0x20], ecx
// 0054ea9f  89501c               mov dword ptr [eax + 0x1c], edx
// 0054eaa2  c7400400000000       mov dword ptr [eax + 4], 0
// 0054eaa9  c70000000000         mov dword ptr [eax], 0
// 0054eaaf  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_jpeg.cpp (function ?jpeg_memory_src@G3D@@YAXPAUjpeg_decompress_struct@@PAEH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_jpeg.cpp
