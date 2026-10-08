// from server: 100% by auto
// roc 2011-06 0054e980  unit: G3D::_internal::DialogTemplate  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0054e980
//
// 0054e980  8b442404             mov eax, dword ptr [esp + 4]
// 0054e984  56                   push esi
// 0054e985  8b7018               mov esi, dword ptr [eax + 0x18]
// 0054e988  57                   push edi
// 0054e989  8b7e1c               mov edi, dword ptr [esi + 0x1c]
// 0054e98c  81ff00100000         cmp edi, 0x1000
// 0054e992  7e05                 jle 0x54e999
// 0054e994  bf00100000           mov edi, 0x1000
// 0054e999  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0054e99c  8b5628               mov edx, dword ptr [esi + 0x28]
// 0054e99f  57                   push edi
// 0054e9a0  51                   push ecx
// 0054e9a1  52                   push edx
// 0054e9a2  e835cc2b00           call 0x80b5dc
// 0054e9a7  8b4628               mov eax, dword ptr [esi + 0x28]
// 0054e9aa  017e20               add dword ptr [esi + 0x20], edi
// 0054e9ad  297e1c               sub dword ptr [esi + 0x1c], edi
// 0054e9b0  83c40c               add esp, 0xc
// 0054e9b3  897e04               mov dword ptr [esi + 4], edi
// 0054e9b6  8906                 mov dword ptr [esi], eax
// 0054e9b8  5f                   pop edi
// 0054e9b9  c6462400             mov byte ptr [esi + 0x24], 0
// 0054e9bd  b001                 mov al, 1
// 0054e9bf  5e                   pop esi
// 0054e9c0  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_jpeg.cpp (function ?fill_input_buffer@G3D@@YAEPAUjpeg_decompress_struct@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_jpeg.cpp
