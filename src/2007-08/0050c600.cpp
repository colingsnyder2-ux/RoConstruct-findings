// roc 2007-08 0050c600  unit: G3D::BinaryInput  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050c600
//
// 0050c600  55                   push ebp
// 0050c601  8b2dd8e67700         mov ebp, dword ptr [0x77e6d8]
// 0050c607  56                   push esi
// 0050c608  8bf1                 mov esi, ecx
// 0050c60a  833e00               cmp dword ptr [esi], 0
// 0050c60d  7406                 je 0x50c615
// 0050c60f  837e0400             cmp dword ptr [esi + 4], 0
// 0050c613  7502                 jne 0x50c617
// 0050c615  ffd5                 call ebp
// 0050c617  8b06                 mov eax, dword ptr [esi]
// 0050c619  53                   push ebx
// 0050c61a  8b5e08               mov ebx, dword ptr [esi + 8]
// 0050c61d  83c004               add eax, 4
// 0050c620  57                   push edi
// 0050c621  8b7804               mov edi, dword ptr [eax + 4]
// 0050c624  3b7808               cmp edi, dword ptr [eax + 8]
// 0050c627  7602                 jbe 0x50c62b
// 0050c629  ffd5                 call ebp
// 0050c62b  8b4604               mov eax, dword ptr [esi + 4]
// 0050c62e  8b0e                 mov ecx, dword ptr [esi]
// 0050c630  2bc7                 sub eax, edi
// 0050c632  c1f802               sar eax, 2
// 0050c635  c1e005               shl eax, 5
// 0050c638  03c3                 add eax, ebx
// 0050c63a  3b01                 cmp eax, dword ptr [ecx]
// 0050c63c  5f                   pop edi
// 0050c63d  5b                   pop ebx
// 0050c63e  7202                 jb 0x50c642
// 0050c640  ffd5                 call ebp
// 0050c642  8b4e08               mov ecx, dword ptr [esi + 8]
// 0050c645  8b5604               mov edx, dword ptr [esi + 4]
// 0050c648  b801000000           mov eax, 1
// 0050c64d  d3e0                 shl eax, cl
// 0050c64f  5e                   pop esi
// 0050c650  5d                   pop ebp
// 0050c651  2302                 and eax, dword ptr [edx]
// 0050c653  f7d8                 neg eax
// 0050c655  1bc0                 sbb eax, eax
// 0050c657  f7d8                 neg eax
// 0050c659  c3                   ret 
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ??B?$_Vb_reference@V?$vector@_NV?$allocator@_N@std@@@std@@@std@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
