// roc 2009-12 005ec4f0  unit: G3D::Log  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005ec4f0
//
// 005ec4f0  8b442404             mov eax, dword ptr [esp + 4]
// 005ec4f4  53                   push ebx
// 005ec4f5  8b5818               mov ebx, dword ptr [eax + 0x18]
// 005ec4f8  55                   push ebp
// 005ec4f9  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 005ec4fd  85ed                 test ebp, ebp
// 005ec4ff  7e58                 jle 0x5ec559
// 005ec501  3b6b04               cmp ebp, dword ptr [ebx + 4]
// 005ec504  7e4e                 jle 0x5ec554
// 005ec506  56                   push esi
// 005ec507  57                   push edi
// 005ec508  eb06                 jmp 0x5ec510
// 005ec50a  8d9b00000000         lea ebx, [ebx]
// 005ec510  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005ec514  8b7118               mov esi, dword ptr [ecx + 0x18]
// 005ec517  8b7e1c               mov edi, dword ptr [esi + 0x1c]
// 005ec51a  2b6b04               sub ebp, dword ptr [ebx + 4]
// 005ec51d  81ff00100000         cmp edi, 0x1000
// 005ec523  7e05                 jle 0x5ec52a
// 005ec525  bf00100000           mov edi, 0x1000
// 005ec52a  8b5620               mov edx, dword ptr [esi + 0x20]
// 005ec52d  8b4628               mov eax, dword ptr [esi + 0x28]
// 005ec530  57                   push edi
// 005ec531  52                   push edx
// 005ec532  50                   push eax
// 005ec533  e8ae872000           call 0x7f4ce6
// 005ec538  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 005ec53b  017e20               add dword ptr [esi + 0x20], edi
// 005ec53e  297e1c               sub dword ptr [esi + 0x1c], edi
// 005ec541  83c40c               add esp, 0xc
// 005ec544  890e                 mov dword ptr [esi], ecx
// 005ec546  897e04               mov dword ptr [esi + 4], edi
// 005ec549  c6462400             mov byte ptr [esi + 0x24], 0
// 005ec54d  3b6b04               cmp ebp, dword ptr [ebx + 4]
// 005ec550  7fbe                 jg 0x5ec510
// 005ec552  5f                   pop edi
// 005ec553  5e                   pop esi
// 005ec554  012b                 add dword ptr [ebx], ebp
// 005ec556  296b04               sub dword ptr [ebx + 4], ebp
// 005ec559  5d                   pop ebp
// 005ec55a  5b                   pop ebx
// 005ec55b  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_jpeg.cpp (function ?skip_input_data@G3D@@YAXPAUjpeg_decompress_struct@@J@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_jpeg.cpp
