// from server: 100% by auto
// roc 2007-08 0050c660  unit: G3D::BinaryInput  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050c660
//
// 0050c660  53                   push ebx
// 0050c661  55                   push ebp
// 0050c662  8b2dd8e67700         mov ebp, dword ptr [0x77e6d8]
// 0050c668  56                   push esi
// 0050c669  57                   push edi
// 0050c66a  8bf9                 mov edi, ecx
// 0050c66c  8b5f08               mov ebx, dword ptr [edi + 8]
// 0050c66f  3b5f0c               cmp ebx, dword ptr [edi + 0xc]
// 0050c672  7602                 jbe 0x50c676
// 0050c674  ffd5                 call ebp
// 0050c676  85ff                 test edi, edi
// 0050c678  8b742414             mov esi, dword ptr [esp + 0x14]
// 0050c67c  c70600000000         mov dword ptr [esi], 0
// 0050c682  895e04               mov dword ptr [esi + 4], ebx
// 0050c685  c7460800000000       mov dword ptr [esi + 8], 0
// 0050c68c  7502                 jne 0x50c690
// 0050c68e  ffd5                 call ebp
// 0050c690  893e                 mov dword ptr [esi], edi
// 0050c692  8b3f                 mov edi, dword ptr [edi]
// 0050c694  85ff                 test edi, edi
// 0050c696  7608                 jbe 0x50c6a0
// 0050c698  57                   push edi
// 0050c699  8bce                 mov ecx, esi
// 0050c69b  e840feffff           call 0x50c4e0
// 0050c6a0  5f                   pop edi
// 0050c6a1  8bc6                 mov eax, esi
// 0050c6a3  5e                   pop esi
// 0050c6a4  5d                   pop ebp
// 0050c6a5  5b                   pop ebx
// 0050c6a6  c20400               ret 4
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?end@?$vector@_NV?$allocator@_N@std@@@std@@QAE?AV?$_Vb_iterator@V?$vector@_NV?$allocator@_N@std@@@std@@@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
