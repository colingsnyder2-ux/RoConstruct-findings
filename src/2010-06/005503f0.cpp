// roc 2010-06 005503f0  unit: G3D::Log  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005503f0
//
// 005503f0  8b442404             mov eax, dword ptr [esp + 4]
// 005503f4  53                   push ebx
// 005503f5  8b5818               mov ebx, dword ptr [eax + 0x18]
// 005503f8  55                   push ebp
// 005503f9  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 005503fd  85ed                 test ebp, ebp
// 005503ff  7e58                 jle 0x550459
// 00550401  3b6b04               cmp ebp, dword ptr [ebx + 4]
// 00550404  7e4e                 jle 0x550454
// 00550406  56                   push esi
// 00550407  57                   push edi
// 00550408  eb06                 jmp 0x550410
// 0055040a  8d9b00000000         lea ebx, [ebx]
// 00550410  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00550414  8b7118               mov esi, dword ptr [ecx + 0x18]
// 00550417  8b7e1c               mov edi, dword ptr [esi + 0x1c]
// 0055041a  2b6b04               sub ebp, dword ptr [ebx + 4]
// 0055041d  81ff00100000         cmp edi, 0x1000
// 00550423  7e05                 jle 0x55042a
// 00550425  bf00100000           mov edi, 0x1000
// 0055042a  8b5620               mov edx, dword ptr [esi + 0x20]
// 0055042d  8b4628               mov eax, dword ptr [esi + 0x28]
// 00550430  57                   push edi
// 00550431  52                   push edx
// 00550432  50                   push eax
// 00550433  e8ee892500           call 0x7a8e26
// 00550438  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 0055043b  017e20               add dword ptr [esi + 0x20], edi
// 0055043e  297e1c               sub dword ptr [esi + 0x1c], edi
// 00550441  83c40c               add esp, 0xc
// 00550444  890e                 mov dword ptr [esi], ecx
// 00550446  897e04               mov dword ptr [esi + 4], edi
// 00550449  c6462400             mov byte ptr [esi + 0x24], 0
// 0055044d  3b6b04               cmp ebp, dword ptr [ebx + 4]
// 00550450  7fbe                 jg 0x550410
// 00550452  5f                   pop edi
// 00550453  5e                   pop esi
// 00550454  012b                 add dword ptr [ebx], ebp
// 00550456  296b04               sub dword ptr [ebx + 4], ebp
// 00550459  5d                   pop ebp
// 0055045a  5b                   pop ebx
// 0055045b  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_jpeg.cpp (function ?skip_input_data@G3D@@YAXPAUjpeg_decompress_struct@@J@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_jpeg.cpp
