// roc 2007-08 0050cf50  unit: G3D::BinaryInput  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050cf50
//
// 0050cf50  8b442404             mov eax, dword ptr [esp + 4]
// 0050cf54  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0050cf58  8b542404             mov edx, dword ptr [esp + 4]
// 0050cf5c  53                   push ebx
// 0050cf5d  8b1dd8e67700         mov ebx, dword ptr [0x77e6d8]
// 0050cf63  56                   push esi
// 0050cf64  57                   push edi
// 0050cf65  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 0050cf69  50                   push eax
// 0050cf6a  8b442434             mov eax, dword ptr [esp + 0x34]
// 0050cf6e  51                   push ecx
// 0050cf6f  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0050cf73  52                   push edx
// 0050cf74  83ec0c               sub esp, 0xc
// 0050cf77  85ff                 test edi, edi
// 0050cf79  8bf4                 mov esi, esp
// 0050cf7b  c70600000000         mov dword ptr [esi], 0
// 0050cf81  894604               mov dword ptr [esi + 4], eax
// 0050cf84  894e08               mov dword ptr [esi + 8], ecx
// 0050cf87  7502                 jne 0x50cf8b
// 0050cf89  ffd3                 call ebx
// 0050cf8b  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0050cf8f  8b442440             mov eax, dword ptr [esp + 0x40]
// 0050cf93  893e                 mov dword ptr [esi], edi
// 0050cf95  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 0050cf99  83ec0c               sub esp, 0xc
// 0050cf9c  85ff                 test edi, edi
// 0050cf9e  8bf4                 mov esi, esp
// 0050cfa0  c70600000000         mov dword ptr [esi], 0
// 0050cfa6  895604               mov dword ptr [esi + 4], edx
// 0050cfa9  894608               mov dword ptr [esi + 8], eax
// 0050cfac  7502                 jne 0x50cfb0
// 0050cfae  ffd3                 call ebx
// 0050cfb0  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0050cfb4  8b542440             mov edx, dword ptr [esp + 0x40]
// 0050cfb8  893e                 mov dword ptr [esi], edi
// 0050cfba  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 0050cfbe  83ec0c               sub esp, 0xc
// 0050cfc1  85ff                 test edi, edi
// 0050cfc3  8bf4                 mov esi, esp
// 0050cfc5  c70600000000         mov dword ptr [esi], 0
// 0050cfcb  894e04               mov dword ptr [esi + 4], ecx
// 0050cfce  895608               mov dword ptr [esi + 8], edx
// 0050cfd1  7502                 jne 0x50cfd5
// 0050cfd3  ffd3                 call ebx
// 0050cfd5  893e                 mov dword ptr [esi], edi
// 0050cfd7  8b742440             mov esi, dword ptr [esp + 0x40]
// 0050cfdb  56                   push esi
// 0050cfdc  e8effdffff           call 0x50cdd0
// 0050cfe1  83c434               add esp, 0x34
// 0050cfe4  5f                   pop edi
// 0050cfe5  8bc6                 mov eax, esi
// 0050cfe7  5e                   pop esi
// 0050cfe8  5b                   pop ebx
// 0050cfe9  c3                   ret 
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ??$copy@V?$_Vb_iterator@V?$vector@_NV?$allocator@_N@std@@@std@@@std@@V12@@std@@YA?AV?$_Vb_iterator@V?$vector@_NV?$allocator@_N@std@@@std@@@0@V10@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
