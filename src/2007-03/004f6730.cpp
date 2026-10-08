// roc 2007-03 004f6730  unit: seg_004f0000  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f6730
//
// 004f6730  8b442404             mov eax, dword ptr [esp + 4]
// 004f6734  56                   push esi
// 004f6735  8b7018               mov esi, dword ptr [eax + 0x18]
// 004f6738  57                   push edi
// 004f6739  8b7e1c               mov edi, dword ptr [esi + 0x1c]
// 004f673c  81ff00100000         cmp edi, 0x1000
// 004f6742  7e05                 jle 0x4f6749
// 004f6744  bf00100000           mov edi, 0x1000
// 004f6749  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 004f674c  8b5628               mov edx, dword ptr [esi + 0x28]
// 004f674f  57                   push edi
// 004f6750  51                   push ecx
// 004f6751  52                   push edx
// 004f6752  e88b8a1200           call 0x61f1e2
// 004f6757  8b4628               mov eax, dword ptr [esi + 0x28]
// 004f675a  017e20               add dword ptr [esi + 0x20], edi
// 004f675d  297e1c               sub dword ptr [esi + 0x1c], edi
// 004f6760  83c40c               add esp, 0xc
// 004f6763  897e04               mov dword ptr [esi + 4], edi
// 004f6766  8906                 mov dword ptr [esi], eax
// 004f6768  5f                   pop edi
// 004f6769  c6462400             mov byte ptr [esi + 0x24], 0
// 004f676d  b001                 mov al, 1
// 004f676f  5e                   pop esi
// 004f6770  c3                   ret 
// library rbxgs-g3d/G3Dcpp\GImage_jpeg.cpp (function ?fill_input_buffer@G3D@@YAEPAUjpeg_decompress_struct@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/GImage_jpeg.cpp
