// from server: 100% by auto
// roc 2009-06 00677b50  unit: RBX::Message  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00677b50
//
// 00677b50  6aff                 push -1
// 00677b52  6868058600           push 0x860568
// 00677b57  64a100000000         mov eax, dword ptr fs:[0]
// 00677b5d  50                   push eax
// 00677b5e  64892500000000       mov dword ptr fs:[0], esp
// 00677b65  51                   push ecx
// 00677b66  56                   push esi
// 00677b67  8bf1                 mov esi, ecx
// 00677b69  57                   push edi
// 00677b6a  89742408             mov dword ptr [esp + 8], esi
// 00677b6e  8b460c               mov eax, dword ptr [esi + 0xc]
// 00677b71  33ff                 xor edi, edi
// 00677b73  50                   push eax
// 00677b74  897c2418             mov dword ptr [esp + 0x18], edi
// 00677b78  e81337efff           call 0x56b290
// 00677b7d  897e0c               mov dword ptr [esi + 0xc], edi
// 00677b80  897e10               mov dword ptr [esi + 0x10], edi
// 00677b83  897e14               mov dword ptr [esi + 0x14], edi
// 00677b86  8b0e                 mov ecx, dword ptr [esi]
// 00677b88  51                   push ecx
// 00677b89  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00677b91  e8fa36efff           call 0x56b290
// 00677b96  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00677b9a  83c408               add esp, 8
// 00677b9d  893e                 mov dword ptr [esi], edi
// 00677b9f  897e04               mov dword ptr [esi + 4], edi
// 00677ba2  897e08               mov dword ptr [esi + 8], edi
// 00677ba5  5f                   pop edi
// 00677ba6  5e                   pop esi
// 00677ba7  64890d00000000       mov dword ptr fs:[0], ecx
// 00677bae  83c410               add esp, 0x10
// 00677bb1  c3                   ret 
// library g3d-6.09/G3Dcpp\MeshAlg.cpp (function ??1Vertex@MeshAlg@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlg.cpp
