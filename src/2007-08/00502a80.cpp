// roc 2007-08 00502a80  unit: G3D::Log  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00502a80
//
// 00502a80  8b442404             mov eax, dword ptr [esp + 4]
// 00502a84  56                   push esi
// 00502a85  8b7018               mov esi, dword ptr [eax + 0x18]
// 00502a88  57                   push edi
// 00502a89  8b7e1c               mov edi, dword ptr [esi + 0x1c]
// 00502a8c  81ff00100000         cmp edi, 0x1000
// 00502a92  7e05                 jle 0x502a99
// 00502a94  bf00100000           mov edi, 0x1000
// 00502a99  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00502a9c  8b5628               mov edx, dword ptr [esi + 0x28]
// 00502a9f  57                   push edi
// 00502aa0  51                   push ecx
// 00502aa1  52                   push edx
// 00502aa2  e8a5e21200           call 0x630d4c
// 00502aa7  8b4628               mov eax, dword ptr [esi + 0x28]
// 00502aaa  017e20               add dword ptr [esi + 0x20], edi
// 00502aad  297e1c               sub dword ptr [esi + 0x1c], edi
// 00502ab0  83c40c               add esp, 0xc
// 00502ab3  897e04               mov dword ptr [esi + 4], edi
// 00502ab6  8906                 mov dword ptr [esi], eax
// 00502ab8  5f                   pop edi
// 00502ab9  c6462400             mov byte ptr [esi + 0x24], 0
// 00502abd  b001                 mov al, 1
// 00502abf  5e                   pop esi
// 00502ac0  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_jpeg.cpp (function ?fill_input_buffer@G3D@@YAEPAUjpeg_decompress_struct@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_jpeg.cpp
