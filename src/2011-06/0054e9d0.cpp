// from server: 100% by auto
// roc 2011-06 0054e9d0  unit: G3D::_internal::DialogTemplate  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0054e9d0
//
// 0054e9d0  8b442404             mov eax, dword ptr [esp + 4]
// 0054e9d4  53                   push ebx
// 0054e9d5  8b5818               mov ebx, dword ptr [eax + 0x18]
// 0054e9d8  55                   push ebp
// 0054e9d9  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0054e9dd  85ed                 test ebp, ebp
// 0054e9df  7e58                 jle 0x54ea39
// 0054e9e1  3b6b04               cmp ebp, dword ptr [ebx + 4]
// 0054e9e4  7e4e                 jle 0x54ea34
// 0054e9e6  56                   push esi
// 0054e9e7  57                   push edi
// 0054e9e8  eb06                 jmp 0x54e9f0
// 0054e9ea  8d9b00000000         lea ebx, [ebx]
// 0054e9f0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0054e9f4  8b7118               mov esi, dword ptr [ecx + 0x18]
// 0054e9f7  8b7e1c               mov edi, dword ptr [esi + 0x1c]
// 0054e9fa  2b6b04               sub ebp, dword ptr [ebx + 4]
// 0054e9fd  81ff00100000         cmp edi, 0x1000
// 0054ea03  7e05                 jle 0x54ea0a
// 0054ea05  bf00100000           mov edi, 0x1000
// 0054ea0a  8b5620               mov edx, dword ptr [esi + 0x20]
// 0054ea0d  8b4628               mov eax, dword ptr [esi + 0x28]
// 0054ea10  57                   push edi
// 0054ea11  52                   push edx
// 0054ea12  50                   push eax
// 0054ea13  e8c4cb2b00           call 0x80b5dc
// 0054ea18  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 0054ea1b  017e20               add dword ptr [esi + 0x20], edi
// 0054ea1e  297e1c               sub dword ptr [esi + 0x1c], edi
// 0054ea21  83c40c               add esp, 0xc
// 0054ea24  890e                 mov dword ptr [esi], ecx
// 0054ea26  897e04               mov dword ptr [esi + 4], edi
// 0054ea29  c6462400             mov byte ptr [esi + 0x24], 0
// 0054ea2d  3b6b04               cmp ebp, dword ptr [ebx + 4]
// 0054ea30  7fbe                 jg 0x54e9f0
// 0054ea32  5f                   pop edi
// 0054ea33  5e                   pop esi
// 0054ea34  012b                 add dword ptr [ebx], ebp
// 0054ea36  296b04               sub dword ptr [ebx + 4], ebp
// 0054ea39  5d                   pop ebp
// 0054ea3a  5b                   pop ebx
// 0054ea3b  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_jpeg.cpp (function ?skip_input_data@G3D@@YAXPAUjpeg_decompress_struct@@J@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_jpeg.cpp
