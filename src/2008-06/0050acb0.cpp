// from server: 100% by auto
// roc 2008-06 0050acb0  unit: G3D::Log  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0050acb0
//
// 0050acb0  8b442404             mov eax, dword ptr [esp + 4]
// 0050acb4  53                   push ebx
// 0050acb5  8b5818               mov ebx, dword ptr [eax + 0x18]
// 0050acb8  55                   push ebp
// 0050acb9  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0050acbd  85ed                 test ebp, ebp
// 0050acbf  7e58                 jle 0x50ad19
// 0050acc1  3b6b04               cmp ebp, dword ptr [ebx + 4]
// 0050acc4  7e4e                 jle 0x50ad14
// 0050acc6  56                   push esi
// 0050acc7  57                   push edi
// 0050acc8  eb06                 jmp 0x50acd0
// 0050acca  8d9b00000000         lea ebx, [ebx]
// 0050acd0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0050acd4  8b7118               mov esi, dword ptr [ecx + 0x18]
// 0050acd7  8b7e1c               mov edi, dword ptr [esi + 0x1c]
// 0050acda  2b6b04               sub ebp, dword ptr [ebx + 4]
// 0050acdd  81ff00100000         cmp edi, 0x1000
// 0050ace3  7e05                 jle 0x50acea
// 0050ace5  bf00100000           mov edi, 0x1000
// 0050acea  8b5620               mov edx, dword ptr [esi + 0x20]
// 0050aced  8b4628               mov eax, dword ptr [esi + 0x28]
// 0050acf0  57                   push edi
// 0050acf1  52                   push edx
// 0050acf2  50                   push eax
// 0050acf3  e8e86a1900           call 0x6a17e0
// 0050acf8  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 0050acfb  017e20               add dword ptr [esi + 0x20], edi
// 0050acfe  297e1c               sub dword ptr [esi + 0x1c], edi
// 0050ad01  83c40c               add esp, 0xc
// 0050ad04  890e                 mov dword ptr [esi], ecx
// 0050ad06  897e04               mov dword ptr [esi + 4], edi
// 0050ad09  c6462400             mov byte ptr [esi + 0x24], 0
// 0050ad0d  3b6b04               cmp ebp, dword ptr [ebx + 4]
// 0050ad10  7fbe                 jg 0x50acd0
// 0050ad12  5f                   pop edi
// 0050ad13  5e                   pop esi
// 0050ad14  012b                 add dword ptr [ebx], ebp
// 0050ad16  296b04               sub dword ptr [ebx + 4], ebp
// 0050ad19  5d                   pop ebp
// 0050ad1a  5b                   pop ebx
// 0050ad1b  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_jpeg.cpp (function ?skip_input_data@G3D@@YAXPAUjpeg_decompress_struct@@J@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_jpeg.cpp
