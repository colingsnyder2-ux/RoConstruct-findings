// from server: 100% by auto
// roc 2009-06 0056d390  unit: G3D::Log  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0056d390
//
// 0056d390  8b442404             mov eax, dword ptr [esp + 4]
// 0056d394  56                   push esi
// 0056d395  8b7018               mov esi, dword ptr [eax + 0x18]
// 0056d398  57                   push edi
// 0056d399  8b7e1c               mov edi, dword ptr [esi + 0x1c]
// 0056d39c  81ff00100000         cmp edi, 0x1000
// 0056d3a2  7e05                 jle 0x56d3a9
// 0056d3a4  bf00100000           mov edi, 0x1000
// 0056d3a9  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0056d3ac  8b5628               mov edx, dword ptr [esi + 0x28]
// 0056d3af  57                   push edi
// 0056d3b0  51                   push ecx
// 0056d3b1  52                   push edx
// 0056d3b2  e8ffca1a00           call 0x719eb6
// 0056d3b7  8b4628               mov eax, dword ptr [esi + 0x28]
// 0056d3ba  017e20               add dword ptr [esi + 0x20], edi
// 0056d3bd  297e1c               sub dword ptr [esi + 0x1c], edi
// 0056d3c0  83c40c               add esp, 0xc
// 0056d3c3  897e04               mov dword ptr [esi + 4], edi
// 0056d3c6  8906                 mov dword ptr [esi], eax
// 0056d3c8  5f                   pop edi
// 0056d3c9  c6462400             mov byte ptr [esi + 0x24], 0
// 0056d3cd  b001                 mov al, 1
// 0056d3cf  5e                   pop esi
// 0056d3d0  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_jpeg.cpp (function ?fill_input_buffer@G3D@@YAEPAUjpeg_decompress_struct@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_jpeg.cpp
