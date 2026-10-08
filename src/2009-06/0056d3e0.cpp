// from server: 100% by auto
// roc 2009-06 0056d3e0  unit: G3D::Log  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0056d3e0
//
// 0056d3e0  8b442404             mov eax, dword ptr [esp + 4]
// 0056d3e4  53                   push ebx
// 0056d3e5  8b5818               mov ebx, dword ptr [eax + 0x18]
// 0056d3e8  55                   push ebp
// 0056d3e9  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0056d3ed  85ed                 test ebp, ebp
// 0056d3ef  7e58                 jle 0x56d449
// 0056d3f1  3b6b04               cmp ebp, dword ptr [ebx + 4]
// 0056d3f4  7e4e                 jle 0x56d444
// 0056d3f6  56                   push esi
// 0056d3f7  57                   push edi
// 0056d3f8  eb06                 jmp 0x56d400
// 0056d3fa  8d9b00000000         lea ebx, [ebx]
// 0056d400  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0056d404  8b7118               mov esi, dword ptr [ecx + 0x18]
// 0056d407  8b7e1c               mov edi, dword ptr [esi + 0x1c]
// 0056d40a  2b6b04               sub ebp, dword ptr [ebx + 4]
// 0056d40d  81ff00100000         cmp edi, 0x1000
// 0056d413  7e05                 jle 0x56d41a
// 0056d415  bf00100000           mov edi, 0x1000
// 0056d41a  8b5620               mov edx, dword ptr [esi + 0x20]
// 0056d41d  8b4628               mov eax, dword ptr [esi + 0x28]
// 0056d420  57                   push edi
// 0056d421  52                   push edx
// 0056d422  50                   push eax
// 0056d423  e88eca1a00           call 0x719eb6
// 0056d428  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 0056d42b  017e20               add dword ptr [esi + 0x20], edi
// 0056d42e  297e1c               sub dword ptr [esi + 0x1c], edi
// 0056d431  83c40c               add esp, 0xc
// 0056d434  890e                 mov dword ptr [esi], ecx
// 0056d436  897e04               mov dword ptr [esi + 4], edi
// 0056d439  c6462400             mov byte ptr [esi + 0x24], 0
// 0056d43d  3b6b04               cmp ebp, dword ptr [ebx + 4]
// 0056d440  7fbe                 jg 0x56d400
// 0056d442  5f                   pop edi
// 0056d443  5e                   pop esi
// 0056d444  012b                 add dword ptr [ebx], ebp
// 0056d446  296b04               sub dword ptr [ebx + 4], ebp
// 0056d449  5d                   pop ebp
// 0056d44a  5b                   pop ebx
// 0056d44b  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_jpeg.cpp (function ?skip_input_data@G3D@@YAXPAUjpeg_decompress_struct@@J@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_jpeg.cpp
