// from server: 100% by auto
// roc 2010-06 005503a0  unit: G3D::Log  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005503a0
//
// 005503a0  8b442404             mov eax, dword ptr [esp + 4]
// 005503a4  56                   push esi
// 005503a5  8b7018               mov esi, dword ptr [eax + 0x18]
// 005503a8  57                   push edi
// 005503a9  8b7e1c               mov edi, dword ptr [esi + 0x1c]
// 005503ac  81ff00100000         cmp edi, 0x1000
// 005503b2  7e05                 jle 0x5503b9
// 005503b4  bf00100000           mov edi, 0x1000
// 005503b9  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 005503bc  8b5628               mov edx, dword ptr [esi + 0x28]
// 005503bf  57                   push edi
// 005503c0  51                   push ecx
// 005503c1  52                   push edx
// 005503c2  e85f8a2500           call 0x7a8e26
// 005503c7  8b4628               mov eax, dword ptr [esi + 0x28]
// 005503ca  017e20               add dword ptr [esi + 0x20], edi
// 005503cd  297e1c               sub dword ptr [esi + 0x1c], edi
// 005503d0  83c40c               add esp, 0xc
// 005503d3  897e04               mov dword ptr [esi + 4], edi
// 005503d6  8906                 mov dword ptr [esi], eax
// 005503d8  5f                   pop edi
// 005503d9  c6462400             mov byte ptr [esi + 0x24], 0
// 005503dd  b001                 mov al, 1
// 005503df  5e                   pop esi
// 005503e0  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_jpeg.cpp (function ?fill_input_buffer@G3D@@YAEPAUjpeg_decompress_struct@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_jpeg.cpp
