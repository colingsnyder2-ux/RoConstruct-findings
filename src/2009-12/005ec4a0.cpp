// roc 2009-12 005ec4a0  unit: G3D::Log  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005ec4a0
//
// 005ec4a0  8b442404             mov eax, dword ptr [esp + 4]
// 005ec4a4  56                   push esi
// 005ec4a5  8b7018               mov esi, dword ptr [eax + 0x18]
// 005ec4a8  57                   push edi
// 005ec4a9  8b7e1c               mov edi, dword ptr [esi + 0x1c]
// 005ec4ac  81ff00100000         cmp edi, 0x1000
// 005ec4b2  7e05                 jle 0x5ec4b9
// 005ec4b4  bf00100000           mov edi, 0x1000
// 005ec4b9  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 005ec4bc  8b5628               mov edx, dword ptr [esi + 0x28]
// 005ec4bf  57                   push edi
// 005ec4c0  51                   push ecx
// 005ec4c1  52                   push edx
// 005ec4c2  e81f882000           call 0x7f4ce6
// 005ec4c7  8b4628               mov eax, dword ptr [esi + 0x28]
// 005ec4ca  017e20               add dword ptr [esi + 0x20], edi
// 005ec4cd  297e1c               sub dword ptr [esi + 0x1c], edi
// 005ec4d0  83c40c               add esp, 0xc
// 005ec4d3  897e04               mov dword ptr [esi + 4], edi
// 005ec4d6  8906                 mov dword ptr [esi], eax
// 005ec4d8  5f                   pop edi
// 005ec4d9  c6462400             mov byte ptr [esi + 0x24], 0
// 005ec4dd  b001                 mov al, 1
// 005ec4df  5e                   pop esi
// 005ec4e0  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_jpeg.cpp (function ?fill_input_buffer@G3D@@YAEPAUjpeg_decompress_struct@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_jpeg.cpp
