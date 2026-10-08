// from server: 100% by auto
// roc 2012-06 0063bfc0  unit: G3D::_internal::DialogTemplate  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0063bfc0
//
// 0063bfc0  8b442404             mov eax, dword ptr [esp + 4]
// 0063bfc4  56                   push esi
// 0063bfc5  8b7018               mov esi, dword ptr [eax + 0x18]
// 0063bfc8  57                   push edi
// 0063bfc9  8b7e1c               mov edi, dword ptr [esi + 0x1c]
// 0063bfcc  81ff00100000         cmp edi, 0x1000
// 0063bfd2  7e05                 jle 0x63bfd9
// 0063bfd4  bf00100000           mov edi, 0x1000
// 0063bfd9  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0063bfdc  8b5628               mov edx, dword ptr [esi + 0x28]
// 0063bfdf  57                   push edi
// 0063bfe0  51                   push ecx
// 0063bfe1  52                   push edx
// 0063bfe2  e875763400           call 0x98365c
// 0063bfe7  8b4628               mov eax, dword ptr [esi + 0x28]
// 0063bfea  017e20               add dword ptr [esi + 0x20], edi
// 0063bfed  297e1c               sub dword ptr [esi + 0x1c], edi
// 0063bff0  83c40c               add esp, 0xc
// 0063bff3  897e04               mov dword ptr [esi + 4], edi
// 0063bff6  8906                 mov dword ptr [esi], eax
// 0063bff8  5f                   pop edi
// 0063bff9  c6462400             mov byte ptr [esi + 0x24], 0
// 0063bffd  b001                 mov al, 1
// 0063bfff  5e                   pop esi
// 0063c000  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_jpeg.cpp (function ?fill_input_buffer@G3D@@YAEPAUjpeg_decompress_struct@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_jpeg.cpp
