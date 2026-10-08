// from server: 100% by auto
// roc 2012-06 0063c010  unit: G3D::_internal::DialogTemplate  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0063c010
//
// 0063c010  8b442404             mov eax, dword ptr [esp + 4]
// 0063c014  53                   push ebx
// 0063c015  8b5818               mov ebx, dword ptr [eax + 0x18]
// 0063c018  55                   push ebp
// 0063c019  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0063c01d  85ed                 test ebp, ebp
// 0063c01f  7e58                 jle 0x63c079
// 0063c021  3b6b04               cmp ebp, dword ptr [ebx + 4]
// 0063c024  7e4e                 jle 0x63c074
// 0063c026  56                   push esi
// 0063c027  57                   push edi
// 0063c028  eb06                 jmp 0x63c030
// 0063c02a  8d9b00000000         lea ebx, [ebx]
// 0063c030  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0063c034  8b7118               mov esi, dword ptr [ecx + 0x18]
// 0063c037  8b7e1c               mov edi, dword ptr [esi + 0x1c]
// 0063c03a  2b6b04               sub ebp, dword ptr [ebx + 4]
// 0063c03d  81ff00100000         cmp edi, 0x1000
// 0063c043  7e05                 jle 0x63c04a
// 0063c045  bf00100000           mov edi, 0x1000
// 0063c04a  8b5620               mov edx, dword ptr [esi + 0x20]
// 0063c04d  8b4628               mov eax, dword ptr [esi + 0x28]
// 0063c050  57                   push edi
// 0063c051  52                   push edx
// 0063c052  50                   push eax
// 0063c053  e804763400           call 0x98365c
// 0063c058  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 0063c05b  017e20               add dword ptr [esi + 0x20], edi
// 0063c05e  297e1c               sub dword ptr [esi + 0x1c], edi
// 0063c061  83c40c               add esp, 0xc
// 0063c064  890e                 mov dword ptr [esi], ecx
// 0063c066  897e04               mov dword ptr [esi + 4], edi
// 0063c069  c6462400             mov byte ptr [esi + 0x24], 0
// 0063c06d  3b6b04               cmp ebp, dword ptr [ebx + 4]
// 0063c070  7fbe                 jg 0x63c030
// 0063c072  5f                   pop edi
// 0063c073  5e                   pop esi
// 0063c074  012b                 add dword ptr [ebx], ebp
// 0063c076  296b04               sub dword ptr [ebx + 4], ebp
// 0063c079  5d                   pop ebp
// 0063c07a  5b                   pop ebx
// 0063c07b  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_jpeg.cpp (function ?skip_input_data@G3D@@YAXPAUjpeg_decompress_struct@@J@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_jpeg.cpp
