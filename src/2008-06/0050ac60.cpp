// roc 2008-06 0050ac60  unit: G3D::Log  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0050ac60
//
// 0050ac60  8b442404             mov eax, dword ptr [esp + 4]
// 0050ac64  56                   push esi
// 0050ac65  8b7018               mov esi, dword ptr [eax + 0x18]
// 0050ac68  57                   push edi
// 0050ac69  8b7e1c               mov edi, dword ptr [esi + 0x1c]
// 0050ac6c  81ff00100000         cmp edi, 0x1000
// 0050ac72  7e05                 jle 0x50ac79
// 0050ac74  bf00100000           mov edi, 0x1000
// 0050ac79  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0050ac7c  8b5628               mov edx, dword ptr [esi + 0x28]
// 0050ac7f  57                   push edi
// 0050ac80  51                   push ecx
// 0050ac81  52                   push edx
// 0050ac82  e8596b1900           call 0x6a17e0
// 0050ac87  8b4628               mov eax, dword ptr [esi + 0x28]
// 0050ac8a  017e20               add dword ptr [esi + 0x20], edi
// 0050ac8d  297e1c               sub dword ptr [esi + 0x1c], edi
// 0050ac90  83c40c               add esp, 0xc
// 0050ac93  897e04               mov dword ptr [esi + 4], edi
// 0050ac96  8906                 mov dword ptr [esi], eax
// 0050ac98  5f                   pop edi
// 0050ac99  c6462400             mov byte ptr [esi + 0x24], 0
// 0050ac9d  b001                 mov al, 1
// 0050ac9f  5e                   pop esi
// 0050aca0  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_jpeg.cpp (function ?fill_input_buffer@G3D@@YAEPAUjpeg_decompress_struct@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_jpeg.cpp
