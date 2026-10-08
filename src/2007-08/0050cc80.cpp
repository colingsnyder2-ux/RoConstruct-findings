// from server: 100% by auto
// roc 2007-08 0050cc80  unit: G3D::BinaryInput  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050cc80
//
// 0050cc80  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0050cc84  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0050cc88  8b542418             mov edx, dword ptr [esp + 0x18]
// 0050cc8c  53                   push ebx
// 0050cc8d  8b1dd8e67700         mov ebx, dword ptr [0x77e6d8]
// 0050cc93  56                   push esi
// 0050cc94  57                   push edi
// 0050cc95  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0050cc99  50                   push eax
// 0050cc9a  83ec0c               sub esp, 0xc
// 0050cc9d  85ff                 test edi, edi
// 0050cc9f  8bf4                 mov esi, esp
// 0050cca1  c70600000000         mov dword ptr [esi], 0
// 0050cca7  894e04               mov dword ptr [esi + 4], ecx
// 0050ccaa  895608               mov dword ptr [esi + 8], edx
// 0050ccad  7502                 jne 0x50ccb1
// 0050ccaf  ffd3                 call ebx
// 0050ccb1  8b442424             mov eax, dword ptr [esp + 0x24]
// 0050ccb5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0050ccb9  893e                 mov dword ptr [esi], edi
// 0050ccbb  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0050ccbf  83ec0c               sub esp, 0xc
// 0050ccc2  85ff                 test edi, edi
// 0050ccc4  8bf4                 mov esi, esp
// 0050ccc6  c70600000000         mov dword ptr [esi], 0
// 0050cccc  894604               mov dword ptr [esi + 4], eax
// 0050cccf  894e08               mov dword ptr [esi + 8], ecx
// 0050ccd2  7502                 jne 0x50ccd6
// 0050ccd4  ffd3                 call ebx
// 0050ccd6  893e                 mov dword ptr [esi], edi
// 0050ccd8  e823fbffff           call 0x50c800
// 0050ccdd  83c41c               add esp, 0x1c
// 0050cce0  5f                   pop edi
// 0050cce1  5e                   pop esi
// 0050cce2  5b                   pop ebx
// 0050cce3  c3                   ret 
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ??$fill@V?$_Vb_iterator@V?$vector@_NV?$allocator@_N@std@@@std@@@std@@_N@std@@YAXV?$_Vb_iterator@V?$vector@_NV?$allocator@_N@std@@@std@@@0@0AB_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
